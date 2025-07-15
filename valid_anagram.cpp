//242. Valid Anagram
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"

// Output: true

// Example 2:

// Input: s = "rat", t = "car"

// Output: false

 

// Constraints:

// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }

        vector<int> arr(26, 0);

        for(int i = 0; i<s.length(); i++)
        {
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--; 
        }

        for(int a: arr)
        {
            if(a != 0)
            {
                return false;
            }
        }
        return true;
    }
};