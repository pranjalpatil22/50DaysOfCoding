class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans = 0;
        int sum = 0;
        map<int,int> mp;
        mp[0] = 1; 
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];

            if(mp.find(sum-goal) != mp.end())
            {
                ans += mp[sum-goal];
            }
            mp[sum] += 1;
        }
        return ans;

    }
};
