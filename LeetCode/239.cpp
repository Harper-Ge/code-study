class Solution {
public:
    class MyQueue{
        public:
            deque<int> que;
            void pop(int value) {
                if(!que.empty() && que.front()==value){
                    que.pop_front();
                }
            }
            void push(int value){
                while(!que.empty() && value>que.back()){
                    que.pop_back();
                }
                que.push_back(value);
            }
            int front(){
                return que.front();
            }
    };
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        MyQueue que;
        vector<int> max;
        for(int i=0;i<k;i++){
            que.push(nums[i]);
        }
        max.push_back(que.front());
        for(int i=k;i<nums.size();i++){
            que.pop(nums[i-k]);
            que.push(nums[i]);
            max.push_back(que.front());
        }
        return max;
    }
};
