#include"header.h"
#include"prototype.h"

int operations(struct node * next, int choice)
{
	int ret=0;
	 switch(choice)
        {
                case 1 :
                       ret = create_node(next);
			if(ret<0)
			{
				printf("\t\tERROR node NOT created\n");
			}
                        break;
		case 2 : 
			insert(next);
			break;
		case 3 :
			delete_linklist(next);
			break;
		case 4 :
			treverse(next);
			break;
                default :
                        printf("\t\tInvalid Input");

        }



return 0;
}
