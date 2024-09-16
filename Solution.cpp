class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> dict = {
                {')','('},{']','['},{'}','{'}};

        for(char c: s){
            if (dict.count(c)){
                if(st.size() > 0 && st.top() == dict[c]){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                st.push(c);
            }
        }
        return st.size() == 0;
    }
};