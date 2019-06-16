//reference:geeksforgeeks

//inorder traversal 
#include<iostream>
#include<queue>
using namespace std;


//defining
struct Node
{
	int key;
	struct Node *left, *right;

};

struct Node* newNode(int key)
{	//allocating memory using new
	struct Node* temperary = new Node;

	temperary->key = key;
	temperary->left = temperary->right = NULL;

	return temperary; 
};


// it will take pointer as an input that points to a struct Node type
void inorder(struct Node* temp) 
{	//return NULL if temp pointer is facing null
	if (!temp)
		return;
	inorder(temp->left);
	cout<<temp->key<<" ";
	inorder(temp->right);
	
};





void insert(struct Node* temp,int key) 
{	//queue stores pointer to the struct Node
	queue<struct Node*>q;
//put temp in the queue most likely root
	q.push(temp);
	// lets do level order traversal until empty
	// q.empty() returns true if underlying is empty boolean return
	while(!q.empty())
	{	//until queue is empty or while it is not empty 
		struct Node* temp = q.front();//return of q.front() will be a pointer that points to a  struct Node pointer named as temp

		q.pop();//pop the front out for adding visited nodes 

		if (temp->left== NULL)
		{
			// if no node exist lets create one 
			temp->left = newNode(key);
			break;

		}
		else
		{
			//mark temp as visited and add the left node in queue
			q.push(temp->left);
		}		

		
		if (temp->right == NULL)
		{
			temp->right = newNode(key);
			break;

		}

		else
		{
			q.push(temp->right);
		}



	}
