class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        candidate = 0
        votecount = 0

        for i in range(n):
            if votecount == 0:
                candidate = nums[i] # assigning the value from array

            if nums[i] == candidate:  # checking same value comes again
                votecount += 1  #  if yes the increment the count by 1
            else:
                votecount -= 1  #  if No the decrement the count by 1

        return candidate
        