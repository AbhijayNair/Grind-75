// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n;
        int res = 1;
        while(l <= r){
            int m = l + ((r-l)>>1);
            if (isBadVersion(m)){
                res = m;
                r = m - 1;
            }
            else{
                l = m + 1;
            }
        }
        return res;
    }
};