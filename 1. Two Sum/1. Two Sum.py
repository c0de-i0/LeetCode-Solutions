class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}
        for i in range(len(nums)):
            complement = target-nums[i]
            if complement in map:
                return [i,map[complement]]
            map[nums[i]] = i
        return []
        