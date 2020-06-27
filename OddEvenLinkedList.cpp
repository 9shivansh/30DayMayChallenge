/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) 
    {
        ListNode* odd = NULL;
        ListNode* temp1 = NULL;
        ListNode* even = NULL;
        ListNode* temp2 = NULL;
        
        int count = 1;
        ListNode* x = head;
        
        if(head == NULL)
        {
            return NULL;
        }
        
        while(x)
        {
            if(count % 2 == 0)
            {
                if(even == NULL)
                {
                    even = new ListNode(x -> val);
                    temp2 = even;
                }
                else
                {
                    temp2 -> next = new ListNode(x -> val);
                    temp2 = temp2 -> next;
                }
            }
            else
            {
                if(odd == NULL)
                {
                    odd = new ListNode(x -> val);
                    temp1 = odd;
                }
                else
                {
                    temp1 -> next = new ListNode(x -> val);
                    temp1 = temp1 -> next;
                }
            }
            count = count + 1;
            x = x -> next;
        }
        
        temp1 -> next = even;
        return odd;
    }
};