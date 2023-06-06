LinkedListNode<int>* reverse(LinkedListNode<int>* &head){
    // base condition
    if(head == NULL || head->next == NULL){
        return head;
    }
    LinkedListNode<int>* subhead = reverse(head->next);

    head->next->next = head;
    head->next = NULL;

    return subhead;
    
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    return reverse(head);
}