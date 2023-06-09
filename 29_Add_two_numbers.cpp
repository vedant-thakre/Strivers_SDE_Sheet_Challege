Node *addTwoNumbers(Node *num1, Node *num2){
    Node *ans = new Node(0);
    Node *p = num1, *q=num2, *curr = ans;
    int carry=0;
    while(p!=NULL || q!=NULL){
        int x = (p!=NULL) ? p->data : 0;
        int y = (q!=NULL) ? q->data : 0;
        int sum = carry + x+ y;
        carry = sum/10;
        curr->next = new Node(sum%10);
        curr = curr->next;
        if(p!=NULL) p = p->next;
        if(q!=NULL) q = q->next;
    }
    if(carry>0){
        curr->next = new Node(carry);
    }
    return ans->next;
}