class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> ans;
        for (int i=0;i<=size;i++){
            for (int j=size-1;j>i;j--){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
    return ans;
    }
};