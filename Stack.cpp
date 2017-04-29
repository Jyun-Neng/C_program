#include <iostream>
using namespace std;

class Node
{
private:
	int data;
	Node *next;

	friend class Stack;	// Let Stack class can access the private data of Node.
};

class Stack
{
public:
	Stack();	// constructor.
	void Push(int data);
	void Pop();
	bool IsEmpty() const;	// const function.
	~Stack();
private:
	Node *top;
};

Stack::Stack()
:top(NULL){}	// Initialize the node.

Stack::~Stack(){
	delete top;
}

void Stack::Push(int data){
	Node *new_node = new Node;	// Create a memmory space for new_node.
	new_node -> data = data;
	new_node -> next = top;
	top = new_node;
}

void Stack::Pop(){
	Node *temp_node = top;
	cout << top -> data << endl;
	top = top -> next;
	delete temp_node;	// Delete the memory space of the popped node.
}

bool Stack::IsEmpty() const{
	return top == NULL;	// If there is no any node in the stack return true.
}

int main(int argc, char const *argv[])
{
	Stack stack;
	stack.Push(1);
	stack.Push(5);
	stack.Push(1);
	stack.Push(10);

	while(!stack.IsEmpty()){
		stack.Pop();
	}
	cout << "The stack is empty.\n";
	return 0;
}