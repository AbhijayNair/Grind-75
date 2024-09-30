class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;
        int i=a.length()-1, j=b.length()-1;
        while(i > -1 || j > -1){
            int v1, v2;
            if(i >= 0){
                v1 = a[i]-'0';
            }
            else{
                v1 = 0;
            }
            if(j >= 0){
                v2 = b[j]-'0';
            }
            else{
                v2 = 0;
            }
            int s = (v1+v2+carry)%2;
            carry = (v1+v2+carry)/2;
            res = to_string(s) + res;
            i--;
            j--;
        }
        if(carry){
            res = "1"+res;
        }
        return res;
    }
};