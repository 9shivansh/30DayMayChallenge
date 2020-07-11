class Solution {
public:
     bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        vector<pair<int, int>> hh;
        int sz= nums.size();
        for( int i = 0; i < sz; i ++)
            hh.push_back( make_pair(nums[i], i));
        
        
        sort( hh.begin(), hh.end());
        
        for(int i =0; i < sz-1; i ++){
            for( int j =i +1; j < sz; j ++){
                if(hh[i].first +t < hh[j].first)
                   break;
                
                if( abs(hh[j].second - hh[i].second) <= k)
                    return true;
            }
        }
                   
        return false;
     }
};