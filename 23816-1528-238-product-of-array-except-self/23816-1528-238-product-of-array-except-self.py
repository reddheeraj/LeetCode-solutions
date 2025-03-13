def li_product(li):
    ans = 1
    for i in li:
        ans = ans * i
    return ans

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        if len(nums) < 1:
            return nums
        # answer = []
        # res_dict = {}
        # for i in range(len(nums)):
        #     t_nums = nums.copy()
        #     t_nums.pop(i)
        #     res_dict[i] = t_nums
        
        # for i in range(len((res_dict.keys()))):
        #     answer.append(li_product(res_dict[i]))
        # return answer

        # left, right = [1], [1]
        # for i in range(1, len(nums)):
        #     left.append(left[-1]*nums[i-1])
        
        # for i in range(len(nums)-2, -1, -1):
        #     right.append(right[-1]*nums[i+1])
        
        # right.reverse()
        # for i in range(len(nums)):
        #     answer.append(left[i]*right[i])
        answer = [1] * len(nums)
        left, right = 1, 1
        for i in range(len(nums)):
            answer[i] *= left
            left *= nums[i]

        for i in range(len(nums) - 1, -1, -1):
            answer[i] *= right
            right *= nums[i]
    
        return answer