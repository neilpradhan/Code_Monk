#my_binary_tree.py
#Inspiration taken from Article in Medium by Siddharth
#simple way to define
## the tree is inserted in a way that left node will always be less than root and right 
## will be greater than root.
## here data means integer used as value of the node
## most times data is used sometimes value is used
## MOST CHALLENGING PART IS DELETING NODE BECAUSE WE HAVE TO PRESERVE THE RULE
## WHICH IS THAT LEFT LEAF OR NODES < ROOT NODE < RIGHT LEAVES OR NODES
## Deleting node with no children is the base case for recurrsion
class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None


## Inserting a tree such that value smaller than value left side else right side
class BinaryTree():

    def __init__(self, root):
        self.root = Node(root)
    ##use this function to insert node  
    def start_insert(self,data):
        return self.insert(self.root,data)

    ##use this function to start searching for given node if exist boolean
    def start_search(self,data):
        return self.search(self.root,data)

    ##use this function to find maximum node in entire tree
    def giving_maximum_node(self):
        return self.maximum_node(self.root)

    def giving_minimum_node(self):
        return self.minimum_node(self.root)

    
    def giving_requested_node(self,value):
        return self.search_Node(self.root,value)

#this function will delete the node with that value in self.root tree
    def deleting_requested_node(self,value):
        return self.delete_node(self.root,value)




    def insert(self,node ,data):

        #First check if the data is less than data
        # then 
        if data < node.data:
            if node.left == None:
                node.left = Node(data)

            else:
                print("lets put it in the left")
                self.insert(node.left,data)

        else:
            if node.right == None:
                node.right = Node(data)
            else:
                print("traversing to the right")
                self.insert(node.right,data)

        return
        

### I have doubt if there  exist cases where elif may not work but if will ??
    def search_Node(self,node,value):
        if value == node.data:
            return node
        elif value < node.data and node.left == None:
            return "node not found"
        elif value >node.data  and node.right == None:
            return "node not found"
        else:
            if value < node.data:
                return self.search_Node(node.left,value)
            elif value > node.data:
                return self.search_Node(node.right,value)    
                        

## search for a value in the tree
    def search(self,node ,data):
        if data == node.data:
            return True
        elif data < node.data and node.left == None:
            return False
        elif data >node.data  and node.right == None:
            return False
        else:
            if data < node.data:
                return self.search(node.left,data)
            elif data > node.data:
                return self.search(node.right,data)

        
        
## use this to print our tree
    def print_in_ascending(self,node):
        if node.left != None:
            self.print_in_ascending(node.left)

        print(node.data)

        if node.right != None:
            self.print_in_ascending(node.right)

    def maximum_node(self,node):
        if node.right != None:
            return self.maximum_node(node.right)
        if node.right == None:
            return node

    def minimum_node(self,node):
        if node.left != None:
            return self.minimum_node(node.left)
        if node.left == None:
            return node

## the "node" value will be taken as the root of tree for traversal until a node with 
## "value" which is input is found
## so basically we are deleting the children of  node with value as "value", taken as 
## input
    def delete_child_node(self,node,value):
        if node.left != None and node.left.data == value:
            node.left = None # thats where we delete the node 
            # we equate the node to none
            return "node is deleted"


        if node.right != None and node.right.data == value:
            node.right = None # thats where we delete the node 
            # we equate the node to none
            return "node is deleted"    

        else:
            if value < node.data:
                return self.delete_child_node(value,node.left)
            elif value > node.data:
                return self.delete_child_node(value,node.right)

## node is reserved for tree.root thus traversing the entire tree
## value is the input so this function below will traverse through tree find the node with that value and delete all its children

    def delete_node(self,node,value):
        if self.start_search(value) == False:
            return "such a node doesn't exist"              
        else:
            ## "wanna_delete" is the node that we want to delete
            wanna_delete = self.search_Node(node,value)
            ### the most complicated logic comes here\
            ## see if it has children
            if wanna_delete.right != None:
                ## traverse through the left of right child till the end
                minimum = self.minimum_node(wanna_delete.right)
                ## give the value of that last child to wanna_delete node
                wanna_delete.data = minimum.data
                ## there can be multiple cases here
                #1 . right of wanna_delete can be minimum 
                #2. right of left left..... of wanna_delete can be minimum
                #3. miminum.left== None is 100% sure but we do not know about minimum.right
                # However we are gonna call this function recursively so at times we need the condition
                # minimum.left  is some value which we need to get rid of
                ## one beautiful function

                if minimum.left == None and minimum.right == None:
                    #minimum has no child
                    if wanna_delete.right.data == minimum.data:
                        #assuming  right node to wanna_delete is the minimum node and 
                        #tree ends here
                        wanna_delete.right = None # making the node none
                        return "Node is deleted"
                    else :
                        # traversing to the minimum node or leftmost node considering
                        # wanna_delete.right as the root deleting all the children of this
                        # minimum
                        return self.delete_child_node(wanna_delete.right,minimum.data)  

                ### this is super use of recurrsion hats off
                if minimum.right!= None:
                    return self.deleting_requested_node(minimum.right.data)
                    ## the above expresion makes sure that all right nodes to the minimum node are 
                    #deleted  through recursion
            if wanna_delete.left != None and wanna_delete.right == None:
                ## repeat similar to what we did before
                #here the logic is that we keep finding the maximum of the wanna_delete.left as root
                ## and delete all children and finally the node itself.
                maximum = self.maximum_node(wanna_delete.left)
                wanna_delete.data = maximum.data
                if maximum.left == None and maximum.right == None:
                    if wanna_delete.left.data == maximum.data:
                        wanna_delete.left = None
                        return " Node is deleted"
                    else:
                        return self.delete_child_node(wanna_delete.left,maximum.data)
                

                if maximum.left != None:
                    return self.deleting_requested_node(maximum.left.data)
            

            if wanna_delete.left == None and wanna_delete.right == None:
                return self.delete_child_node(node,value)





# declare root 
tree = BinaryTree(13)

## insert nodes
tree.start_insert(25)
tree.start_insert(30)
tree.start_insert(20)
tree.start_insert(10)
tree.start_insert(8)
tree.start_insert(11)


#print nodes
tree.print_in_ascending(tree.root)


# search for 18,result should be False
print(tree.start_search(18))

##search for 20 result should be true

print(tree.start_search(20))

##lets try to delete node for the most difficult case where a node has two children



tree.deleting_requested_node(10)

tree.print_in_ascending(tree.root)

##Results

#                13
#              /   \
#             10   25
#            /  \  /  \
#            8  11 20  30 


# after deleting 10, we replace it by 11 

# Summary:

# 3 cases 

# case 1: nodes with no child simply delete 
# case 2. nodes with one child delete and let their parent point to their child

# case3: complicated , find the node to the right just greater than wanna_delete node after which 
# recursively try to give its value to the node which needs to be deleted
 