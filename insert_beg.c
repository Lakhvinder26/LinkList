#include"header.h"
#include"prototype.h"

int insert_beg(struct node * start)
{
	struct node * temp;
	temp = start->next;
	start->next = create_node_1();
	start = start->next;
	start->next = temp;
	printf("\t\tNode inserted in the beginning\n");	

}

