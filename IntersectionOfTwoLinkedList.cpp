/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        if(!headA || !headB)
        {
            return NULL;
        }
        
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        
        int length1 = 0;
        int length2 = 0;
        
        while(temp1)
        {
            length1 = length1 + 1;
            temp1 = temp1 -> next;
        }
        
        while(temp2)
        {
            length2 = length2 + 1;
            temp2 = temp2 -> next;
        }
        
        temp1 = headA;
        temp2 = headB;
        
        if(length1 > length2)
        {
            int diff = length1 - length2;
            for(int i = 0; i < diff; i++)
            {
                temp1 = temp1 -> next;
            }
        }
        
        else
        {
            int diff = length2 - length1;
            for(int i = 0; i < diff; i++)
            {
                temp2 = temp2 -> next;
            }
        }
        
        while(temp1 != temp2)
        {
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        
        return temp1;
        
    }
};