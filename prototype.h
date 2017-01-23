struct node
{
	int data;
	struct node *next;

};
int main_menu();
int create_node(struct node *);
int operations(struct node *,int);
int treverse(struct node *);
struct node * create_node_1();
int insert(struct node *);
int insert_beg(struct node *);
int insert_end(struct node *);
int insert_pos(struct node *);
int insert_menu();
int delete_linklist(struct node *);
int delete_beg(struct node *);
int delete_end(struct node *);
int delete_pos(struct node *);
int delete_menu();
