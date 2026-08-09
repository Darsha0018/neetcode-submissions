// class Solution {
// public:
//     bool hasDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i=1;i<nums.size();i++){
//         if(nums[i]==nums[i-1])
//             return true;
//         }
//          return false;
        
//     }
// };

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (!seen.insert(num).second)
                return true;
        }

        return false;
    }
};