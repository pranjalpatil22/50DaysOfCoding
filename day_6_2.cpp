class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() >s2.length())
        return false;

        map<char,int> mp1;
        map<char,int> mp2;

        for(int i = 0; i < s1.length(); i++)
        {
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }

        if(mp1 == mp2)
        return true;

        int l =0;
        for(int i = s1.length(); i < s2.length();i++)
        {
            mp2[s2[l]]--;
            mp2[s2[i]]++;

            if(mp2[(s2[l])] == 0)
                mp2.erase(s2[l]);

             l++;
            if(mp1 == mp2)
            return true;
           
        }
        return false;
    }
};
