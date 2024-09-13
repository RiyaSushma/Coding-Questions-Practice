// 1. Subsequence Validation

// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

// ==>> to run this code
// step 1: g++ CppDSAPractice.cpp
// step 2: ./a.out

// #include <string>
// #include <iostream>

// using namespace std;

// bool isSubsequence(string s, string t) {
//         int i=0, j=0;
//         while(i<s.length() && j<t.length()) {
//             if(s[i] == t[j]) {
//                 i++; j++;
//             } else {
//                 j++;
//             }
//         }
//         if(i<s.length()) {
//             return false;
//         } else {
//             return true;
//         }
//     }

// int main()
// {
//     string s = "";
//     string t = "bbaaaa";
//     cout<<isSubsequence(s, t)<<endl;

//     return 0;
// }


// 2. Two Number Sum

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// #include <string>
// #include <iostream>
// #include <vector>

// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i=0; i<nums.size(); i++) {
//             for(int j=i+1; j<nums.size(); j++) {
//                 if((target - nums[i]) == nums[j]) {
//                     return { i, j };
//                 }
//             }
//         }
//         return { 0, 0 };
//     }
// }; 

// int main()
// {
//     vector<int> nums = {2,7,11,15};
    
//     Solution Solution;
//     vector<int> result = Solution.twoSum(nums, 9);
    
//     for(int i=0; i<result.size(); i++) {
//         cout<<result[i]<<endl;
//     }

//     return 0;
// }