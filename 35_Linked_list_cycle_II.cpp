#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/
/*
Node *firstNode(Node* head){
    map<Node* ,bool>visited;
    Node* ptr = head;
    while(ptr != NULL){
        if(visited[ptr] == true){
            return ptr;
        }
        visited[ptr] = true;
        ptr = ptr->next;
    }
    return NULL;
}
*/
Node *firstNode(Node *head)
{
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow) break;
    }
    if(fast == NULL || fast->next == NULL){
        return NULL;
    }
    slow = head;
    while(slow != fast){
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}