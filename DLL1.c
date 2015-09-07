/* Doubly Linked List implementation */
#include<stdio.h>
#include<stdlib.h>

struct Node {
	int const value;
	struct Node* next;
	struct Node* prev;
};

struct Node* Current; // global variable - pointer to current node.

//Creates a new Node and returns pointer to it. 
struct Node* GetNewNode(int value) {
	struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
	newNode->value = value;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

//Prints all the elements in linked list in forward traversal order
void Print() {
	struct Node* temp = head;
	printf("Forward: ");
	while(temp != NULL) {
		printf("%d ",temp->value);
		temp = temp->next;
	}
	printf("\n");
}


int main(int argc, char *argv[]) {

	current = NULL;
	int value;
	scanf("%i", value);
	if value != 0 
	{
		struct Node* NewNode GetNewNode(value);
		if (current != NULL)
		{
			NewNode->prev = current;
			current->next = NewNode;
			current = NewNode;
		}
		else
		{
			NewNode->prev = 0;
			Current = NewNode;
		}
	}
	else
	{
		Printf("End of List");
	}

	
		
}
