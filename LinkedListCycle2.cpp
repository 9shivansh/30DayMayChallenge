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
    ListNode *detectCycle(ListNode *head) 
    {
        unordered_map<ListNode*, int> map;
        
        if(head == NULL)
        {
            return NULL;
        }
        
        if(head -> next == NULL)
        {
            return NULL;
            
        }
        
        ListNode* temp = head;
        int pos = 0;
        
        while(temp)
        {
            if(map.find(temp) == map.end())
            {
                map[temp] = pos;
            }
            else
            {
                return temp;
            }
            
            temp = temp -> next;
            pos = pos + 1;
        }
        
        
        return NULL;
    }
};