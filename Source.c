#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node {
	int value;
	struct Node* next;
	struct Node* prev;
};

// global variable
struct Node* current;  //pointer to current node
struct Node* head;	   //pointer to head of list

//Creates a new Node and returns pointer to it. 
struct Node* GetNewNode(int val) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->value = val;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

//Prints all the elements in linked list 
void PrintList(struct Node* head) {
	struct Node* temp = head;
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
				head = NewNode;		//set the head pointer
			}
		}
		else
		{
			NewNode->next = 0;
			EOL = true;
		}
	}
	printf("End of List\n");
	PrintList(head);
	return 0;
}