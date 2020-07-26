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
        unordered_map<ListNode*, int> map;
        
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        
        if(temp1 == NULL || temp2 == NULL)
        {
            return NULL;
        }
        
        while(temp1)
        {
            map[temp1]++;
            temp1 = temp1 -> next;
        }
        
        while(temp2)
        {
            if(map.find(temp2) != map.end())
            {
                return temp2;
            }
            temp2 = temp2 -> next;
        }
        
        return NULL;
        
        
    }
};