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
        
        if(temp1 == NULL && temp2 == NULL)
        {
            return NULL;
        }
        
        if(temp1 == NULL)
        {
            return temp2;
        }
        
        if(temp2 == NULL)
        {
            return temp1;
        }
        
        
        ListNode* temp3 = NULL;
        ListNode* temp4 = NULL;
        
        
        while(temp1 && temp2)
        {
            if(temp1 -> val < temp2 -> val)
            {
                if(temp3 == NULL)
                {
                    temp3 = new ListNode(temp1 -> val);
                    temp4 = temp3;
                }
                else
                {
                    temp4 -> next = new ListNode(temp1 -> val);
                    temp4 = temp4 -> next;
                }
                
                temp1 = temp1 -> next;
            }
            
            else
            {
                if(temp3 == NULL)
                {
                    temp3 = new ListNode(temp2 -> val);
                    temp4 = temp3;
                }
                else
                {
                    temp4 -> next = new ListNode(temp2 -> val);
                    temp4 = temp4 -> next;
                }
                
                temp2 = temp2 -> next;
            }
        }
        
        cout << "end" << endl;
        
        while(temp1)
        {
            temp4 -> next = new ListNode(temp1 -> val);
            temp4 = temp4 -> next;
            temp1 = temp1 -> next;
        }
        
        while(temp2)
        {
            temp4 -> next = new ListNode(temp2 -> val);
            temp4 = temp4 -> next;
            temp2 = temp2 -> next;
        }
        
        return temp3;
        
    }
};