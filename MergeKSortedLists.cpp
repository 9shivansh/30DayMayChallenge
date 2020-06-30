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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        int size = lists.size();
        
        
        vector<int> result;
        
        for(int i = 0; i < size; i++)
        {
            ListNode* head = lists[i];
            
            while(head)
            {
                result.push_back(head -> val);
                head = head -> next;
            }
        }
        
        sort(result.begin(), result.end());
        
        ListNode* head = NULL;
        ListNode* temp = NULL;
        
        size = result.size();
        
        
        for(int i = 0; i < size; i++)
        {
            if(head == NULL)
            {
                head = new ListNode(result[i]);
                temp = head;
            }
            
            else
            {
                temp -> next = new ListNode(result[i]);
                temp = temp -> next;
            }
        }
        
        
        return head;
    }
};