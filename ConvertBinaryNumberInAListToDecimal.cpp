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
    int getDecimalValue(ListNode* head) 
    {
        ListNode* temp1 = NULL;
        ListNode* temp2 = NULL;
        
        temp1 = head;
        temp2 = head;
        int size = 0;
        
        while(temp1 -> next != NULL)
        {
            temp1 = temp1 -> next;
            size++;
        }
        
        int answer = 0;
        while(size > -1)
        {
            answer = answer + (temp2 -> val) * pow(2, size);
            temp2 = temp2 -> next;
            size--;
        }
        
        return answer;
        
    }
};