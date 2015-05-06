typedef struct node *listnode;
typedef struct node{
	int val;
	listnode next;
	listnode prev;
};

extern void head(listnode hnode);
extern void add(listnode addnode , listnode pre);
extern listnode create(int val);
extern void list_all_entry(listnode head);