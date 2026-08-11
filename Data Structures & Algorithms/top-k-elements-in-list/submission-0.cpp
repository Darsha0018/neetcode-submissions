class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int> freq;
        for (int num : nums){
            freq[num]++;
        }

        vector<vector<int>> bucket(n+1);
        for(auto [num,count] : freq){
            bucket[count].push_back(num);
        }

        vector<int> ans;
        for(int i =bucket.size()-1;i>=0;i--){
            for (int num : bucket[i]){
                   ans.push_back(num);
            }
         

            if (ans.size()==k)
                return ans;

        }

        return ans;
        
    }
};
