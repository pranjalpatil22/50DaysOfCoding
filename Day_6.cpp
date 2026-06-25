class Solution {
public:
    string minWindow(string s, string t) {
        map<int,int> need;
        for(int i : t)
        {
            need[i]++;
        }
        map<int,int> req;
        int l = 0,r = 0;
        int formed = 0;

        int sindex = -1;
        int len = INT_MAX;

        while(r < s.size())
        {
            req[s[r]]++;

            if(need.count(s[r]) && req[s[r]] == need[s[r]])
            formed++;

            while(formed == need.size())
            {
                if(r-l+1 < len)
                {
                    len = r-l+1;
                    sindex = l;
                }

                char c = s[l];
                req[c]--;
            if(need.count(c) && req[c] < need[c])
            {
                formed--;
            }

            l++;
                
            }
            r++;
        }

        if(sindex == -1)
        return "";
        else
        {
            return s.substr(sindex,len);
        }

    }
};
