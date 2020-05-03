class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* cur = NULL;
        int co = 0, newval;
        while (l1 || l2 || co>0){
            if (!l1 && !l2){
                newval = co;
            }else if (!l1){
                newval = l2->val+co;
            }else if (!l2){
                newval = l1->val+co;
            }else{
                newval = l1->val + l2->val + co;
            }
            co = newval/10;
            newval %= 10;
            if (!cur){
                head = new ListNode(newval);
                cur = head;
            }else{
                cur->next = new ListNode(newval);
                cur = cur->next;
            }
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        return head;
    }
};