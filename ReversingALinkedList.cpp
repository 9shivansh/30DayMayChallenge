
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* ahead = NULL;
        
        
        if(curr == NULL)
        {
            return NULL;
        }
        
        
        if(curr -> next == NULL)
        {
            return curr;
        }
        
                
        
        ahead = curr -> next;

        
        while(ahead)
        {
            ahead = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = ahead;
            
        }
        
        return prev;
        
    }
};