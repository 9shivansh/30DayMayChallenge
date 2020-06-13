class TrieNode {
public:
    // Initialize your data structure here.
    TrieNode():isWord(false){
        memset(Next,0,sizeof(TrieNode*)*26);

    }
    TrieNode(char _c):c(_c),isWord(false) {
        memset(Next,0,sizeof(TrieNode*)*26);
    }
    TrieNode* Next[26];
    char c;
    bool isWord;
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }

    // Inserts a word into the trie.
    void insert(string word) {
        TrieNode*p = root;
        int index;
        
        for(char c:word)
        {
            index = c - 'a';
            if(p->Next[index] == NULL)
                p->Next[index] = new TrieNode(c);
            p = p->Next[index];
        }
        p->isWord = true;
    }

    // Returns if the word is in the trie.
    bool search(string word) {
        TrieNode*p = root;
        int index;
        
        for(char c:word)
        {
            index = c - 'a';
            if(p->Next[index] == NULL)
                return false;
            p = p->Next[index];
        }
        return p->isWord;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
        TrieNode*p = root;
        int index;
        
        for(char c:prefix)
        {
            index = c - 'a';
            if(p->Next[index] == NULL)
                return false;
            p = p->Next[index];
        }
        return true;
    }

private:
    TrieNode* root;
};

// Your Trie object will be instantiated and called as such:
// Trie trie;
// trie.insert("somestring");
// trie.search("key");