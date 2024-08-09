class Solution:
    def findMin(self, nums: List[int]) -> int:
        low = 0
        high = len(nums) - 1
        
        while low <= high:
            mid = (low+high) // 2
                
            if nums[mid] > nums[high]:
                low = mid + 1
                
            elif nums[mid] < nums[low]:
                high = mid 
            
            else:
                return nums[low]
        return -1
            
        