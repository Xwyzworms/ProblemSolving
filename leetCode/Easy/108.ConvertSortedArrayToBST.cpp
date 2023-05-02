#include<iostream>
#include<vector>
using namespace std;
struct TreeNode 
{
    int val ;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int val) : val(val), left(nullptr), right(nullptr){} 
};

class Solution {

    public:
        TreeNode* RecursivelyDoSomeUselessStuff(vector<int> arr, int starting, int ending) 
        {
            if(starting > ending) 
            {
                return NULL;
            }

            int middle = (starting + ending) / 2;
            TreeNode* root = new TreeNode(arr[middle]);
            root->left =  RecursivelyDoSomeUselessStuff(arr, starting, middle-1);
            root->right=  RecursivelyDoSomeUselessStuff(arr, middle+1, ending);
            return root;
        }

        TreeNode* sortedArrayToBST(vector<int>& nums) 
        {
            int size = nums.size();
            return RecursivelyDoSomeUselessStuff(nums, 0, size-1);
        }

};