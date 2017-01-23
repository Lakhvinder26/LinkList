#include"header.h"
#include"prototype.h"

int delete_beg(struct node * start)
{
	struct node * temp;
	
	temp = start->next;
	 start->next = temp->next ;
	printf("\t\tNODE DELETED FROM BEGINING \n\n");	

}

