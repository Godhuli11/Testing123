class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        map<int,int> mpp; //map of remainders and indexes
        
        mpp[0] = -1;
        
        int sum = 0;
        
        for(int i=0 ; i<n ; i++){
            
            sum += nums[i];
            
            int rem = sum % k;
            
            if(mpp.find(rem) != mpp.end()){
                if(i - mpp[rem] >= 2){
                    return true;
                }
            }else{
                mpp[rem] = i;
            }
            
        }
        
        return false;
    }
};