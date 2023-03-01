class Solution {
public:
    void reverse(string& s, int left, int right){
        for(int i=left,j=right;i<j; i++,j--){
            swap(s[i],s[j]);
        }
    }
    string reverseStr(string s, int k) {
        for(int i=0;i<s.size();i+=2*k){
            if(i+k<=s.size()){
                reverse(s, i, i+k-1);
            }else{
                reverse(s, i, s.size()-1);
            }
        }
        return s;
    }
};
