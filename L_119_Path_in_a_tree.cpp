#include <bits/stdc++.h> 
bool fun(TreeNode<int>* root, vector<int>&ans, int x){
	if(root == NULL) return false;
	ans.push_back(root->data);
	if(root->data == x) return true;
	if(fun(root->left, ans, x) || fun(root->right, ans, x)) return true;
	ans.pop_back();
	return false;

}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    vector<int>ans;
	fun(root, ans, x);
	return ans;
}
 