class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int n = nums.size();
        vector<int> temp;
        for(int i = 0; i < nums.size(); i++)
        {
            temp.push_back(nums[i]);
        }
        for(int i = 0; i < nums.size(); i++)
        {
            temp.push_back(nums[i]);

        }
        int i = nums.size()-k;
       nums.clear();
        for(int j = i; j < n+i; j++)
        {
            nums.push_back(temp[j]);
        }
        
    }
};
