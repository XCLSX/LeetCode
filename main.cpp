#include <offer06.h>

int main()
{
    Solution so;
    ListNode * head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    so.reversePrint(head);
}
