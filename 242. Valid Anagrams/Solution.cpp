class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        vector<int> arr(26, 0);
        for(int i=0;i<s.length();++i){
            arr[int(s[i])-int('a')]++;
        }
        for(int i=0;i<t.length();++i){
            if(arr[int(t[i])-int('a')]-- <= 0)
                return false;
        }
        return true;
    }
};