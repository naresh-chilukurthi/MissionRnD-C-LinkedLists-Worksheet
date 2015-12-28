/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
    struct node* temp;int count1=0,count2=0,count0=0,countl=0,i=1;
    temp=head;
    while(temp)
    {
        if(temp->data==1)
            ++count1;
        else if(temp->data==2)
            ++count2;
        else
            ++count0;
        temp=temp->next;
    }
    countl=count0+count1+count2;
    temp=head;
    while(temp)
    {
        if(i<=count0)
        {
            temp->data=0;
        }
        else if(i>count0&&i<=(count0+count1))
            temp->data=1;
        else
            temp->data=2;
        temp=temp->next;
        i++;
    }

}
int main()
{
    int num_array[100] = {0,0,0,1,1,1,2,2,2,2};
}
