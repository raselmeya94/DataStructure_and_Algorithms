# basic tree data structure
class TreeNode:
    def __init__(self, data):
        self.data=data
        self.children=[]
        self.parent=None
    def get_level(self):
        level=0
        p=self.parent
        while p:
            p=p.parent
            level+=1
        return level
    def add_child(self,child):
        child.parent=self
        self.children.append(child)

    def print_tree(self):
        space=" "*self.get_level()*3
        space+="|__" if self.parent else ""
        print(space+self.data)
        for child in self.children:
            child.print_tree()


def build_tree():
    root=TreeNode("University")
    #institude/faculty/department
    Engineering=TreeNode("Engineering")
    Engineering.add_child(TreeNode("CSE"))
    Engineering.add_child(TreeNode("EEE"))
    Engineering.add_child(TreeNode("ICE"))
    LifeScience=TreeNode("Life Science")
    LifeScience.add_child(TreeNode("Pharmacy"))
    LifeScience.add_child(TreeNode("Biology"))
    LifeScience.add_child(TreeNode("Chemistry"))
    general=TreeNode("General")
    general.add_child(TreeNode("English"))
    general.add_child(TreeNode("Bangla"))
    general.add_child(TreeNode("History"))
    root.add_child(Engineering)
    root.add_child(LifeScience)
    root.add_child(general)

    return root


if __name__=="__main__":
    root= build_tree()
    root.print_tree()
    
 '''
 Output:
 
University
   |__Engineering 
      |__CSTE     
      |__EEE      
      |__ICE      
   |__Life Science
      |__Pharmacy 
      |__Biology  
      |__Chemistry
   |__General     
      |__English  
      |__Bangla   
      |__History 
 

 
 '''

