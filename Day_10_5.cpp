class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int mid=0,low=0,high = nums.size()-1;

        while(mid <= high)
        {
            if(nums[mid]%2 == 0)
            {
                low++;
                mid++;
            }
            else if(nums[mid]%2 != 0)
            {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
        return nums;
    }
};
