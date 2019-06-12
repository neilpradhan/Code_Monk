// reference : geeks_for_geeks
// liinked list in c

#include <stdio.h> 
#include <stdlib.h> 

struct Node
{
	int data;
	struct Node *next;
};


/* Given a reference (pointer to pointer) to the head of a list 
   and an int,  inserts a new node on the front of the list. */

//the pointer pointing to the head pointer hence double star
// simplest way to understand -> 1 and -> 2, the 2 stores the address of head and 1 stores the address of 2
// *head is a pointer head which stores address of head and **head is a pointer pointing
// to the pointer of head
void push(struct Node ** head ,int new_data)

{

//4 step process

//alocate the memory 
struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

//put inside the new data
new_node-> data = new_data;

// making next of new node as head

new_node->next = (*head);// this is the pointer2 which stores address of head, 
// head has address but *head has value that it stores, so head earlier stores the address 
// of the 1st guy in the  linked list and thus its value *head is assigned to new_node.next

// now the job of head is done so we need to move it to our new node

(*head)= new_node;
// thus the head pointer points to the new node and we are done
// the time complexity for push is o(1), regardless of linked list size or whatever 
// same amt of work is performed
	
}



//inserting node in between
void insert_in_between(struct Node* previous_node, int new_data)
{

if (previous_node == NULL)
	{
		printf("Error :Previous node is null");
		return;

	}

// new node in memory
struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

//put the data
new_node->data = new_data;

new_node->next = previous_node->next;// now whatever was next element of previous node will
//become next element of new node

previous_node->next = new_node;


}

//inserting node at the end

void place_at_end(struct Node** head, int new_data)
{

struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

struct Node *last = *head;

new_node->data = new_data;

// as its the last node lets make the next of it as None 

new_node->next = NULL;

// if link list is empty select new node as head

if (*head == NULL)
{
	*head = new_node;// this pointer points to the new node
	return;
}

//now traverse till the end

while(last->next != NULL)
{	
	last = last->next;
}


last->next = new_node;
return;
}
// the time complexity becomes o(n) as if the linked list has n elements we are traversing
// through all of them

// this funciton can be optimized for o(1) by keeping an extra pointer at the tail


void printList(struct Node *node) 
{ 
  while (node != NULL) 
  { 
     printf(" %d ", node->data); 
     node = node->next; 
  } 
} 

int main()
{

struct Node* head = NULL;

 // Insert 6.  So linked list becomes 6->NULL 
  place_at_end(&head, 6); 
  
  // // Insert 7 at the beginning. So linked list becomes 7->6->NULL 
  push(&head, 7); 
  
  // // Insert 1 at the beginning. So linked list becomes 1->7->6->NULL 
  push(&head, 1); 
  
  // // Insert 4 at the end. So linked list becomes 1->7->6->4->NULL 
  place_at_end(&head, 4); 
  
  // // Insert 8, after 7. So linked list becomes 1->7->8->6->4->NULL 
  insert_in_between(head->next, 8); 
  
  printf("\n Created Linked list is: "); 
  printList(head); 
  
  return 0; 


}