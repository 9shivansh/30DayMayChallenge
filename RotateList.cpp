class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        
        //first,calculate the length of list        
        int len = 1;
        ListNode *p = head;
        while(p->next!=NULL)
        {
            len++;
            p = p->next;
        }
        
        //second,connect tail to head
        p->next = head;
        
        int forward_step = len - k%len;
        
        //third,forward in the circle. backward k step is equal to forward len-k step.And we can only forward.
        for(int i=0; i<forward_step;i++)
            p = p->next;  //finally, p is the pointer pointing to hte previous node of the head we want
        
        head = p->next;
        p->next = NULL;
        
        return head;
    }
};