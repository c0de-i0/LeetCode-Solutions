class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hashmap = {}

        for num in nums :
            if num in hashmap:
                return True
            hashmap[num] = 1

        return False