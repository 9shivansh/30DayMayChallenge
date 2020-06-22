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
        vector<int> result;
        
        int size = lists.size();
        
        ListNode* temp = NULL;
        
        for(int i = 0; i < size; i++)
        {
            temp = lists[i];
            
            while(temp)
            {
                result.push_back(temp -> val);
                temp = temp -> next;
            }
            
        }
        
        sort(result.begin(), result.end());
        
        ListNode* dummy = NULL;
        ListNode* head = NULL;
        
        for(int i = 0; i < result.size(); i++)
        {
            if(head == NULL)
            {
                head = new ListNode(result[i]);
                dummy = head;
            }
            else
            {
                dummy -> next = new ListNode(result[i]);
                dummy = dummy -> next;
            }
        }
        
        return head;
        
        
    }
};

// since the lists are sorted, we can do this by 2 approaches, first is insertion sort, 
// traversing each of the list in the array and afterwards storing it as a new list and returning its head