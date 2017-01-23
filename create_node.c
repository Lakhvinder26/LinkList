#include"header.h"
#include"prototype.h"

int create_node(struct node * new)
{
	struct node * temp;
	temp  = (struct node *)malloc(sizeof(struct node)); 
	if(!temp)
	{
		perror("malloc");
		goto out;
	}
	temp->next = NULL;
	while(new->next)
	{
		
		new = new->next;

	}
//	printf(" data %d \n",new->data);
	printf("\t\tEnter the data\n");
	printf("\t\t=>");
	scanf("%d",&temp->data);
	new->next = temp;
	printf("\t\tNew Node Created \n");

return 0 ;
out:
return -1;

}
