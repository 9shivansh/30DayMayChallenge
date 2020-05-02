class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        if (head == NULL || head->next == NULL)
            return true;
        
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *pre = NULL;
        ListNode *tmp;
        
        while (fast != NULL && fast->next != NULL) {
            
            fast = fast->next->next;
            
            // reverse the first half
            tmp = slow->next;
            slow->next = pre;
            pre = slow;
            slow = tmp;
        }
        
        // in this case, the length is odd, so have to move slow one node further
        if (fast != NULL)
            slow = slow->next;
        
        // now, pre is the first node of first half, slow is the first node of second half
        while (slow->val == pre->val) {
            if (slow->next == NULL)
                return true;
            slow = slow->next;
            pre = pre->next;
        }
        
        return false;
    }
};