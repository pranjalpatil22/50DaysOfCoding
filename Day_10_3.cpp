class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    //     int j = 0; 

    // for (int i = 0; i < nums.size(); i++) {
    //     if (nums[i] != val) {
    //         nums[j] = nums[i];
    //         j++;
    //     }
    // }
    
    // return j;


    int mid = 0;
        int high = nums.size()-1;
        while(mid <= high)
        {
            if(nums[mid] == val)
            {
                swap(nums[mid],nums[high]);
                high--;
            }
            else
            mid++;
        }

        return mid;
    }
};
