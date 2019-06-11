## inserting new node at the end of linked list
## inserting new node in the beginning
## inserting new node in between

class Node:
	def __init__ (self,data):
		self.data = data
		self.next = None

class linked_list:
	def __init__(self):
		self.head = None

	def insert_node(self,new_node):
		if self.head is  None:
			self.head = new_node
		else:
			#traverse all nodes till the end
			current_node = self.head
			while True:
				if current_node.next is None:
					current_node.next = new_node # the meaning of this is that pointer will point to the new node and new node pointer will point to None
					break
				
				current_node = current_node.next


	def insert_node_as_head(self,new_node):

		temp_node = self.head
		self.head = new_node
		new_node.next=temp_node				
	
	def print_linked_list(self):
		current_node = self.head
		print(current_node.data)
		while current_node.next is not None:
			current_node = current_node.next
			print(current_node.data)
		return

	def insert_node_in_between(self,new_node,n):
		# first we will traverse till the number n 
		# then we will store details of n-1 node in temp variable then 
		# cut the pointer to point to the new node and new node to point to the nth node
		# lets assume numbering starts from 0
		
		current_node = self.head		
		
		for i in range(0,n):
			# last index is n-1

			#most important understanding
			previous_node = current_node
			# Now the previous_node and current_node have pointers pointing at same box
			#pratab so you are not supposed to do current_node.next in the lhs only rhs 
			#allowed which means you can assign it to someone else no worries but you cannot
			#let someone give it new value
			current_node = current_node.next

			

		# temp_node = current_node		
		# # current_node.next = new_node
		# # temp_node = temp_node.next
		# # new_node.next = temp_node
		# print("temp_node heads to pratap",temp_node.next.data)# pratap
		# current_node.next = new_node
		# #changing current node here will also change temp_node hence we will create a new
		# # temporary variable and see if it solves the problem
		# print("lets see where new node points expected None",new_node.next)
		# Pratap = temp_node.next
		# ## that means temp is changed here because current node is changed
		# print("pratap expected",Pratap.data)# got arun
		

		# #new experiment using temp_node instead of current_node				
		# temp_node = current_node		
		# # current_node.next = new_node
		# # temp_node = temp_node.next
		# # new_node.next = temp_node
		# print("temp_node heads to pratap",temp_node.next.data)# pratap
		# temp_node.next = new_node
		# #changing current node here will also change temp_node hence we will create a new
		# # temporary variable and see if it solves the problem
		# print("lets see where new node points expected None",new_node.next)
		# Pratap = temp_node.next
		# ## that means temp is changed here because current node is changed
		# print("pratap expected",Pratap.data)# got arun



		# # another new experiment using temp_node instead of current_node				
		# temp_node = current_node
		# temp_node2 = temp_node		
		# # current_node.next = new_node
		# # temp_node = temp_node.next
		# # new_node.next = temp_node
		# print("temp_node heads to pratap",temp_node.next.data)# pratap
		# current_node.next = new_node
		# #changing current node here will also change temp_node hence we will create a new
		# # temporary variable and see if it solves the problem
		# print("lets see where new node points expected None",new_node.next)
		# Pratap = temp_node2.next
		# ## that means temp is changed here because current node is changed
		# print("pratap expected",Pratap.data)# got arun

		previous_node.next = new_node
		#print("prev node",previous_node.data)
		#print("current node",current_node.data)
		new_node.next = current_node


firstNode = Node("kishan")
LINKEDLIST=linked_list()
LINKEDLIST.insert_node(firstNode)




secondNode = Node("Pratap")
LINKEDLIST.insert_node(secondNode)

thirdNode = Node("neha")
LINKEDLIST.insert_node(thirdNode)


nodeinbeginning  = Node("Akshay")
LINKEDLIST.insert_node_as_head(nodeinbeginning)

node_in_between =  Node("arun")
LINKEDLIST.insert_node_in_between(node_in_between,2)

LINKEDLIST.print_linked_list()


