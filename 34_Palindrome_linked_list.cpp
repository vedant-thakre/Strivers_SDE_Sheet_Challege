bool isPalindrome(LinkedListNode<int> *head) {
    vector<int>ans;
    LinkedListNode<int>* ptr = head;
    while(ptr != NULL){
        ans.push_back(ptr->data);
        ptr = ptr->next;
    }
    int start = 0;
    int end = ans.size()-1;
    while(start <= end){
        if(ans[start] != ans[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}