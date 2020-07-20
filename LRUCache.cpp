class LRUCache {
    struct ListNode {
        int number;
        int val;
        ListNode* next;
        ListNode* prev;
    };
    int limit;
    ListNode* head;
    ListNode* tail;
    unordered_map<int, ListNode*> table;
    
public:
    LRUCache(int capacity) {
        limit = capacity;
        head = new ListNode;
        tail = new ListNode;
        head->next = tail;
        tail->prev = head;
        head->prev = NULL;
        tail->next = NULL;
    }
    
    int get(int key) {
        if (table.find(key) == table.end()) {
            return -1;
        }
        int num = table[key]->val;
        put(key, num);
        return num;
    }
    
    void put(int key, int value) {
        if (table.count(key) == 1) {
            remove(table[key]);
            table.erase(key);
        }
        ListNode* new_node = new ListNode;
        new_node->val = value;
        new_node->number = key;
        new_node->next = head->next;
        head->next->prev = new_node;   
        head->next = new_node;
        new_node->prev = head;
        table[key] = new_node;
        if (table.size() > limit) {
            table.erase(tail->prev->number);
            remove(tail->prev);
        }
    }
    
    void remove(ListNode* curr) {
        if (curr->prev != NULL) {
            curr->prev->next = curr->next;
        }
        if (curr->next != NULL) {
            curr->next->prev = curr->prev;
        }
        delete curr;
    }
};