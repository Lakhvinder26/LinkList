#include"header.h"
#include"prototype.h"

int insert_pos(struct node * start)
{
	
	struct node * temp;
	struct node * temp2;
	int pos=0;
	printf("\t\tEnter the location you want to enter the node \n");
	printf("\t\t=>");
	scanf("%d",&pos);
	int i;
	int count=0;
	for(i=1;i<pos;i++)
	{
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
		
		start= start->next;
	}
	
		temp = create_node_1();
		temp2 =start->next;
		temp->next = temp2;		
		start->next = temp;
	
	printf("\t\tNode inserted in The %d position\n",pos);	
	return 0;
	out:
	return -1;
}

