#include <iostream>

using namespace std;


class Node{
	public:
	int data;
	Node* next;
	
	//constructor
	Node(int data){
		this->data=data;
		this->next=NULL;
		
	} 
	
	~Node(){
		int value = this -> data;
		if(this->next!=NULL){
			delete next;
			next = NULL;
		}
	}
};

void InsertAtHead(Node* &head, int d){
	
	Node* temp = new Node(d);
	temp->next = head;
	head=temp;
	
}

void InsertAtTail(Node* &tail, int d){
	Node* temp = new Node(d);
	tail->next=temp;
	tail = temp;
}

void InsertAtPosition(Node* &head ,int position,int d){
	Node* temp = head;
	int cnt = 1;
	
	while(cnt<position-1){
		temp=temp->next;
		cnt++;
	}
	
	Node* NodetoInsert = new Node(d);
	NodetoInsert->next = temp->next;
	temp->next=NodetoInsert;
	
	 
}

void deleteNode(int position, Node* &head){
	
	if(position==1){
		
		Node* temp = head;
		
		head = head->next;
		
		temp->next = NULL;
		
		delete temp;
		
	}
	else{
		
		//middle or last
		
		Node* curr = head;
		Node* prev= NULL;
		
		int cnt=1;
		while(cnt<position){
			prev = curr;
			curr = curr->next;
			cnt++;			
		}
		
		prev->next = curr->next;
		
		curr->next=NULL;
		delete curr;
		
		
	}
}

void printLinkedList(Node* &head){
	Node* temp=head;
	
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	
	Node* node1 = new Node(10);
	
	cout<<node1->data<<endl;
	cout<<node1->next<<endl;
	
	
	Node* head = node1;
	Node* tail = node1;
	
	InsertAtHead(head,12);
	//printLinkedList(head);
	
	InsertAtTail(tail,15);
//	printLinkedList(head);

	InsertAtPosition(head,3,4);
	//printLinkedList(head);
	
	deleteNode(4,head);
	printLinkedList(head);
	
	
	
	
	
	
	return 0;
}
