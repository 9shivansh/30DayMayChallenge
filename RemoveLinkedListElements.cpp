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
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode* temp = new ListNode(0);
        temp -> next = head;
        
        //cout << " l " << endl;
        ListNode* t = temp;
        
        while(t -> next)
        {
            //cout << t -> val << endl;
            if(t -> next -> val == val)
            {
                t -> next = t -> next -> next;
            }
            else
            {
                t = t -> next;
            }
        }
        
        return temp -> next;
        
    }
};