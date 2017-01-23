#include"header.h"
#include"prototype.h"

int delete_linklist(struct node * start)
{
	int ret=0;
	while(1)
	{
		ret = delete_menu();
		if(ret == 0)
		{
			break;
		}
		switch(ret)
		{
			case 1:
				delete_beg(start);
				break;
			case 2:
				delete_end(start);
				break;
			case 3: 
				delete_pos(start);
				break;
			default:
				printf("\t\tInvalid output\n");		

		}
		
	}

return 0;
}
