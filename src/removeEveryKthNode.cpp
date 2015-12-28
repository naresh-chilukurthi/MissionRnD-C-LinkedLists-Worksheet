/*
OVERVIEW: Given a single nexted list, remove every Kth node in the nexted list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A nexted list and Value of K.

OUTPUT: Remove every Kth node in the nexted list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<stdlib.h>
struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *temp,*q;int countl=1;
	if(K<=1||head==NULL)
    {
        return NULL;

    }
    else
    {
        q=head;
        while(q)
        {
            if((countl+1)%K==0&&q->next!=NULL)
            {
                temp=q->next;
                q->next=temp->next;
                free(temp);
                countl=countl+2;
            }
            else
                {
                    countl++;
                }
                q=q->next;
        }
        return head;
    }

}
