#include <myinclude.h>

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


 class Solution {
 private:
     unordered_map<int, int> un_inorder;
 public:
     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         for (int i = 0; i < inorder.size(); i++)
             un_inorder[inorder[i]] = i;
         return help(preorder, 0, 0, inorder.size() - 1);
     }
     TreeNode* help(vector<int>& preorder, int rootidx, int left, int right)
     {
         if (left > right)
             return NULL;
         TreeNode* Node = new TreeNode(preorder[rootidx]);
         int idx = un_inorder[Node->val];
         Node->left = help(preorder, rootidx + 1, left, idx - 1);
         Node->right = help(preorder, rootidx + idx - left + 1, idx + 1, right);
         return Node;
     }
 };
