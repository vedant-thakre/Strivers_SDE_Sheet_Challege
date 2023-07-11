#include <bits/stdc++.h> 

void fun(TreeNode<int>* root , int &ans ,int &cnt, int k){
        if(root == NULL) return ;
    
        fun(root->left, ans, cnt, k);
        cnt++;
        if(cnt == k){
           ans = root->data;
        } 
        fun(root->right, ans, cnt, k);
    }
int kthSmallest(TreeNode<int> *root, int k){
	int ans = -1, cnt = 0;
    fun(root, ans, cnt, k);
    return ans;
}