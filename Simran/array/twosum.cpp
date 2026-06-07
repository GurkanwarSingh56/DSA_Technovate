#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    // Function to find indices of two numbers
    // whose sum equals target
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i = 0; i < nums.size(); i++) {
            // Find the number needed
            // to reach target
            int moreNeeded = target - nums[i];
            // Check if required number already exists
            // in hash map
            if(mpp.find(moreNeeded) != mpp.end()) {
                // Return indices
                return {mpp[moreNeeded], i};
            }
            // Store current element and index
            mpp[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans = obj.twoSum(nums, target);
    cout << ans[0] << " " << ans[1];
    return 0;
}