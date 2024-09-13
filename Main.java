// 1. Subsequence Validation

// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

// ==>> to run this code
// step 1: javac Main.java
// step 2: java Main

// public class Main {

//     public static boolean isSubsequence(String s, String t) {
//         int i=0, j=0;
//         while(i<s.length() && j<t.length()) {
//             if(s.charAt(i) == t.charAt(j)) {
//                 i++; j++;
//             } else {
//                 j++;
//             }
//         }

//         if(i<s.length()) {
//             return false;
//         }
//         return true;
//     }

//     public static void main(String[] args) {
//         String s = "acb";
//         String t = "ahbgdc";

//         System.out.println(isSubsequence(s, t));   
//     }
// }


// 2. Two Number Sum

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// public class Main {
//     public static int[] twoSum(int[] nums, int target) {
//         for(int i=0; i<nums.length; i++) {
//             for(int j=i+1; j<nums.length; j++) {
//                 if((target - nums[i]) == nums[j]) {
//                     return new int[] { i, j };
//                 }
//             }
//         }
//         return new int[] {0, 0};
//     }
    
//     public static void main(String[] args) {
//         int[] arr = {2, 7, 11, 15};
//         int[] result = twoSum(arr, 9);
//         for(int i=0; i<result.length; i++) {
//             System.out.println(result[i]);
//         }
//     }
// }