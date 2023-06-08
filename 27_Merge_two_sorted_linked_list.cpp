Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
   Node<int>* ans = new Node<int>(-1);
   Node<int>* curr = ans;

   while(first != NULL && second != NULL){
       if(first->data <= second->data){
           curr->next = first;
           first = first->next;
       }else{
           curr->next = second;
           second = second->next;
       }
       curr = curr->next;
   }
   if(first != NULL) curr->next = first;
   if(second != NULL) curr->next = second;

   return ans->next;
}