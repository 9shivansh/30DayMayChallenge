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
    bool isPalindrome(ListNode* head) 
    {
        int size = 0;
        
        if(head == NULL)
        {
            return true;
        }
        
        ListNode* temp = head;
        
        while(temp)
        {
            temp = temp -> next;
            size = size + 1;
        }
        
        temp = head;
        
        vector<int> v1;
        vector<int> v2;
        
        cout << size << endl;
        
        for(int i = 0; i < size / 2; i++)
        {
            v1.push_back(temp -> val);
            temp = temp -> next;
            
        }
        
        cout << temp -> val;
        
        if(size % 2 != 0)
        {
            temp = temp -> next;
        }
        
        while(temp)
        {
            cout << temp -> val << endl;
            v2.push_back(temp -> val);
            temp = temp -> next;
        }
        
        for(int i = 0; i < size / 2; i++)
        {
            if(v1[i] != v2[size / 2 - 1 - i])
            {
                return false;
            }
        }
        
        return true;
        
    }
};