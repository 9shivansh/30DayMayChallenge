class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<1)
            return 0;

        int id2=0, id3=0, id5=0, rst=1;
        vector<int> buf;

        while(--n)
        {
            buf.push_back(rst);

            int v2 = 2*(buf[id2]), v3 = 3*(buf[id3]), v5 = 5*(buf[id5]);
            rst = min(v2, min(v3, v5));
            
            id2 += (rst == v2), id3 += (rst == v3), id5 += (rst == v5);
        }
        return rst;
    }
};