class Solution {
public:
    int search(vector<int>& nums, int target, bool first){
        int ans = -1, mid;
        int start = 0;
        int end = nums.size() - 1;
        while(start <= end){
            mid = start + (end - start) / 2;
            if(nums[mid] < target){
                start = mid + 1;
            }else if(nums[mid] > target){
                end = mid - 1;
            }else{
                ans = mid;
                if(first){
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        ans[0] = search(nums, target, true);
        ans[1] = search(nums, target, false);
        return ans;
    }
};