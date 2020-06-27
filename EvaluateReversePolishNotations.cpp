class Solution {
public:
    int evalRPN(vector<string>& str) 
    {
        int size = str.size();
        stack<int> s;
        
        for(int i = 0; i < size; i++)
        {
            if(str[i] != "+" && str[i] != "/" && str[i] != "*" && str[i] != "-")
            {
                int p = stoi(str[i]);
                
                cout << p << endl;
                
                s.push(p);
            }
            
            else
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                int c;
                
                if(str[i] == "+")
                {
                    c = a + b;
                }
                
                if(str[i] == "-")
                {
                    c = b - a;
                }
                
                if(str[i] == "/")
                {
                    c = b / a;
                }
                
                if(str[i] == "*")
                {
                    c = b * a;
                }
                
                s.push(c);
            }
        }
        
        return s.top();
        
    }
};