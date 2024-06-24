```py
class Solution:
    def minOperations(self, nums: List[int]) -> int:
        ans = 0
        flag = 0

        for i in range(len(nums)): 

            if(nums[i] == flag): 
                ans += 1
                flag = (flag + 1) % 2

        return ans 
```
