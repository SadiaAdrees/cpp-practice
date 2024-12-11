#include<iostream>
using namespace std;
class Node{
	public:
		int key; 
		int data; 
		Node* next;
		Node* prev;
		Node(){
			key = 0 ;
			data = 0;
			next = NULL;
			prev = NULL;
		}
		Node ( int k , int d){
			key = k ;
			data = d;
		}
};
class DoublyLinkedList{
	public: 
		Node* head;
		DoubleLinkedlist(){
			head = NULL;
		}
		DoubleLinkedlist(Node* n){
			head = n;
		}
//		1. EXIST METHOD USING KEY VALUE
		Node* CheckNode(int k){
			Node* temp= NULL;
			Node* ptr = head;
			while (ptr!=NULL){
				if (ptr->key==k){
					temp = ptr; 
				}
				ptr=ptr->next;
			}
			return temp;
		}
//		2. Append
		void AppendNode(Node* n){
			if(CheckNode(n->key)!=NULL){
				cout<<"Node already Exist in the Linkedlist with the key "<<n->key<<" use another node with different key"<<endl;
			}else{
				if (head==NULL){
					head = n;
				}else{
					Node* temp= head;
					while(temp->next!=NULL){
						temp=temp->next;
					}
					temp->next = n;
					n->prev = temp;
					cout<<"Node Appened at the end."<<endl;
				}
			}
		}
//		3. Prepend
		void PrependNode(Node* n){
			if(CheckNode(n->key)!=NULL){
				cout<<"Node already Exist in the Linkedlist with the key "<<n->key<<" use another node with different key"<<endl;
			}else{
				if (head==NULL){
					head = n;
				}else{
					head->prev= n;
					n->next = head; 
					head = n;
					head->prev= NULL;
					cout<<"Node Prepended at the start."<<endl;
				}
			}
		}
//		4. Insert the node after particular node 
		void insertNode(int k, Node* n){
			Node* ptr = CheckNode(k);
			if(ptr== NULL){
				cout<<"No node Exist with "<<k<<" key value."<<endl;
			}else{
				if(CheckNode(n->key)!=NULL){
					cout<<"Node already Exist in the Linkedlist with the key "<<n->key<<" use another node with different key"<<endl;
		    	}else{
		    		cout<<"Inserting..."<<endl;
		    		Node* nextNode = ptr->next;
		    		
		    		// if inserting node at the end; 
		    		if(nextNode == NULL){
		    			ptr->next = n;
		    			n->prev = ptr;
		    			cout<<"Node Inserted at the end after the key value "<<n->key<<endl;
					}
					// if inserting node in between; 
					else{
						n->next= nextNode;
						nextNode->prev = n;
						n->prev = ptr;
						ptr->next = n;
						cout<<"Node Inserted in between after  the key value "<<n->key<<endl;
					}
					
				}
			}
		}
//		5. deleting a node
		void deleteNode(int k){
			Node* ptr = CheckNode(k);
			if(ptr== NULL){
				cout<<"No node Exist with "<<k<<" key value."<<endl;
			}else{
				if (head==NULL){
					cout<<"Linkedlist is Empty."<<endl;
				}else{
					if (head->key== k){
						head =head->next;
						cout<<"Node deleted with the key value "<<k<<" ."<<endl;
					}else{
						Node* nextNode = ptr->next;
						Node* preNode  = ptr->prev;
						if (nextNode==NULL){
							preNode->next= NULL;
							cout<<"Node Deleted at the end."<<endl;
						}else{
							preNode->next= nextNode;
							nextNode->prev = preNode;
							cout<<"Node Deleted in between."<<endl;
						}	
					}
				}
			}	
		}
//      6. Update one
		void updateNode(int k , int d){
			Node* ptr = CheckNode(k);
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
	DoublyLinkedList obj;
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
	  obj.AppendNode(n1);
	  //cout<<n1.key<<" = "<<n1.data<<endl;
	  break;
	
	case 2:
	  cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
	  cin >> key1;
	  cin >> data1;
	  n1 -> key = key1;
	  n1 -> data = data1;
	  obj.PrependNode(n1);
	  break;
	
	case 3:
	  cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
	  cin >> k1;
	  cout << "Enter key & data of the New Node first: " << endl;
	  cin >> key1;
	  cin >> data1;
	  n1 -> key = key1;
	  n1 -> data = data1;
	
	  obj.insertNode(k1, n1);
	  break;
	
	case 4:
	
	  cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
	  cin >> k1;
	  obj.deleteNode(k1);
	
	  break;
	case 5:
	  cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
	  cin >> key1;
	  cin >> data1;
	  obj.updateNode(key1, data1);
	
	  break;
	case 6:
	  obj.printList();
	
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
