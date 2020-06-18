class Solution {
public:
    string removeKdigits(string num, int k) {
        /**
         *  Monotonous Stack
         * 
         *  1 4 3 2 2 1 9, aval = 3
         * 
         *  [1]
         * 
         *  [1, 4]
         * 
         *  [1, 3]         aval = 2
         * 
         *  [1, 2]         aval = 1
         * 
         *  [1, 2, 2]      aval = 1
         * 
         *  [1, 2, 1]      aval = 0
         * 
         *  [1, 2, 1, 9]   aval = 0
         */
        
        int n = num.size();
        int bk = k;
        
        std::deque<char> deque;
        deque.push_back(num[0]);
        
        for (int i = 1 ; i < n ; ++i) {
            while (!deque.empty() && deque.back() > num[i] && k > 0) {
                deque.pop_back();
                --k;
            }
            deque.push_back(num[i]);
        }
        
        while (deque.front() == '0') {
            deque.pop_front();
        }
        while (deque.size() > n - bk) {
            deque.pop_back();
        }
        
        if (deque.empty()) {
            return "0";
        }
        
        std::string ans;
        while (!deque.empty()) {
            ans += deque.front();
            deque.pop_front();
        }
        return ans;
    }
};