class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> num1(nums1.begin(), nums1.end());
        vector<int> i;
        for(std::vector<int>::iterator it = nums2.begin(); it != nums2.end(); ++it){
            if (num1.erase(*it)){
                i.push_back(*it);
            }
        }
        return i;
    }
};