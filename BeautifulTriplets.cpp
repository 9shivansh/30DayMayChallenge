
// Complete the beautifulTriplets function below.
int beautifulTriplets(int d, vector<int> arr) 
{
    int count = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = i + 1; j < arr.size(); j++)
        {
            if(arr[j] - arr[i] == d)
            {
                for(int k = j + 1; k < arr.size(); k++)
                {
                    if(arr[k] - arr[j] == d)
                    {
                        count = count + 1;
                    }
                }
            }
        }
    }

    return count;


}
