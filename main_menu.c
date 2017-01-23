#include"header.h"

int main_menu()
{

	int choice;
	printf("\t\tEnter your choice: \n");
	printf("\t\t1.Create a New Node\n");
	printf("\t\t2.Insert node\n");
	printf("\t\t3.Delete\n");
	printf("\t\t4.Treverse node\n");
	printf("\t\t0.Exit\n");
	printf("\t\t=>");
	scanf("%d",&choice);
	return choice;
}

