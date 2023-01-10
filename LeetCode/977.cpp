class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int i=0, j=nums.size()-1, k=nums.size()-1;
        for(i,j;i<=j;){
            if(nums[i]*nums[i]<nums[j]*nums[j]){
                result[k--]=nums[j]*nums[j];
                j--;
            }else{
                result[k--]=nums[i]*nums[i];
                i++;
            }
        }
        return result;
    }
};
