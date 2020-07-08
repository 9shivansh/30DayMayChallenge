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
        ListNode* even = NULL;
        
        ListNode* headOdd = NULL;
        ListNode* headEven = NULL;
        
        
        int count = 1;
        
        ListNode* temp = head;
        
        if(head == NULL)
        {
            return NULL;
        }
        
        while(temp)
        {
            if(count % 2 == 0)
            {
                if(headEven == NULL)
                {
                    headEven = new ListNode(temp -> val);
                    even = headEven;
                }
                
                else
                {
                    even -> next = new ListNode(temp -> val);
                    even = even -> next;
                }
            }
            
            else
            {
                if(headOdd == NULL)
                {
                    headOdd = new ListNode(temp -> val);
                    odd = headOdd;
                }
                
                else
                {
                    odd -> next = new ListNode(temp -> val);
                    odd = odd -> next;
                }
            }
            
            temp = temp -> next;
            count = count + 1;
            
        }
        
        odd -> next = headEven;
        
        return headOdd;
        
    }
};