class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0, res = nums[0];
        for(int n: nums){
            if(n == res){
                c++;
            }
            else{
                c--;
                if(!c){
                    c = 1;
                    res = n;
                }
            }
        }
        return res;
    }
};