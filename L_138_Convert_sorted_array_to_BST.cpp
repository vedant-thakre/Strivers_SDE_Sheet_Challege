#include <bits/stdc++.h> 

TreeNode<int>* sbt(vector<int>& arr,int s,int e){
    if(s>e) return NULL;
    int mid=(s+e)/2;
    TreeNode<int>* root= new TreeNode<int>(arr[mid]);
    root->left=sbt(arr,s,mid-1);
    root->right=sbt(arr,mid+1,e);
    return root;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here.
    TreeNode<int>* root=sbt(arr,0,n-1);
    return root;
}