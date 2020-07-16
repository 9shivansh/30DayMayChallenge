class Solution {
public:

string binary(int n)
{
    string r = "";
    while(n)
    {
        r = r + to_string(n%2);
        n = n/2;
    }
    reverse(r.begin(),r.end());
    return r;
}

bool queryString(string S, int N) {
    
    int n = S.size();
    for(int i=1;i<=N;i++)
    {
        string r = binary(i);
        if(S.find(r)==string::npos)
            return false;
    }
    return true;
}
};