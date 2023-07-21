#include <bits/stdc++.h> 

class check {
    public:
    stack<BinaryTreeNode<int> *> st;int x;
    check(BinaryTreeNode<int> * root,int n){ 
        x=n;
        if(x==0){
            while(root){
                st.push(root);
                root=root->left;
            }
        }else{
             while(root){
                st.push(root);
                root=root->right;
            }
        }
    }
    int next(){
        if(st.empty())
        return -1e8;
        int d;
        BinaryTreeNode<int> * temp=st.top();st.pop();
        d=temp->data;
        if(x==0){   
            temp=temp->right;
            while(temp){
                st.push(temp);
                temp=temp->left;
            }
            return d;
        }else{
            temp=temp->left;
            while(temp){
                st.push(temp);
                temp=temp->right;
            }
            return d;
        }
    }
} ;
bool pairSumBst(BinaryTreeNode<int> *root, int k) {
  // Write your code here
    check a(root,0);
    check b(root,1);
  int i = a.next();
  int j = b.next(); 
  while(i<j){     if(i==-1e8 || j==-1e8)
        return false;
      if(i+j==k)return true;
      if(i+j>k)j=b.next();
      else i=a.next();
  }
  return false;
}