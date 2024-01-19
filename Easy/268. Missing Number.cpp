class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int target = n;
        int ans = 0;
        for(int i=n-1;i >= 0 ;i--){
            if(nums[i]==target){
                target--;
            }else{
                ans = target;
            }
        }
        return ans;
    }
};
