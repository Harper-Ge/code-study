class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n,0));
        int cnt=1;
        int i=0,j=0;
        int loop=n/2;
        int offset=1;
        while(loop--){
            for(;j<n-offset;j++){
                matrix[i][j]=cnt;
                cnt++;
            }
            for(;i<n-offset;i++){
                matrix[i][j]=cnt;
                cnt++;
            }
            for(;j>offset-1;j--){
                matrix[i][j]=cnt;
                cnt++;
            }
            for(;i>offset-1;i--){
                 matrix[i][j]=cnt;
                cnt++;
            }
            i++;
            j++;
            offset+=1;
        }
        if(n%2!=0){
            int mid = n/2; 
            matrix[mid][mid]=cnt;
        }
        return matrix;
    }
};
