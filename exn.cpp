#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // constructor
  Node(int val)
  {
    this->data = val;
    this->next = NULL;
  }
};

// Inserting element at tail
void insertAtTail(Node *&head, Node *&tail, int n)
{
  Node *tempNode = new Node(n);
  if (tail == NULL)
  {
    tail = tempNode;
    head = tempNode;
  }
  else
  {
    tail->next = tempNode;
    tail = tempNode;
  }
}

Node *reverse(Node *&head)
{
  Node *curr = head;
  Node *prev = NULL;
  Node *forward = NULL;
  while (curr != NULL)
  {
    forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
  }
  return prev;
}

Node *add(Node *head1, Node *head2)
{
  // reveres both linked list
  head1 = reverse(head1);
  head2 = reverse(head2);

  // add karo
  int carry = 0;
  Node *ansHead = NULL;
  Node *ansTail = NULL;

  while (head1 != NULL && head2 != NULL)
  {
    int sum = carry + head1->data + head2->data;
    int digit = sum % 10;
    insertAtTail(ansHead, ansTail, digit);
    carry = sum / 10;
    head1 = head1->next;
    head2 = head2->next;
  }

  while (head1 != NULL)
  {
    int sum = carry + head1->data;
    int digit = sum % 10;
    insertAtTail(ansHead, ansTail, digit);
    carry = sum / 10;
    head1 = head1->next;
  }

  while (head2 != NULL)
  {
    int sum = carry + head2->data;
    int digit = sum % 10;
    insertAtTail(ansHead, ansTail, digit);
    carry = sum / 10;
    head2 = head2->next;
  }

  while (carry != 0)
  {
    int sum = carry;
    int digit = sum % 10;
    insertAtTail(ansHead, ansTail, digit);
    carry = sum / 10;
  }
  return ansHead;
}

void print(Node *head)
{
  // creating a copy
  Node *copy = head;
  while (copy != NULL)
  {
    cout << copy->data << " ";
    copy = copy->next;
  }
  cout << endl;
}

int main()
{

  Node *head1 = NULL;
  Node *tail1 = NULL;

  insertAtTail(head1, tail1, 3);
  insertAtTail(head1, tail1, 4);

  Node *head2 = NULL;
  Node *tail2 = NULL;

  insertAtTail(head2, tail2, 2);
  insertAtTail(head2, tail2, 3);
  insertAtTail(head2, tail2, 0);

  print(head1);
  print(head2);

  Node *temp = add(head1, head2);
  print(reverse(temp));

  return 0;
}