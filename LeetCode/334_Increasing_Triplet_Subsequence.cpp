class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size() < 3) return false;
        int i1 = nums[0], i2;
        bool b2 = false;
        i1 = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(i1 < nums[i]){
                if(b2){
                    if(i2 < nums[i]){
                        return true;
                    }
                    else{
                        i2 = nums[i];
                    }
                }
                else{
                    b2 = true;
                    i2 = nums[i];
                }
            }
            else{
                i1 = nums[i];
            }
        }
        return false;
    }
};