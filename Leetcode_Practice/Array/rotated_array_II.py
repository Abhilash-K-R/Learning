'''
154. Find Minimum in Rotated Sorted Array II
Example 1:

Input: nums = [1,3,5]
Output: 1
Example 2:

Input: nums = [2,2,2,0,1]
Output: 0
'''
class Solution(object):
    def findMin(self, nums):
        left = 0
        right = len(nums) - 1

        while left < right:
            mid = (left + right) // 2

            # minimum is in right half
            if nums[mid] > nums[right]:
                left = mid + 1

            # minimum is in left half including mid
            elif nums[mid] < nums[right]:
                right = mid

            # duplicates, cannot decide
            else:
                right -= 1

        return nums[left]
