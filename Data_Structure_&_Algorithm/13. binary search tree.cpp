#include<iostream>
#define SPACE 10
using namespace std;
class TreeNode{
	public:
		TreeNode* left;
		TreeNode* right;
		int data; // key or data
		TreeNode(){
			left=NULL;
			right=NULL;
			data=0;
		}
		TreeNode(int v){
			left=NULL;
			right=NULL;
			data = v;
		}
};
class BST{
	public:
		TreeNode* root;
		BST(){
			root=NULL;
		}

		bool isTreeEmpty(){
			if (root==NULL){
				return true;
			}else{
				return false;
			}
		}
		
/*	
	insert will be according to BST >>  LEFT < PARENT < RIGHT
	Check if new value add at left sub tree or in right sub tree
*/
		void insertNode(TreeNode *n){
			if (root==NULL){
				root = n;
				cout<<"Value Inserted as root node!"<<endl;
			}else{
				TreeNode *temp=root;
				while(temp!= NULL){
					if(temp->data==n->data){
						cout<<"Dublicate values are not allow"<<endl;
						return;
					}else if(n->data < temp->data && temp->left==NULL){
						temp->left = n;
						cout<<"Value Inserted to left!"<<endl;
						break;
					}else if(n->data < temp->data){
						temp = temp->left;
					}else if(n->data > temp->data && temp->right==NULL){
						temp->right = n;
						cout<<"Value Inserted to right!"<<endl;
						break;
					}else{
						temp = temp->right;
					}
					
				}
			}
		}
		
//		insertion with recurtion 
		TreeNode* insertRecursive(TreeNode *r, TreeNode *new_node){
			if(r==NULL) {
				r=new_node;
				cout <<"Insertion successful"<<endl;
				return r;
			}
		
			if(new_node->data < r->data){
				r->left = insertRecursive(r->left,new_node);
			}
			else if (new_node->data > r->data){
				r->right = insertRecursive(r->right,new_node);
			}
		   else {
		     	cout << "No duplicate values allowed!" << endl;
		     	return r; 
			}
			return r;
	}

/* 
   N = Node , L= Left Child , R = Right child
    TRAVERSAL Approaches >>move from 1 node to another
    1: depth first traversal approach 
    	1.1:Pre-Order  (NLR >> Node , left , right)
    		* acess the data of node
    		* traverse the left sub tree recursively >> means  node left child and left child node left child untill leaf node arrive 
    		* after the left subtree traverse you come to root node 
    		* traverse the right sub tree but follow again node , left , right
    		  
    	1.2:In-Order   (LNR >>  left ,Node , right)
    		*traverse the left sub tree recursively
			*acess the data of node
			*traverse the right sub tree recursively
    	1.3:PostOrder  (LRN >> left , right, Node )
    		*traverse the left sub tree recursively
			*traverse the right sub tree recursively
			*acess the data of node
    2:Breadth first traversal approach 
		level by level 
*/
		
		// depth first traversal approach 
		void printPreorder(TreeNode * r) //(current node, Left, Right) 
		{
			if (r == NULL)
				return;
			/* first print data of node */
			cout << r->data << " ";
			/* then recur on left sutree */
			printPreorder(r->left);
			/* now recur on right subtree */
			printPreorder(r->right);
		}	
		void printInorder(TreeNode * r) //  (Left, current node, Right)
		  {
		    if (r == NULL)
		      return;
		    /* first recur on left child */
		    printInorder(r->left);
		    /* then print the data of node */
		    cout << r->data << " ";
		    /* now recur on right child */
		    printInorder(r->right);
		  }
  		void printPostorder(TreeNode * r) //(Left, Right, Root)
		  {
		    if (r == NULL)
		      return;
		    // first recur on left subtree 
		    printPostorder(r->left);
		    // then recur on right subtree 
		    printPostorder(r->right);
		    // now deal with the node 
		    cout << r->data<< " ";
		  }
//		  90 degree rotated printed tree
		void print2D(TreeNode * r, int space) { // reverse inorder (right , node , left)
			if (r == NULL) // Base case  1
			  return;
			space += SPACE; // Increase distance between levels   2
			print2D(r -> right, space); // Process right child first 3 
			cout << endl;
			for (int i = SPACE; i < space; i++) 
			  cout << " "; // 5.1  
			cout << r -> data << "\n"; 
			print2D(r -> left, space); 
		}
		// Breadth first traversal approach 
		/* 
		  * combination of iterative and recursive approch
		  * level by level
		  *	
		*/
		void printLevelOrder(TreeNode* r){
			int h= height(r); // call the hight function
			for(int i =0;i<=h;i++){
				printGivenLevel(r,i);
			}
		}
		void printGivenLevel(TreeNode* r,int level){
			if(r==NULL){
				return;
			}else if(level==0){
				cout<<r->data<< " ";
			}else{
				printGivenLevel(r->left,level-1);
				printGivenLevel(r->right,level-1);
			}
		}
		//Searching 
		/*
			searching is traversing in the tree 
			* left node < parent node < right node
			* so if you want to search a number compae it with parent if smaller go toleft sub tree if larger go to right subtree and if same stop
			*
		*/
		
		TreeNode* iterativeSearch(int v){
			if (root==NULL){
				return root;
			}else{
				TreeNode* temp = root;
				while (temp!=NULL){
					if (temp->data== v){
						return temp;
					}else if (v < temp->data){
						temp = temp->left;
					}else{
						temp = temp->right;
					}
				}
				return NULL;
			}
		}
		
		TreeNode* recursiveSearch(TreeNode* r, int v){
			if(r==NULL || r->data == v){
				return r;
			}else if( v < r->data ){
				recursiveSearch(r->left, v);
			}else{
				recursiveSearch(r->right, v);
			}
		}
		TreeNode* search(TreeNode* r, int v){
			
		}
		TreeNode* minValueNode(TreeNode* r){
			TreeNode* current = r;
			while (current->left!=NULL){
				current = current->left;
			}
			return current;
		}
		
//		deleting the node 
		/*
		There are 3 nodes can b deleted 
		    1. del node at the leaf (just del the leaf and remove the link from the tree)
		    2. del node with one child (just remove that and attach the child with the node before that(parent node of the node that we del). [lefr / right pointer depends which side you are])
		    3. del node with 2 childern (just find the suitable node to replace that node which is del) 
		    	3.1: there are 2 ways to find the suitable node to replace
		    		* find the min node from the right sub tree
										   OR
					* find the max node from the left sub tree
		    
		    code for del node at leaf and with 1 child is the same
		*/
		TreeNode* deleteNode(TreeNode* r, int v){
			 // base case 
    		if (r == NULL) {
		      return NULL;
		    }
		    // If the key to be deleted is smaller than the root's key, 
		    // then it lies in left subtree 
		    else if (v < r->data) {
		      r -> left = deleteNode(r -> left, v);
		    }
		    // If the key to be deleted is greater than the root's key, 
		    // then it lies in right subtree 
		    else if (v > r->data) {
		      r -> right = deleteNode(r -> right, v);
		    }
		    // if key is same as root's key, then This is the node to be deleted 
		    else {
		      // node with only one child or no child 
		      if (r -> left == NULL) {
		        TreeNode * temp = r -> right;
		        delete r;
		        return temp;
		      } else if (r -> right == NULL) {
		        TreeNode * temp = r -> left;
		        delete r;
		        return temp;
		      } else {
		        // node with two children: Get the inorder successor (smallest 
		        // in the right subtree) 
		        TreeNode * temp = minValueNode(r -> right);
		        // Copy the inorder successor's content to this node 
		        r->data = temp ->data;
		        // Delete the inorder successor 
		        r -> right = deleteNode(r -> right, temp -> data);
		        //deleteNode(r->right, temp->value); 
		      }
		    }
		    return r;
		}
//		height of the tree is the number of edges between the tree's root and its further leaf
		int height(TreeNode* r){
			if (r == NULL){
				return -1;
			}else{
				int lheight= height(r->left);
				int rheight= height(r->right);
				if(lheight > rheight){
					return (lheight + 1); 
				}else{
					return (rheight + 1);
				}
			}
		}
		
		
};
int main()
{
	BST obj;
  	int option, val;
	do {
	    cout << "What operation do you want to perform? " <<" Select Option number." << endl;
	    cout << "1. Insert Node" << endl;
	    cout << "2. Search Node" << endl;
	    cout << "3. Delete Node" << endl;
	    cout << "4. Print/Traversal BST values" << endl;
	    cout << "5. Height of Tree" << endl;
	    cout << "6. Clear Screen" << endl;
	    cout << "0. Exit Program" << endl;
	
	    cin >> option;
	    //Node n1;  this create in stack(after loop run again it will remove from memory) but we want heap to not to erace
	    TreeNode * new_node = new TreeNode();
	
	    switch (option) {
	    case 0:
	      break;
	    case 1:
	      	cout <<"INSERT"<<endl;
			cout <<"Enter VALUE of TREE NODE to INSERT in BST: ";
			cin >> val;
			new_node->data = val;
			obj.root= obj.insertRecursive(obj.root,new_node);
//			obj.insertNode(new_node);
			cout<<endl;
			break;
	      
	    case 2:
			cout << "SEARCH" << endl;
			cout << "Enter VALUE of TREE NODE to SEARCH in BST: ";
			cin >> val;
//			new_node = obj.iterativeSearch(val);
			new_node = obj.recursiveSearch(obj.root, val);
			if (new_node != NULL) {
				cout << "Value found" << endl;
			} else {
				cout << "Value NOT found" << endl;
			}
			break;
	    case 3:
			cout << "DELETE" << endl;
			cout << "Enter VALUE of TREE NODE to DELETE in BST: ";
			cin >> val;
			new_node = obj.iterativeSearch(val);
			if (new_node != NULL) {
				obj.deleteNode(obj.root, val);
				cout << "Value Deleted" << endl;
			} else {
				cout << "Value NOT found" << endl;
			}
			break;
	    case 4:
		  cout << "PRINT 2D: " << endl;
		  obj.print2D(obj.root, 5);
		  cout << endl;
		  cout << "Print Level Order BFS: \n";
		  obj.printLevelOrder(obj.root);
		  cout << endl;
  	      cout <<"PRE-ORDER: ";
  	      obj.printPreorder(obj.root);
  	      cout<<endl;
  	      cout <<"IN-ORDER: ";
  	      obj.printInorder(obj.root);
  	      cout<<endl;
  	      cout <<"POST-ORDER: ";
  	      obj.printPostorder(obj.root);
  	      cout<<endl;
		  break;
	    case 5:
			cout << "TREE HEIGHT" << endl;
			cout << "Height : " << obj.height(obj.root) << endl;
			break;
	    case 6:
			system("cls");
			break;
	    default:
			cout << "Enter Proper Option number " << endl;
	    }
	
	  } while (option != 0);
		
	return 0;
}

