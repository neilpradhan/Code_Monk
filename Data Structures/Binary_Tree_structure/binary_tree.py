#reference : @Lucid Programming

class Node:
	def __init__(self,value):
		self.value = value
		self.left = None
		self.right = None


class BinaryTree(object):
	def __init__(self, root):
		self.root = Node(root)




	def print_tree(self,traversal_type):
		if traversal_type == "preorder_print":
			return self.preorder_print(tree.root," ")

		elif traversal_type == "inorder_print":
			return self.inorder_print(tree.root," ")
		
		elif traversal_type == "postorder_print":
			return self.postorder_print(tree.root," ")		
		else:
			print("traversal_type" + str(traversal_type)+ "is not supported")
			return False




	def preorder_print(self,start, traversal):
#		"root-> left->right" # traversal is tr is a string
		if start:
			traversal+=(str(start.value)+"-")
			traversal = self.preorder_print(start.left,traversal)
			#once it gets none traversal is ready to be returned for left but the execution is still remaining for the 
			#line below so now it is tree.root.left.left
			#below becomes tree.root.left.right
			## but the logic is for every time preorder_print is called you have to execute 
			#the line below so after left side is done
			#right side will be accessed
			# thus it becomes 
			# tree.root.left.left and tree.root.left.right
			# so basically everything is not executed at once until none is found 
			#function will wait to execute

			traversal = self.preorder_print(start.right,traversal)
		return traversal

#             1
#           /   \ 
#		   2     3
#         / \   /  \  
#        4   5  6   7    
#                    \
#                     8 

	def inorder_print(self,start, traversal):
		#"left-root-right"
		if start:
			traversal= self.inorder_print(start.left,traversal)
			# this will travel complete till the left end
			#after that we will start printing the nodes
			traversal+= (str(start.value)+"-")
			traversal = self.inorder_print(start.right,traversal)
		return traversal	


	def postorder_print(self,start,traversal):
		#"left-right-root"
		# easiest way to understand is image a stack being formed here as we take in the recursive
		#functions to put into it
		# traversal is just a string
		if start:
			traversal = self.postorder_print(start.left,traversal)
			##  now we have travelled through all the left end
			## program will execute all of stack until the root
			traversal = self.postorder_print(start.right,traversal)
			## all through the right has been traversed
			## if doubt on how program goes up just check the stack created
			traversal += (str(start.value)+"-") 
		return traversal


tree = BinaryTree(1)
tree.root.left = Node(2)
tree.root.right = Node(3)
tree.root.left.left = Node(4)
tree.root.left.right = Node(5)
tree.root.right.left = Node(6)
tree.root.right.right = Node(7)
tree.root.right.right.right = Node(8)



print(tree.print_tree("preorder_print"))

## Ans :  1-2-4-5-3-6-7-8-


print(tree.print_tree("inorder_print"))

## Ans : 4-2-5-1-6-3-7


print(tree.print_tree("postorder_print"))

## Ans: 4-5-2-6-8-7-3-1-
