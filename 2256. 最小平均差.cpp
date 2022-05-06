class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum = 0 ;
        for (int i = 0 ; i < nums.size() ; ++i) sum += nums[i] ;
        long long now = 0 ;
        long long res_val = 1e15 , res_id ;
        for (int i = 0 ; i < nums.size() ; ++i) {
            now += nums[i] ;
            sum -= nums[i] ;
            long long l , r ;
            l = now / (i + 1) ;
            if (i == nums.size() - 1) 
                r = 0 ;
            else 
                r = sum / (nums.size() - 1 - i) ;
            l = abs(l - r) ;
            if (l < res_val) {
                res_val = l ;
                res_id = i ;
            }
            // cout << "id = " << i << "   val = " << l << endl ;
        }
        return res_id ;
    }
};