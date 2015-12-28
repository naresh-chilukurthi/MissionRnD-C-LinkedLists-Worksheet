/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES:

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *p=NULL,*q,*r,*temp;int rem,num=N;
	if(N==0)
    {   p=(node*)malloc(sizeof(struct node));
        p->num=0;
        p->next=NULL;
    }
    else
    {   q=p;
        if(N<0)
            num=-num;
        while(num>0)
        {
            if(p==NULL)
            {
                p=(node*)malloc(sizeof(struct node));
                p->num=num%10;
                p->next=NULL;
                num=num/10;
            }
            else{
                r=(node*)malloc(sizeof(struct node));
                r->num=num%10;
                num=num/10;
                r->next=p;
                p=r;

            }
        }
    }
    return p;

}
