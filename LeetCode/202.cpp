class Solution {
public:
    int getSum(int n){
        int sum = 0;
        while(n){
            sum += (n%10)*(n%10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> repeat;
        
        while(1){
            int sum = getSum(n);
            if(sum == 1) return true;

            if(repeat.find(sum) != repeat.end()){
                return false;
            }else{
                repeat.insert(sum);
            }
            n=sum;
        }
    }
};
