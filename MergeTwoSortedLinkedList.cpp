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
        if(l1 == NULL)
        {
            return l2;
        }
        
        if(l2 == NULL)
        {
            return l1;
        }
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        
        ListNode* head = NULL;
        ListNode* temp = NULL;
        
        
        while(temp1 && temp2)
        {
            if(temp1 -> val < temp2 -> val)
            {
                if(head == NULL)
                {
                    head = new ListNode(temp1 -> val);
                    temp = head;
                }
                else
                {
                    temp -> next = new ListNode(temp1 -> val);
                    temp = temp -> next;
                }
                
                temp1 = temp1 -> next;
            }
            
            else
            {
                if(head == NULL)
                {
                    head = new ListNode(temp2 -> val);
                    temp = head;
                }
                
                else
                {
                    temp -> next = new ListNode(temp2 -> val);
                    temp = temp -> next;
                }
                
                temp2 = temp2 -> next;
            }
        }
        
        if(temp1)
        {
            temp -> next = temp1;
        }
        
        if(temp2)
        {
            temp -> next = temp2;
        }
        
        return head;
        
    }
};