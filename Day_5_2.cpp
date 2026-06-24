class Solution {
public:
    vector<int> partitionLabels(string s) {
         int last[26] = {0};
    for(int i = 0; i < s.size(); i++)
        last[s[i] - 'a'] = i;
    
    vector<int> res;
    int st = 0, e = 0;
    for(int i = 0; i < s.size(); i++) {
        e = max(e, last[s[i] - 'a']); 
        if(i == e) {
            res.push_back(e - st + 1);
            st = i + 1;
        }
    }
        return res;

    }
};
