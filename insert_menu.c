#include"header.h"
#include"prototype.h"

int insert_menu()
{
	int choice = 0;
	printf("\t\t  Enter your Choice\n");
	printf("\t\t1.Insert in begining\n");
	printf("\t\t2.Insert in the End of linklist\n");
	printf("\t\t3.Insert in the desired location\n");
	printf("\t\t0.Exit or previous menu\n");
	printf("\t\t=>");
	scanf("%d",&choice);
	
return choice;
}
