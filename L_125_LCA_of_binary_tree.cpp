#include <bits/stdc++.h> 

int rec(TreeNode<int> *root, int x, int y){

    if(!root)
    return -1;
    if(root->data==x || root->data==y)
    return root->data;
    int l=rec(root->left,x,y);
    int r=rec(root->right,x,y);
    if(l!=-1 && r!=-1)
    return root->data;
    if(l==-1)
    return r;
    return l;
}
int lowestCommonAncestor(TreeNode<int> *root, int x, int y){
    return rec(root,x,y);
}


