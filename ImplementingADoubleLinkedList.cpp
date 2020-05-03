struct Node
{
    int val;
    Node * next;
    Node(int x):val(x),next(NULL){};
};
class MyLinkedList {
public:
    /** Initialize your data structure here. */
    Node *head;
    Node *tail;
    int size;
    /** Initialize your data structure here. */
    MyLinkedList() {
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;        
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        //std::cout<<"get" << index<<"||";
        //this->printall();
        if (index >= this->size or index <0) return -1;
        int ct = 0;
        Node *tmp = head;
        while (tmp) {
            //std::cout<< tmp->val<<" ";
            if(ct++ == index)
                return tmp->val;
            tmp= tmp->next;            
           // std::cout<< tmp->val<<" ";
        }
        return -1;
    }

    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        //std::cout<<"addhead" << val<<"||";
        //this->printall();
        Node *tmp = new Node(val);
        if (this->head==NULL) {
            this->head = tmp;
            this->tail = tmp;
        } else {
            tmp->next = this->head;
            this->head = tmp;
        }
        this->size ++;
    }

    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        //std::cout<<"addtail";
        //this->printall();
        Node *tmp = new Node(val);
        if (this->tail == NULL) {
            this->head = tmp;
            this->tail = tmp;
        } else {
            this->tail->next = tmp;
            this->tail = tmp;
        }
        this->size ++;
        
    }

    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
       // std::cout<<"addindex"  << index<<"X"<<val<<"||";
        //this->printall();
        if (index > this->size) return;
        if (index == this->size) {
            this->addAtTail(val);
            return;
        }
        if (index == 0) {
            this->addAtHead(val);
            return;
        }
        int ct = 0;
        Node *tmp = this->head;
        
        while (tmp) {
            if (ct ++ == index-1) {
                Node * addp = new Node(val);
                addp->next = tmp->next;
                tmp->next = addp;
                break;
            }
            tmp = tmp->next;
        }
        this->size++;        
    }

    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        //std::cout<< "deleteindex" << index<<"||";
        //this->printall();
        if (index >= this->size) return;
        if (index == 0) {
            this->head = this->head->next;            
        }
        else {
            int ct = 0;
            Node *tmp = this->head;
            for (int i = 0; i< index -1; i++)
                tmp = tmp->next;
            tmp->next = tmp->next->next;
            if (index == this->size-1) {
                this->tail = tmp;
            }
            
        }
        this->size--;
        
    }



    void printall() {
        return;
        Node *tmp = head;
        while(tmp) {
            std::cout<<tmp->val<< " ";
            tmp=tmp->next;            
        }
        std::cout<<endl;
    }

};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
