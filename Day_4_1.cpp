class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string t1 = "";
        string t2 = "";

        for(string c : word1)
        {
            t1 += c;
        }

        for(string c : word2)
        {
            t2 += c;
        }

        return t1 == t2;
    }
};
