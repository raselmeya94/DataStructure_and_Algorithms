# Binary Search Tree
"""
A binary search tree is a binary tree in which each node has a key
Binary search tree is a data structure that quickly allows us to maintain a sorted list of numbers.

* It is called a binary tree because each tree node has a maximum of two children.
* It is called a search tree because it can be used to search for the presence of a number in O(log(n)) time.
* The properties that separate a binary search tree from a regular binary tree is

All nodes of left subtree are less than the root node
All nodes of right subtree are more than the root node
Both subtrees of each node are also BSTs i.e. they have the above two properties

"""

class BinarySearchTree:
    def __init__(self,data):
        self.left=None
        self.data=data
        self.right=None
    # added new child node 
    def add_node(self,data):
        if data==self.data:
            return
        if data<self.data:
            if self.left:
                self.left.add_node(data)
                
            else:
                self.left=BinarySearchTree(data)
        else:
            if self.right:
                self.right.add_node(data)  
            else:
                self.right=BinarySearchTree(data)

    # Inorder traversal
    def in_order_traversal(self):
        elements=[]
        if self.left:
            elements+=self.left.in_order_traversal()
        elements.append(self.data)
        if self.right:
            elements+=self.right.in_order_traversal()
        return elements
def build_tree(elements):
    root=BinarySearchTree(elements[0])
    for i in range(1,len(elements)):
        root.add_node(elements[i]) 
    return root

if __name__=="__main__":
    nodes=[4,2,1,6,8,7]
    binary_search_tree=build_tree(nodes)
    print(binary_search_tree.in_order_traversal())

   
