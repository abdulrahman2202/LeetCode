class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        candidate = 0
        votecount = 0

        for i in range(n):
            if votecount == 0:
                candidate = nums[i]

            if nums[i] == candidate:
                votecount += 1
            else:
                votecount -= 1

        return candidate
        