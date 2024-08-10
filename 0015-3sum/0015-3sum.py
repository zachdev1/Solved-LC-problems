class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        res = set()
        
        for x in range(len(nums)-2):
            y = x+1
            z = len(nums)-1
            
            while y < z:
                if nums[x] + nums[y] + nums[z] == 0 and (x != y and x != z and y != z):
                    res.add((nums[x],nums[y],nums[z]))
                    y += 1
                    z -= 1
                elif nums[x] + nums[y] + nums[z] > 0:
                    z -= 1
                else:
                    y += 1          
        return res
        