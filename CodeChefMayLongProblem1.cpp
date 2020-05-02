#include <iostream>
#include <climits>
using namespace std;

int main() 
{
    int testcases;
    cin >> testcases;
    
    for(int m = 0; m < testcases; m++)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int p = 0; p < n; p++)
        {
            cin >> arr[p];
        }
        
        int min = INT_MAX;
        int max = INT_MIN;
        
        for(int i = 0; i < n; i++)
        {
            int count = 1;
            if(i > 0)
            {
                for(int j = i - 1; j >= 0; j--)
                {
                    if(abs(arr[j] - arr[j + 1]) <= 2)
                    {
                        count = count + 1;
                        
                    }
                    else
                    {
                        break;
                    }
                }
            }
            
            if(i < n - 1)
            {
                for(int k = i + 1; k < n; k++)
                {
                    if(abs(arr[k] - arr[k - 1]) <= 2)
                    {
                        count = count + 1;
                        
                    }
                    else
                    {
                        break;
                    }
                }
            }
            
            if(count < min)
            {
                min = count;
            }
            
            if(count > max)
            {
                max = count;
            }
            
           
        }
            cout << min << " " << max << endl;
           
    }
    
    return 0;

}