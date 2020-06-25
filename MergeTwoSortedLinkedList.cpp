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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        
        ListNode* result = NULL;
        ListNode* result1;
        
        if(temp1 == NULL)
        {
            return temp2;
        }
        
        if(temp2 == NULL)
        {
            return temp1;
        }
        
        while(temp1 && temp2)
        {
            if(temp1 -> val > temp2 -> val)
            {
                if(result == NULL)
                {
                    result = new ListNode(temp2 -> val);
                    result1 = result;
                    temp2 = temp2 -> next;
                }
                
                else
                {
                    result1 -> next = new ListNode(temp2 -> val);
                    temp2 = temp2 -> next;
                    result1 = result1 -> next;
                }
            }
            
            else
            {
                if(result == NULL)
                {
                    result = new ListNode(temp1 -> val);
                    result1 = result;
                    temp1 = temp1 -> next;
                }
                
                else
                {
                    result1 -> next = new ListNode(temp1 -> val);
                    temp1 = temp1 -> next;
                    result1 = result1 -> next;
                }
            }
        }
        
        
        while(temp1)
        {
            result1 -> next = new ListNode(temp1 -> val);
            result1 = result1 -> next;
            temp1 = temp1 -> next;
        }
        
        while(temp2)
        {
            result1 -> next = new ListNode(temp2 -> val);
            result1 = result1 -> next;
            temp2 = temp2 -> next;
        }
        
        
        return result;
    }
};