class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        for(int i = 0; i < grid.size(); i++)
        {
            bool flag = false;
            for(int j = 0; j < grid[0].size(); j++)
            {
            
                if(i != j)
                {
                    if(grid[i][j] != 1)
                    {
                        flag = true;
                    }
                }
            }
            if(!flag)
            return i;
        }

        return 0;
    }
};
