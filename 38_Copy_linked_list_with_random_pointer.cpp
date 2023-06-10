void insertAtTail(LinkedListNode<int>* &head, LinkedListNode<int>* &tail, int n){
    LinkedListNode<int> *tempNode = new LinkedListNode<int>(n);
    if(tail == NULL){
      tail = tempNode;
      head = tempNode;
    }else{
      tail -> next = tempNode;
      tail = tempNode;
    }
}

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // create a copy
        LinkedListNode<int>* cloneHead = NULL;
        LinkedListNode<int>* cloneTail = NULL;

        LinkedListNode<int>* temp = head;
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp -> next;
        }
        unordered_map<LinkedListNode<int>*, LinkedListNode<int>*>mp;
        LinkedListNode<int>* oldHead = head;
        LinkedListNode<int>* newHead = cloneHead;

        while(oldHead != NULL){
            mp[oldHead] = newHead;
            oldHead = oldHead->next;
            newHead = newHead->next;
        }
        
        oldHead = head;
        newHead = cloneHead;

        while(oldHead != NULL){
            newHead->random = mp[oldHead->random];
            oldHead = oldHead->next;
            newHead = newHead->next;
        }
      return cloneHead;
}
