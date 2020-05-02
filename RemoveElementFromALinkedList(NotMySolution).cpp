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
        if(head == NULL) return NULL;
        
        ListNode* PrevNode = NULL;
        ListNode* CurrNode = head;
        ListNode* NextNode = head;
        
        while(CurrNode != NULL){
            if(CurrNode->val == val){
                NextNode = CurrNode->next;           
                CurrNode->next = NULL;               
                if(CurrNode == head) head = NextNode; 
                if(PrevNode != NULL) PrevNode->next = NextNode;
                CurrNode = NextNode;
            }else{
                PrevNode = CurrNode;              // Simply iterate forward
                CurrNode = CurrNode->next;
            }
        
        }
        
        return head;
    }
};