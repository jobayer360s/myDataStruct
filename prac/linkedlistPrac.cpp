#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node(int val){
    data = val;
    next = NULL;
  }

};
void insertAtHead(Node* &head, int val){
  Node* n = new Node(val);
  n->next = head;
  head = n;
}
void insertAtTail(Node* &head , int val){
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }
    Node* temp;
    temp = head;

    while (temp->next != NULL)
    {
       temp= temp->next;
    }
    temp->next = n;



}


void display(Node* &head){
    Node* temp = head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteAtHead(Node* &head){
  Node* toDelate = head;
  head = head->next;
  delete toDelate;
}

void deletion(Node* &head , int val){
  
  Node* temp = head;
   if(head == NULL){
       return;
       }

   if (head->next == NULL)
   {
    deleteAtHead(head);
    return;
   }
    
while (temp->next->data != val)
{
  temp = temp->next;
}
Node* toDelete = temp->next;
 temp->next = temp->next->next;
delete toDelete;

}

void search(Node* head , int val){
  Node* temp = head;
  while (temp->next != NULL)
  {
    if (temp->data == val){
      cout<<"found"<<endl;
      return;
    }
  
   temp = temp->next;
  }
  cout<<"not found "<<endl;
  
}



int main(){
 
 Node* head = NULL;
 insertAtTail(head , 10);
 insertAtTail(head , 20);
 insertAtTail(head , 30);
 insertAtTail(head , 40);
 display(head);
 deletion(head, 20);
 display(head);
 deleteAtHead(head);
 display(head);
 search(head,10);
 search(head,70);
 insertAtHead(head, 5);
 display(head);
return 0;
}