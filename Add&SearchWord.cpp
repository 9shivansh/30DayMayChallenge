class WordDictionary {
public:
    struct TrieNode {
        TrieNode* nodes[26] = {nullptr};
        bool leaf = false;
    };
    /** Initialize your data structure here. */
    WordDictionary() {
        root_ = new TrieNode();
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        TrieNode* tn = root_;
        for (auto c : word) {
            c -= 'a';
            if (tn->nodes[c] == nullptr) {
                tn->nodes[c] = new TrieNode();
            }
            tn = tn->nodes[c];
        }
        tn->leaf = true;
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        return dfs(word, 0, root_);
    }
    
private:
    bool dfs(const string& word, int start, TrieNode* tn) {
        bool result = false;
        if (tn == nullptr) {
            return false;
        }
        if (word.size() == start) {
            return tn->leaf;
        }
        char c = word[start];
        if (c != '.') {
            return dfs(word, start + 1, tn->nodes[c - 'a']);
        }
        for (int i = 0; i < 26; ++ i) {
            result |= dfs(word, start + 1, tn->nodes[i]);
            if (result) {
                return result;
            }
        }
        return result;
    }
    TrieNode* root_ = nullptr;
};
