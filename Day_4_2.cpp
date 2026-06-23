class Solution {
public:
    string decodeString(string s) {
         stack<char> st;

        for (int i = 0; i < s.size(); i++) {

            char ch = s[i];

            if (ch == ']') {

                string temp = "";

              
                while (st.top() != '[') {
                    temp += st.top();
                    st.pop();
                }

                st.pop();

               
                string num = "";
                while (!st.empty() && st.top() >= '0' && st.top() <= '9') {
                    num += st.top();
                    st.pop();
                }

               
                reverse(num.begin(), num.end());
                int n = stoi(num);

               
                reverse(temp.begin(), temp.end());

                string expanded = "";
                while (n--) {
                    expanded += temp;
                }

               
                for (char c : expanded) {
                    st.push(c);
                }
            }
            else {
                st.push(ch);
            }
        }

        string res = "";

        while (!st.empty()) {
            res += st.top();
            st.pop();
        }

      
        reverse(res.begin(), res.end());

        return res;
    }
};
