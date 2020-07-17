class Solution {
public:
    
    unordered_map<char, string> map;
    
    vector<string> letterCombinations(string digits) 
    {
        map['2'] = "abc";
        map['3'] = "def";
        map['4'] = "ghi";
        map['5'] = "jkl";
        map['6'] = "mno";
        map['7'] = "pqrs";
        map['8'] = "tuv";
        map['9'] = "wxyz";
        
        vector<string> result;
        
        int size = digits.length();
        
        queue<string> queue;
        
        if(size == 0)
        {
            return result;
        }
        
        char c = digits[0];
        
        string p = map[c];
        
        //cout << p << endl;
        
        int length = p.length();
        
        for(int i = 0; i < length; i++)
        {
            string temp = "";
            temp = temp + p[i];
            queue.push(temp);
        }
        
        for(int index = 1; index < size; index++)
        {
            string s = map[digits[index]];
            int tempLength = s.length();
            
            int sizeq = queue.size();
            
            for(int i = 0; i < sizeq; i++)
            {
                string c = queue.front();
                queue.pop();
                
                //cout << c << endl;
                
                for(int j = 0; j < tempLength; j++)
                {
                    queue.push(c + s[j]);
                    //cout << c + s << endl;
                }
            }
        }
        
        
        while(!queue.empty())
        {
            result.push_back(queue.front());
            queue.pop();
        }
        
        return result;
        
        
    }
};