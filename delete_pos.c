#include"header.h"
#include"prototype.h"

int delete_pos(struct node * start)
{
	
	struct node * pre;
	pre = start;
	int pos=0;
	printf("\t\tEnter the location you want to enter the node \n");
	printf("\t\t=>");
	scanf("%d",&pos);
	if(pos == 0)
	{
		printf("\t\tYou cannot delete 0th node\n");
		goto out;
	}
	int i;
	int count=0;
	for(i=0;i<pos;i++)
	{
		start= start->next;
		if(count>=1)
		{
			pre=pre->next;
		}
		count++;
		if(start->next == NULL)
		{
			if(count != pos)
			{
				printf("\t\tINVALID NUMBER OR NODE NOT EXIST\n");
				printf("\t\tENTER VALID NUMBER\n");
				goto out;
				
			}
		}
	}
	
	
		pre->next = start->next;
		start->next = NULL;
	
	printf("\t\tNode Deleted from The %d position\n",pos);	
	return 0;
	out:
	return -1;
}

