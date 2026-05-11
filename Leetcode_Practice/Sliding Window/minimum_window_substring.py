''' 76. Minimum Window Substring
Hard
Topics
premium lock icon
Companies
Hint
Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".
The testcases will be generated such that the answer is unique.

 

Example 1:

Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
'''

class Solution(object):
    def minWindow(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        
        if len(t) > len(s):
            return ""
        
        need = {}
        for ch in t:
            need[ch] = need.get(ch, 0) + 1
        
        have = {}
        required = len(need)
        formed = 0
        
        left = 0
        min_len = float('inf')
        result = ""
        
        for right in range(len(s)):
            char = s[right]
            have[char] = have.get(char, 0) + 1
            
            if char in need and have[char] == need[char]:
                formed += 1
            
            while formed == required:
                
                if (right - left + 1) < min_len:
                    min_len = right - left + 1
                    result = s[left:right + 1]
                
                have[s[left]] -= 1
                
                if s[left] in need and have[s[left]] < need[s[left]]:
                    formed -= 1
                
                left += 1
        
        return result
