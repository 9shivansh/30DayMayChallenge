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
        ListNode* new1 = reverse(l1);
        ListNode* new2 = reverse(l2);
        ListNode* head = NULL;
        ListNode* temp = NULL;
        
        int carry = 0;
        
        while(new1 && new2)
        {
            int sum = new1 -> val + new2 -> val + carry;
            int digit = sum % 10;
            carry = sum / 10;
            
            cout << sum;
            
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
            
            new1 = new1 -> next;
            new2 = new2 -> next;
        }
        
        while(new1)
        {
            int sum = new1 -> val + carry;
            int digit = sum % 10;
            carry = sum / 10;
            cout << sum;
            
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
            
            new1 = new1 -> next;
        }
        
        
        
        while(new2)
        {
            int sum = new2 -> val + carry;
            int digit = sum % 10;
            carry = sum / 10;
            cout << sum;
            
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
            
            new2 = new2 -> next;
        }
        
        
        if(carry)
        {
            temp -> next = new ListNode(carry);
            temp = temp -> next;
        }
        
        ListNode* result = reverse(head);
        return result;
        
    }
    
    
    ListNode* reverse(ListNode* temp)
    {
        ListNode* curr = temp;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(curr)
        {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
};