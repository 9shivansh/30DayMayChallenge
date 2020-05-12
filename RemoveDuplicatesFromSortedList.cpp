class Solution {
public:

ListNode* deleteDuplicates(ListNode* head) {
    ListNode *current = head;
    ListNode *nextofnext;
    if(current == NULL || current->next == NULL)
        return head;
    while(current->next != NULL)
    {
        if(current->val == current->next->val)
        {
            nextofnext = current->next->next;
            delete(current->next);
            current->next = nextofnext;
        }
        else{
            current = current->next;
        }
    }
    return head;
}
};