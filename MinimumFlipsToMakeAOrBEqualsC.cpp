class Solution {
public:
    int minFlips(int a, int b, int c) 
    {
        
        string temp1 = binary(a);
        string temp2 = binary(b);
        string temp3 = binary(c);
        
        int maxLength = max(temp1.length(), max(temp2.length(), temp3.length()));
        
        int length1 = temp1.length();
        int length2 = temp2.length();
        int length3 = temp3.length();
        
        while(maxLength - length1)
        {
            temp1 = "0" + temp1;
            length1++;
        }
        
        while(maxLength - length2)
        {
            temp2 = "0" + temp2;
            length2++;
        }
        
        while(maxLength - length3)
        {
            temp3 = "0" + temp3;
            length3++;
        }
        
        int count = 0;
        
        cout << temp1 << endl;
        cout << temp2 << endl;
        cout << temp3 << endl;
        
        for(int i = 0; i < maxLength; i++)
        {
            if(temp3[i] == '0')
            {
                if(temp1[i] == '1' && temp2[i] == '1')
                {
                    count = count + 2;
                }
                
                else if(temp1[i] == '1' || temp2[i] == '1')
                {
                    count = count + 1;
                }
            }
            
            if(temp3[i] == '1')
            {
                if(temp1[i] == '0' && temp2[i] == '0')
                {
                    count = count + 1;
                }
            }
        }
        
        return count;
    }
    
    string binary(int n)
    {
        string temp;
        
        while(n)
        {
            int p = n % 2;
            temp = to_string(p) + temp;
            n = n / 2;
        }
        
        if(temp.length() == 0)
        {
            temp = "0";
        }
        
        //cout <<  temp << endl;
        return temp;
    }
};