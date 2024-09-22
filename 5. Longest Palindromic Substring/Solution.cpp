class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        for(int m=0; m < s.length(); ++m){
            
            // Odd length palindromes
            string temp = ""+ string(1, s[m]) +"";
            int l = m-1, r = m + 1;
            while (l >= 0 && r < s.length() && s[l] == s[r]){
                temp = string(1, s[l--]) + temp + string(1, s[r++]);
            } 
            if(temp.length() > res.length()){
                res = temp;
            }
            
            // Even length palindromes
            if(m+1 < s.length() && s[m] == s[m+1]){
                string temp = ""+ string(1, s[m]) + string(1, s[m+1]) +"";
                int l = m-1, r = m + 2;
                while (l >= 0 && r < s.length() && s[l] == s[r]){
                    temp = string(1, s[l--]) + temp + string(1, s[r++]);
                }  
                if(temp.length() > res.length()){
                    res = temp;
                }
            }
        }
        return res;
    }
};