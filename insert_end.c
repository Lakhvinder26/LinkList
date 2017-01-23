#include"header.h"
#include"prototype.h"

int insert_end(struct node * start)
{
	struct node * temp;
	while(start->next)
	{
		start= start->next;
	}
	if(start->next == NULL)
	{
		temp = create_node_1();
		temp->next = NULL;
		start->next = temp;
	}
	printf("\t\tNode inserted in The end\n");	
	return 0;
}

