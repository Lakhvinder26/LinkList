#include"header.h" 							// Comment Starts here	//
#include"prototype.h"
int main()
{
	int choice=0;
	struct node *start;						// created a structure variable
while(1)
{	
	choice = main_menu();
	if(choice == 0)
	{
		break;
	}
	
	if(!start)
	{
		
		start = (struct node *)malloc(sizeof(struct node));	// if start is empty memory is allocated to first node
		if(!start)
		{
			printf("malloc failed\n");
		}
		start->next = NULL;
		start->data = 0;
		
		printf("\n\t\tFirst node created\n");
	}
	else
	{
		operations(start,choice);
	}
		
}
return 0;
}

