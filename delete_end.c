#include"header.h"
#include"prototype.h"

int delete_end(struct node * start)
{
	struct node * temp;
	struct node * pre;
	int count=0;
	pre = start;
	while(start->next)
	{
		start= start->next;
		if(count>=1)
		{
			pre = pre->next;
		}
		
		count++;
	}
	if(start->next == NULL)
	{
		start = pre;
		start->next = NULL;
	}
	printf("\t\tNode deleted from The end\n");	
	return 0;
}

