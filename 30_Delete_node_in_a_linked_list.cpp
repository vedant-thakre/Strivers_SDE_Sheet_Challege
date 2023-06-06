void deleteNode(LinkedListNode<int> * node) {
    *node = *node -> next;
}