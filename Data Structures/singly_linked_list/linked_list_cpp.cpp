//reference geeksforgeeks
#include <bits/stdc++.h>

using namespace std;

class Node
{
	public:
	int data;
	Node *next;

};


void push(Node** head,int new_data)


{	//make a new node 
	Node* new_node = new Node();


	//new node data from input filled
	new_node->data = new_data;

	// **head pointer to pointer address but we want address of only, this is a way to 
	// use it in  function, we would never use **head we will only use *head 
	new_node->next = (*head);

	(*head) = new_node;

}




void insert_in_between(Node* previous_node, int new_data)
{
	// check is previous node is not empty
	if (previous_node == NULL)
	{
		cout<<"error: previous node is null";
		return;

	}


	Node* new_node = new Node();


	new_node->data = new_data;

	// making the previous node->next points to the address of node after it
	// giving this address to the new_node
	new_node->next = previous_node->next;

	previous_node->next = new_node;


}



void insert_at_end(Node** head,int new_data)
{
	Node* new_node = new Node();

	Node *last = *head;

	new_node->data = new_data;

	new_node->next = NULL;

	// first cheking if any node exists before
	//traversing the list

	if (*head == NULL)
	{
		*head = new_node;// if the head pointer doesnt exist or is null new node
		// is the first node hence it will point to the new node

		return;// end of the story
	}

	//traversing

	while (last->next != NULL)
	{
		last = last->next;
	}
last->next = new_node;
return;

}

void printList(Node *node)
{

	while (node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}


int main()  
{  
    /* Start with the empty list */
    Node* head = NULL;  
      
    // Insert 6. So linked list becomes 6->NULL  
    insert_at_end(&head, 6);  
      
    // Insert 7 at the beginning.  
    // So linked list becomes 7->6->NULL  
    push(&head, 7);  
      
    // Insert 1 at the beginning.  
    // So linked list becomes 1->7->6->NULL  
    push(&head, 1);  
      
    // Insert 4 at the end. So  
    // linked list becomes 1->7->6->4->NULL  
    insert_at_end(&head, 4);  
      
    // Insert 8, after 7. So linked  
    // list becomes 1->7->8->6->4->NULL  
    insert_in_between(head->next, 8);  
      
    cout<<"Created Linked list is: ";  
    printList(head);  
      
    return 0;  
}  //reference geeksforgeeks
#include <bits/stdc++.h>

using namespace std;

class Node
{
	public:
	int data;
	Node *next;

};


void push(Node** head,int new_data)


{	//make a new node 
	Node* new_node = new Node();


	//new node data from input filled
	new_node->data = new_data;

	// **head pointer to pointer address but we want address of only, this is a way to 
	// use it in  function, we would never use **head we will only use *head 
	new_node->next = (*head);

	(*head) = new_node;

}




void insert_in_between(Node* previous_node, int new_data)
{
	// check is previous node is not empty
	if (previous_node == NULL)
	{
		cout<<"error: previous node is null";
		return;

	}


	Node* new_node = new Node();


	new_node->data = new_data;

	// making the previous node->next points to the address of node after it
	// giving this address to the new_node
	new_node->next = previous_node->next;

	previous_node->next = new_node;


}



void insert_at_end(Node** head,int new_data)
{
	Node* new_node = new Node();

	Node *last = *head;

	new_node->data = new_data;

	new_node->next = NULL;

	// first cheking if any node exists before
	//traversing the list

	if (*head == NULL)
	{
		*head = new_node;// if the head pointer doesnt exist or is null new node
		// is the first node hence it will point to the new node

		return;// end of the story
	}

	//traversing

	while (last->next != NULL)
	{
		last = last->next;
	}
last->next = new_node;
return;

}

void printList(Node *node)
{

	while (node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}


int main()  
{  
    /* Start with the empty list */
    Node* head = NULL;  
      
    // Insert 6. So linked list becomes 6->NULL  
    insert_at_end(&head, 6);  
      
    // Insert 7 at the beginning.  
    // So linked list becomes 7->6->NULL  
    push(&head, 7);  
      
    // Insert 1 at the beginning.  
    // So linked list becomes 1->7->6->NULL  
    push(&head, 1);  
      
    // Insert 4 at the end. So  
    // linked list becomes 1->7->6->4->NULL  
    insert_at_end(&head, 4);  
      
    // Insert 8, after 7. So linked  
    // list becomes 1->7->8->6->4->NULL  
    insert_in_between(head->next, 8);  
      
    cout<<"Created Linked list is: ";  
    printList(head);  
      
    return 0;  
}  