class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        
        vector<int> a;
        vector<int> c;
        
        a.push_back(1);
        
        if(rowIndex == 0)
        {
            return a;
        }
        
        for(int i = 1; i <= rowIndex; i++)
        {
            vector<int> b;
            b.push_back(1);
            
            if(a.size() > 1)
            {
                //cout << "size is greater" << endl;
                for(int j = 0; j < a.size() - 1; j++)
                {
                    //cout << a[j] << " " << a[j + 1] << endl;
                    b.push_back(a[j] + a[j + 1]);
                    //cout << b[j] << "b" << endl;
                }
            }
            
            b.push_back(1);
            
            a = b;
            c = b;
            //cout << a[1] << "---" << endl;
            
        }
        
        return c;
        
    }
};