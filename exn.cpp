#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    // constructor
    Node (int val) {
        this -> data = val;
        this -> next = NULL;
    }
};

// Inserting element at head
void insertAtHead(Node* &head, int n){
    // creating new node
    Node *newNode = new Node(n);
    newNode -> next = head;
    head = newNode;
}

// Inserting element at tail
void insertAtTail(Node* &tail, int n){
    // creating new node;
    Node *tempNode = new Node(n);
    tail -> next = tempNode;
    tail = tempNode;
}

// Inserting element in middle
void insertAtPosition(Node* &head, int position, int data){
    Node *ptr = head;
    int cnt = 1;
    while(cnt < position - 1){
        ptr = ptr -> next;
        cnt++;
    }

    // creating a new node
    Node *newNode = new Node(data);
    newNode -> next = ptr -> next;
    ptr -> next = newNode;
}

void print(Node* head){
    // creating a copy
    Node *copy = head;
    while (copy != NULL){
        cout << copy->data << " ";
        copy = copy -> next;
    }
    cout << endl;
}

int getlength(Node *head){
    int length = 0;
    while(head!=NULL){
        head = head -> next;
        length++;
    }
    return length;
}
         
int main(){
         
  Node *second = new Node(3);

  Node *Head = second;
  Node *tail = second;
  

  insertAtHead(Head, 2);
  insertAtHead(Head, 1);
  insertAtTail(tail, 1);
  insertAtTail(tail, 6);
  insertAtTail(tail, 3);

  insertAtPosition(Head, 4 , 4);

   print(Head);  

   Node* curr = Head;
    while(curr != NULL){
        Node* temp = curr->next;
        while(temp != NULL){
            if(curr->data == temp->data){
                Node* a = temp;
                temp = temp->next;
                delete a;
            }else{
                temp = temp->next;
            }
        }
        curr = curr -> next;
    }

   print(Head);

 
      
  return 0;
} 