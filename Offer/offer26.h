#ifndef OFFER26_H
#define OFFER26_H
#include<myinclude.h>
//运用队列层序遍历二叉树
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if(B == NULL)
            return false;
        queue<TreeNode*> qu;
        qu.push(A);
        while(!qu.empty())
        {
            TreeNode*temp = qu.front();
            qu.pop();
            if(temp->left!=NULL)
                qu.push(temp->left);
            if(temp->right!=NULL)
                qu.push(temp->right);
            if(temp->val == B->val&&Check(temp,B))
                return true;
        }
        return false;
    }
    bool Check(TreeNode *A,TreeNode *B)
    {
        if(A==NULL&&B==NULL || B ==NULL && A != NULL)
            return true;
        else if(A == NULL&&B != NULL)
            return false;
        if(A->val == B->val)
        return Check(A->left,B->left)&&Check(A->right,B->right);
        else
            return false;
    }
};
#endif // OFFER26_H
