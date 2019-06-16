//reference :geeksforgeeks article on binary tree


// simply node is a ds which has pointers which point at same struct hence we
// write struct inside as well
//at address left

#include <stdlib.h>


struct node
    {
         int data;                 //Data element
         struct node *left;          //Pointer to left node
         struct node *right;         //Pointer to right node
    };
//new node is a pointer which points to a struct node structure
//basically new node is something that points to a struct Node type
struct node* newNode(int data)
{
// we give it some memory to a local variable
struct node* node = (struct node*)malloc(sizeof(struct node));

node->data = data;

node->left  = NULL;

node->right = NULL;

// we return a node datatype hence we can conclude now that newNode is actually a node

return (node);

}


int main()
{
//create a root
	// root is a pointer which points at a struct node type
	struct node *root = newNode(1);


	root->left = newNode(2);
	root->right = newNode(3);


  /* 2 and 3 become left and right children of 1 
           1 
         /   \ 
        2      3 
     /    \    /  \ 
    NULL NULL NULL NULL 
  */
  
  
  	root->left->left  = newNode(4); 
  /* 4 becomes left child of 2 
           1 
       /       \ 
      2          3 
    /   \       /  \ 
   4    NULL  NULL  NULL 
  /  \ 
NULL NULL 
*/
  
  	getchar(); 
  	return 0; 
}
