class Solution {
public:
    int longestPalindrome(string s) {
        int res = 0;
        vector<int> cmap(200, 0);
        for(auto c: s){
            int idx = int(c)-int('A');
            cmap[idx] += 1;
        }
        bool odd = false;
        for(int i=0; i < cmap.size(); ++i){
            if (cmap[i]&1){
                res += cmap[i]-1;
                if(!odd){
                    res += 1;
                    odd = true;
                }
            }
            else{
                res += cmap[i];
            }
        }
        
        return res;
    }
};