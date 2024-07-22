#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
                unordered_map<int, int> num_map;  // To store the number and its index
        for(int i = 0; i <nums.size(); i++)
        {
            int comp = target - nums[i];
            if(num_map.find(comp) != num_map.end())
            {
                return {num_map[comp], i};
            }
            num_map[nums[i]] = i;
        }
        return  {};
    }
};
