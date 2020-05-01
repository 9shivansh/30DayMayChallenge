class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * prevNode = NULL, *temp = head;
        for (int i = 1; i <= n; ++i) {
            temp = temp->next;
        }
        while (temp) {
            if (prevNode == NULL) 
            {
                prevNode = head;
            }   
            else
            {
                prevNode = prevNode->next;
            }
            temp = temp->next;
        }
        if (prevNode == NULL) 
        {
            ListNode *temp = head;
            head = temp->next;
            delete temp;
            return head;
        }
        ListNode *target = prevNode->next;
        prevNode->next = target->next;
        delete target;
        return head;
    }
};