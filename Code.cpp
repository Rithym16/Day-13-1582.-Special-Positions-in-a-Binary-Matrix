class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int count=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    bool ans=true;
                    for(int r=0;r<row;r++){
                        if(r!=i && mat[r][j]==1){
                            ans=false;
                            break;
                        }
                    }

                    for(int c=0;c<col;c++) {
                        if(c!=j && mat[i][c]==1){
                            ans=false;
                            break;
                        }
                    }
                if(ans==true){
                count++;
            }
                }
            }
        }
        return count;
    }
};
