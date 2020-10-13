#include<iostream>

using namespace std;
struct node{
	int data;
	node* next;
	
};
node* head=NULL;
void print(node* x){
	while(x){
		cout<<x->data<<endl;
		x=x->next;
	}
}

void push_element(int d){
	if(!head){
		node* Node=new node();
		Node->data=d;
		Node->next=NULL;
		head=Node;
	}else{
		node* Node=new node();
		
		node* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=Node;
		Node->data=d;
		Node->next=NULL;
	}
}
void del(int d){
	node* temp=head;
	node* prev=NULL;
	while(temp->data!=d){
		prev=temp;
		temp=temp->next;
	}
	if(temp==head){
		head=head->next;
		delete(temp);
	}else{
		prev->next=temp->next;
		delete(temp);
	}
}
void update(int d,int c){
	node* temp=head;
	while(temp->data!=d){
		temp=temp->next;
	}
    temp->data=c;
}
int main(){
	cout<<"Initial Linked List\n";
	push_element(5);
	push_element(50);
	push_element(20);
	print(head);
	update(50,6);
	cout<<"Linked List after  operation:\n";
	print(head);
	return 0;
}
