/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

void fun(vector<int>& nums, int k) 
        {
            vector<int> vect ;
            
            int n = nums.size() ;
            
            for(int i = 0 ; i < n ; i++)
                vect.push_back(nums[i]) ;
            
            for(int i = 0 ; i < n ; i++)
                nums[(i+k) % n] = vect[i] ;
        } 

Node *rotate(Node *head, int k) {
     vector<int>temp;
     Node* ptr = head;
     while(ptr != NULL ){
          temp.push_back(ptr->data);
          ptr = ptr -> next;
     }
     fun(temp,k);
     Node *itr = new Node();
     ptr = itr;

     for (int i = 0; i < temp.size(); i++) {
          ptr->next = new Node(temp[i]);
          ptr = ptr -> next;
     }
     return itr -> next;
}