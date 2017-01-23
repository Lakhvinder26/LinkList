#include"header.h"
#include"prototype.h"

int treverse(struct node * start)
{
	int count =0;
	printf("\t\tnode no %d ----> Data-> %d\n",count,start->data);
	while(start->next)
	{
		
		start = start->next;
		count++;
		printf("\t\tnode no %d ----> Data-> %d\n",count,start->data);
	}

return 0;
}
