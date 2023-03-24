class Solution {
public:
    class compare{
        public:
        bool operator()(const pair<int,int>& lhs, const pair<int,int>& rhs){
            return lhs.second > rhs.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pr_que;
        vector<int> result(k);
        for(unordered_map<int,int>::iterator it=map.begin(); it!=map.end();it++ ){
            pr_que.push(*it);
            if(pr_que.size()>k) pr_que.pop();
        }
        for(int i=k-1;i>=0;i--){
            result[i]=pr_que.top().first;
            pr_que.pop();
        }
        return result;
    }
};
