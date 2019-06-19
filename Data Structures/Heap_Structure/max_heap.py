# heap in python
# reference : Joe-James

### three main functions 
# exchange, Up_climb_the_lader and Down_climb_the_lader 


## Up_climb_the_lader means first we will put the data at the end of the heap and float it up 
## to the position it deserves

## peek will check if the heap has a value at 1st position and will return it


## throw means removing data from heap



class MaxHeap:
	def __init__(self, items=[]):
		#super().__init__()
		# declare self.heap as array of stored data
		self.heap = [0]
		for x in items:
			# adding those items in this list but index 0 keeping nothing as first element
			self.heap.append(x)
			self.Up_climb_the_lader(len(self.heap)-1)

	def push (self,data):
		## add it to the end and then fix the tree by keep exchanging until it settles at its
		##proper place
		self.heap.append(data)
		self.Up_climb_the_lader(len(self.heap)- 1)

## to see the largest element
	def peek(self):
		if self.heap[1]:
			return self.heap[1]
		else:
			return False

## to delete the maximum value of heap
## heap is used for priority so max value has highest priority so poing means removing
## maximum value in a way that should not affect the structure of heap
	def pop(self):
		## self.heap[0] is null and 
		if len(self.heap) >2:
			print("yoyo")
			print("self.heap inside if",self.heap)
			## swap the maximum element with the last element
			self.exchange(1,len(self.heap)-1)
			## store the maximum element
			maximum = self.heap.pop()
			self.Down_climb_the_lader(1)
		elif len(self.heap) == 2:
			#print("self.heap inside elif",self.heap)
			maximum = self.heap.pop()## python inbuilt pop function is used here
			#print("maximum",maximum)
		else:
			print("self.heap inside else",self.heap)
			maximum = False	
		return maximum	



	def exchange(self,i,j):
		self.heap[i],self.heap[j] = self.heap[j],self.heap[i]


	def Up_climb_the_lader(self, index):
		parent= index//2## thats the reason why we sort the elements in an array
		#base case
		if index <=1 :
			return

		elif self.heap[index] > self.heap[parent]:
			## exchange until it reaches the top
			self.exchange(index,parent)
			##after exchanging the parent contains the value of the child
			## therefor recurse with parent until base case
			self.Up_climb_the_lader(parent)

	def Down_climb_the_lader(self,index):
		## these are children
		## in one of the push or pop operations we are going to station the element to the 
		## top hence its index is largest, not necessarily be the root can be at some node


		left = index*2
		right = index*2+1
		highest =index # highest is that index because we will travel down from here
		## highest index will have the index where the value is high so it works as 
		## a flag which will point to the heighest index
		## the code below says that if left child  exist and if tree is not proper
		if len(self.heap) > left and self.heap[highest] < self.heap[left]:
			## give the index which has highest value to the flag highest
			highest = left
		elif len(self.heap) > left and self.heap[highest] < self.heap[right]:	
			highest = right
		## now the logic is that if the highest has changed we need to 
		## fix it by exchanging or swaping at local level and again then swapping shall
		## be recursive until leaf node is reached
		if highest != index:
			## exchange or swap it 
			self.exchange(index,highest)
			## locally tree is fixed but we need to fix for all miscalcualtions hence we 
			## will call function again with left or highest as an argument	
			self.Down_climb_the_lader(highest)

m = MaxHeap([95])
print(str(m.heap[0:len(m.heap)]))
#print(str(m.pop()))
print(m.pop())


## this kind of structure ustilized O(logn)
