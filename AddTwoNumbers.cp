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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int carry = 0;
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        
        ListNode* head = NULL;
        ListNode* temp = NULL;
        
        
        while(temp1 && temp2)
        {
            int sum = temp1 -> val + temp2 -> val + carry;
            carry = sum / 10;
            int digit = sum % 10;
            
            if(head == NULL)
            {
                head = new ListNode(digit);
                temp = head;
            }
            
            else
            {
                temp -> next = new ListNode(digit);
                temp = temp -> next;
            }
            
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        
        while(temp1)
        {
            int sum = temp1 -> val + carry;
            carry = sum / 10;
            int digit = sum % 10;
            temp -> next = new ListNode(digit);
            temp = temp -> next;
            temp1 = temp1 -> next;
        }
        
        while(temp2)
        {
            int sum = temp2 -> val + carry;
            carry = sum / 10;
            int digit = sum % 10;
            temp -> next = new ListNode(digit);
            temp = temp -> next;
            temp2 = temp2 -> next;
        }
        
        if(carry)
        {
            temp -> next = new ListNode(carry);
            temp = temp -> next;
        }
        
        return head;
        
    }
};