class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int ans1 = INT_MIN,ans2 = INT_MAX;
        int s1 = 0,s2 = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            s1 = max(nums[i], s1+nums[i]);
            s2 = min(nums[i], s2+nums[i]);

            ans1 = max(ans1,s1);
            ans2 = min(ans2,s2);
        }

        return max(ans1,abs(ans2));
    }
};
