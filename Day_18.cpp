class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> mp;
        int n = grid.size();

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                mp[grid[i][j]]++;
            }
        }
        int mis = -1, rep = -1;
        for(int i = 1; i <= n*n; i++)
        {
            if(mp.find(i) == mp.end())
            mis = i;

            if(mp[i] == 2)
            rep = i;

            if((mis != -1) && (rep != -1))
            {
                break;
            }
        }

        return {rep,mis};
    }
};
