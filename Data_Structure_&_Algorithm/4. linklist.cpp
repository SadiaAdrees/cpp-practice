/*
  singly linklist 
    

*/
#include <iostream>
using namespace std;
class Node{
	public:
		int key; 
		int data; 
		Node* next;
		Node(){
			key = 0 ;
			data = 0;
			next = NULL;
		}
		Node ( int k , int d){
			key = k ;
			data = d;
		}
};

class SingleLinklist{
	public:
		Node* head;
		SingleLinklist(){
			 head= NULL;
		}
		SingleLinklist( Node* n){
			head = n;    
		}
		
//1.		check if the particular node exist or not using key value 
//		to check that particular key value node exist or not as we can not dublicate the key 
		Node*  nodeExist(int k){
//			we need to iterate or teriverse the list
			Node* temp = NULL;
			Node* ptr=head;
			while (ptr!= NULL){
				if (ptr->key==k){
					temp = ptr;
				}
				ptr= ptr->next;
			}
			return temp;
		}
		
//2.		append node 
		void appendNode(Node* n){
//			check if the key of that node already exist or not use the exist node method 
			if (nodeExist(n->key)!=NULL){
				cout<<"Node Already Exist with the key value "<<n->key<<"Please append another node"<<endl;
			}else{
				if(head == NULL){
					head = n;
					cout<<"Node Appended"<<endl;
				}else{
					Node* ptr=head;
					while (ptr->next!= NULL){
						ptr= ptr->next;
					}
					ptr->next = n; 
					cout<<"Node Appended"<<endl;
				}	
			}
		}
		
//3.		prepend node (add node at the start
		void prependNode(Node* n){
			if (nodeExist(n->key)!=NULL){
				cout<<"Node Already Exist with the key value "<<n->key<<"Please append another node"<<endl;
			}else{
				n->next = head;
				head = n;
				cout<<"Node Prepended"<<endl;
//				if(head == NULL){
//					head = n;
//					cout<<"Node Appended"<<endl;
//				}else{
//					Node* ptr= head;
//					head = n;
//					head->next = ptr;
//					cout<<"Node Appended"<<endl;
//				}			
		}
		}
//4. 	insert a node after the particular node 
		void insertNode(int k, Node* n){
			Node* ptr= nodeExist(k);
			if (ptr==NULL){
				cout<<"No node exist with the key value "<<k <<endl;
			}else{
				if (nodeExist(n->key)!=NULL){
					cout<<"Node Already Exist with the key value "<<n->key<<"Please append another node"<<endl;
			    }else{
			    	n->next = ptr->next;
			    	ptr->next = n;
			    	cout<<"Node Inserted"<<endl;
				}
			}	
		}
		
		
//5.	delete node by unique key 
		void deleteNode(int k){
			if(head == NULL){
				cout<<"Linklist has no node"<<endl;
			}else if (head!=NULL){
				if (head->key = k){
					head = head->next;
					cout<<"Node Deleted."<<endl;
				}else{
					Node* temp = NULL;
					Node* prevptr = head;
					Node* currentptr= head->next;
					while(currentptr!= NULL){
						if(currentptr->key == k){
						   temp = currentptr;
						   currentptr= NULL;							
						}else{
							prevptr = prevptr->next;
							currentptr= currentptr->next;
						}
					}
					if (temp!=NULL){
						prevptr->next= temp->next;
						cout<<"Node Unlinked with key value: "<<k<<endl;
					}else{
						cout<<"Node do not exist."<<endl;
					}
				}
			}
		}
		
//6.		Update one
		void updateNode(int k , int d){
			Node* ptr = nodeExist(k);
			if(ptr!=NULL){
				ptr->data = d;
				cout<<"Data Updated successfully."<<endl;
			}else{
				cout<<"Node does not exist."<<endl;
			}
		}	
//7. Printing
		void printList(){
			if(head==NULL){
				cout<<"No Node in the linklist."<<endl;
			}else{
				cout<<"The value of linklist are as follow: "<<endl;
				Node* ptr= head;
				while (ptr!=NULL){
					cout<<"{ Key = "<<ptr->key<<", Data = "<<ptr->data <<" }"<<endl;
					ptr= ptr->next; 
				}
			}
		}
	
};
int main(){
	SingleLinklist s;
	int option;
	int key1, k1, data1;
	do {
	cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
	cout << "1. appendNode()" << endl;
	cout << "2. prependNode()" << endl;
	cout << "3. insertNodeAfter()" << endl;
	cout << "4. deleteNodeByKey()" << endl;
	cout << "5. updateNodeByKey()" << endl;
	cout << "6. print()" << endl;
	cout << "7. Clear Screen" << endl << endl;
	
	cin >> option;
	Node * n1 = new Node();
	//Node n1;
	
	switch (option) {
	case 0:
	  break;
	case 1:
	  cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
	  cin >> key1;
	  cin >> data1;
	  n1 -> key = key1;
	  n1 -> data = data1;
	  s.appendNode(n1);
	  //cout<<n1.key<<" = "<<n1.data<<endl;
	  break;
	
	case 2:
	  cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
	  cin >> key1;
	  cin >> data1;
	  n1 -> key = key1;
	  n1 -> data = data1;
	  s.prependNode(n1);
	  break;
	
	case 3:
	  cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
	  cin >> k1;
	  cout << "Enter key & data of the New Node first: " << endl;
	  cin >> key1;
	  cin >> data1;
	  n1 -> key = key1;
	  n1 -> data = data1;
	
	  s.insertNode(k1, n1);
	  break;
	
	case 4:
	
	  cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
	  cin >> k1;
	  s.deleteNode(k1);
	
	  break;
	case 5:
	  cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
	  cin >> key1;
	  cin >> data1;
	  s.updateNode(key1, data1);
	
	  break;
	case 6:
	  s.printList();
	
	  break;
	case 7:
	  system("cls");
	  break;
	default:
	  cout << "Enter Proper Option number " << endl;
	}
	
	} while (option != 0);
	return 0;
}
