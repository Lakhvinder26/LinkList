#include"header.h"
#include"prototype.h"

struct node * create_node_1()
{
	struct node * temp;
	temp  = (struct node *)malloc(sizeof(struct node)); 
	if(!temp)
	{
		perror("malloc");
		goto out;
	}
	temp->next = NULL;
	printf("\t\tEnter the data\n");
	printf("\t\t=>");
	scanf("%d",&temp->data);
	printf("\t\tNew Node Created \n");

return temp;
out:
return 0;

}
