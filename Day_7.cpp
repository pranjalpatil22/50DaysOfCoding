
class Solution {

public:
    int maxNumberOfBalloons(string text) {
        string s = "balloon";
        
        map<char,int> mp1;
        map<char,int> mp2;
        for(char c : s)
        {
            mp1[c]++;
        }
        for(char c : text)
        {
            mp2[c]++;
        }
        set<char> st(s.begin(),s.end());
        //  for(char t : st)
        // {
        //     cout << t << " ";
        // }
        int ans = 0;
        while(true)
        {
            bool flag = false;
            for(char c :st)
            {
                if(mp1.count(c) && mp2.count(c) && mp2[c] >= mp1[c])
                {
                    int a = mp1[c];
                    mp2[c] -= a;
                    // cout << "came" << " ";
                }
                else
                flag = true;
            }

            if(!flag)
            {
                ans++;
            }
            else
            return ans;
        }
    }
};
