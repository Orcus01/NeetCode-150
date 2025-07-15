// 1. Two Sum
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
 

// Constraints:

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> res;
        // for(int i = 0; i<nums.size(); i++)
        // {
        //     for(int j = i+1; j<nums.size(); j++)
        //     {
        //         if(nums[i] + nums[j] == target)
        //         {
        //             res.push_back(i);
        //             res.push_back(j);
        //             return res;
        //         }
        //     }
        // }
        // return res;

        unordered_map<int, int> num_map;

        for(int i = 0; i<nums.size(); i++)
        {
            int complement = target - nums[i];
            
            if(num_map.find(complement) != num_map.end())
            {
                return {num_map[complement], i};
            }

            num_map[nums[i]] = i;
        }
        return {};
         
    }
};