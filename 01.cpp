class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int i,j;
    int len=sizeof(nums);
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(nums[i]+nums[j]==target)
                return {i,j};
        }
    }
    return {};
}
};
