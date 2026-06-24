class Solution {
public:
    string removeDuplicates(string s, int k) {
         stack<pair<char,int>> st;

        for(char ch : s) {

            // Same character
            if(!st.empty() && st.top().first == ch) {

                st.top().second++;

                // Remove if freq == k
                if(st.top().second == k) {
                    st.pop();
                }
            }
            else {

                // New character
                st.push({ch,1});
            }
        }

        string ans = "";

        while(!st.empty()) {

            char ch = st.top().first;
            int freq = st.top().second;

            while(freq--) {
                ans += ch;
            }

            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
