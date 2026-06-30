class Solution {
public:
    int maxProduct(vector<int>& nums) 
    { 
        int s1 = 1, s2 = 1; 
        int max1 = INT_MIN,max2 = INT_MIN, maxi = INT_MIN;

        for(int i = 0; i < nums.size(); i++)
        {
            s1 *= nums[i];
            s2 *= nums[nums.size()-i-1];


            max1 = max(max1,s1);
            max2 = max(max2,s2);

            maxi = max(max1,max2);

            if(s1 == 0)
            s1 = 1;
            if(s2 == 0)
            s2 =1;
        }

        return maxi;
    }
};
