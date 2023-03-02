class Solution {
public:
    string replaceSpace(string s) {
        int size=s.size();
        int cnt=0;
        for(int i=0;i<size;i++){
            if(s[i]==' ') cnt++;
        }
        s.resize(s.size() + cnt*2);
        int newSize=s.size();
     
        for(int i=size-1, j=newSize-1;i>=0;i--,j--){
            if(s[i]!=' ') {
                s[j]=s[i];
            }else{
                s[j]='0';
                s[--j]='2';
                s[--j]='%';
            }
        }
        return s;
    }
};
