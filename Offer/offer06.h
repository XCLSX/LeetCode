#include <myinclude.h>

//输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。

////将链表入栈记录链表长度
/// 申请链表长度vector防止长度不够扩容消耗时间
/// 出栈给vector赋值

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        if(head == NULL)
            return {};
        stack<int> sk;
        int len = 0;
        while(head!=NULL)
        {
            sk.push(head->val);
            head = head->next;
            len++;
        }
        vector<int> ans(len);
        int i=0;
        while(!sk.empty())
        {
            ans[i] = sk.top();
            sk.pop();
            i++;
        }
        return ans;
    }
};
