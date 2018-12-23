struct node
{
	int data;
	node* next;
};


class list
{
	private:
	node* head;

	public:
	list();
	node* insert(node* head);
	node* remove(node* head);
};
