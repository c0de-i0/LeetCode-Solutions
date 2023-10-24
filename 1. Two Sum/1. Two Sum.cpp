class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        vector<int> index;
        for(int i=0;i<nums.size();i++)
        {
            auto find = um.find(target-nums[i]);
            if(find != um.end() )
            {
                index.push_back(i);
                index.push_back(find->second);
                return index;
            }
            um[nums[i]] = i;
        }
        
        return index;
    }
};