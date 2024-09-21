class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r[26];
        int m[26];
        for(auto c : ransomNote){
            r[int(c)-int('a')] += 1;
        }
        for(auto c : magazine){
            m[int(c)-int('a')] += 1;
        }
        for(int i=0; i < 26; ++i){
            if(m[i] < r[i]){
                return false;
            }
        }
        return true;
    }
};