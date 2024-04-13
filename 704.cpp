class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int n = nums.size();
        int ans = 0;
        int right = n-1;
        int mid = left + (right - left )/2;
        while(left<=right){
            if(nums[mid]== target){
                ans = mid;
                return ans;
            }
            else if(nums[mid]>target){
                right--;
            }
            else {
                left++;
            }
            mid = left + (right - left)/2;
        }
        return -1;
    }
};
