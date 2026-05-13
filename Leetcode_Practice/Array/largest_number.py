# 179. Largest Number
''' Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

Since the result may be very large, so you need to return a string instead of an integer.

 

Example 1:

Input: nums = [10,2]
Output: "210"'''

from functools import cmp_to_key

class Solution(object):
    def largestNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: str
        """

        nums = list(map(str, nums))

        # custom comparator
        def compare(a, b):
            if a + b > b + a:
                return -1
            else:
                return 1

        nums.sort(key=cmp_to_key(compare))

        result = ''.join(nums)

        # handle case like [0,0]
        if result[0] == '0':
            return '0'

        return result
