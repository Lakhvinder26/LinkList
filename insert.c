#include"header.h"
#include"prototype.h"

int insert(struct node * start)
{
	int ret=0;
	while(1)
	{
		ret = insert_menu();
		if(ret == 0)
		{
			break;
		}
		switch(ret)
		{
			case 1:
				insert_beg(start);
				break;
			case 2:
				insert_end(start);
				break;
			case 3: 
				insert_pos(start);
				break;
			default:
				printf("\t\tInvalid output\n");		

		}
		
	}

return 0;
}
