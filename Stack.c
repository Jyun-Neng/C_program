#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
	int data;
	struct Node *next;
} NODE;	// Let NODE represent struct Node.

void Push(NODE **top_node, int *new_data)
{
	NODE *new_node;	// Create a new struct Node address.
	
	new_node = (NODE *)malloc(sizeof(NODE));	// To allocate memory for new_node.

	new_node->data = *new_data;
	new_node->next = *top_node;	// Assign the top_node address to node next.
	*top_node = new_node;	// Assign the new_node address to top_node.
}

void Pop(NODE **top_node)
{
	NODE *temp_node;	// Create a new struct Node address.
	printf("%d\n", (*top_node)->data);

	temp_node = *top_node;	// Assign the top_node address to temp_node.
	*top_node = (*top_node)->next;
	
	free(temp_node);	// Free the original top_node space.
}

bool IsNULL(NODE *node)
{
	return node == NULL;
}

int main(int argc, char const *argv[])
{
	int data;
	NODE *top;	// Create a new struct Node address.
	top = NULL;	// It's contain is NULL.

	data = 1;
	Push(&top, &data);	// Give Push function the pointer to node address and the data address.
	
	data = 2;
	Push(&top, &data);

	while(!IsNULL(top))
	{
		Pop(&top);
	}
	printf("Stack is empty.\n");

	return 0;
}