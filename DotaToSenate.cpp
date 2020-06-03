class Solution {
public:
    string predictPartyVictory(string senate) 
    {
        queue<int> rQ;
        queue<int> dQ;
        
        int size = senate.length();
        
        for(int i = 0; i < senate.length(); i++)
        {
            if(senate[i] == 'R')
            {
                rQ.push(i);
            }
            
            if(senate[i] == 'D')
            {
                dQ.push(i);
            }
        }
        
        
        while(!rQ.empty() && !dQ.empty())
        {
            int frontR = rQ.front();
            rQ.pop();
            int frontD = dQ.front();
            dQ.pop();
            
            cout << frontR << " " << frontD << endl;
            
            if(frontR < frontD)
            {
                rQ.push(frontR + size);
            }
            
            if(frontD < frontR)
            {
                dQ.push(frontD + size);
            }
        }
        
        if(rQ.empty())
        {
            return "Dire";
        }
        
        return "Radiant";
        
    }
};