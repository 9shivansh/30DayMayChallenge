class Solution {
public:
    
    string getPermutation(int n, int k) {
    
        int aFac[n + 1];
        
        aFac[0] = 1;
        
        for (int i=1;i<=n;i++) {
            aFac[i] = i * aFac[i - 1];
        }
        
        char aList[n + 1];
        aList[n] = 0;
        int aListCount = n;
        
        char aRes[n + 1];
        aRes[n] = 0;
        int aResCount = 0;
        
        for (int i=1;i<=n;i++) {
            aList[i - 1] = '0' + i;
        }
        
        k -= 1;
        
        for (int i=1;i<=n;i++) {
            
            int aIndex = k / aFac[n - i];
            
            aRes[aResCount++] = aList[aIndex];
            
            for (int j=aIndex+1;j<n;j++) {
                aList[j-1] = aList[j];
            }
            
            k -= aIndex * aFac[n - i];   
        }
        return string(aRes);
        
    }
};