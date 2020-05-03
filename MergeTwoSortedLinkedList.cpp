class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* ans = res;
        
        while (l1 && l2) {
            res->next = (l1->val > l2->val) ? l2 : l1;
            if (res->next == l1)
                l1 = l1->next;
            else
                l2 = l2->next;
            res = res->next;
        }
        
        if (l1)
            res->next = l1;
        else if (l2)
            res->next = l2;
        
        return ans->next;
    }
};