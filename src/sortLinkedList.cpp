/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	 int key;
    struct node *q;int temp;
    struct node *lptr = NULL;
	if(head==NULL)
	return NULL;
	else
        {
    do
    {
        key = 0;
        q = head;

        while (q->next != lptr)
        {
            if (q->num > (q->next->num))
            {
                temp=q->num;
                q->num=q->next->num;
                q->next->num=temp;
                key = 1;
            }
            q = q->next;
        }
        lptr = q;
    }
    while (key);
        return head;
        }
}

