

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
	node* insert(node* head);
};