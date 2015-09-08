#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node {
	int value;
	struct Node* next;
	struct Node* prev;
};

struct Node* current; // global variable - pointer to current node.

//Creates a new Node and returns pointer to it. 
struct Node* GetNewNode(int val) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->value = val;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

//Prints all the elements in linked list 
void Print() {
	struct Node* temp = current;
	printf("Before Sorting: ");
	while (temp != NULL) {
		printf("%d ", temp->value);
		temp = temp->prev;
	}
	printf("\n");
}


int main(int argc, char *argv[]) {

	current = NULL;
	int value;             
	bool EOL = false;

	printf("enter your list, press 0 for end.\n");
	while (!EOL) {
		scanf_s("%i", &value);
		struct Node* NewNode = GetNewNode(value);
		if (value != 0)
		{
			if (current != NULL)
			{
				NewNode->prev = current;
				current->next = NewNode;
				current = NewNode;
			}
			else
			{
				NewNode->prev = 0;
				current = NewNode;
			}
		}
		else
		{
			NewNode->next = 0;
			EOL = true;
		}
	}
	printf("End of List\n");
	Print();
	return 0;
}