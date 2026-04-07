class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
   int l=0,r=matrix.size()-1;
   while(l<r)
   {
    for(int i=0;i<r-l;i++)
    {
       int top=l;
      int  bottom=r;
        int top_left= matrix[top][l+i];
        
     matrix[top][l+i]  = matrix[bottom-i][l];
      
      matrix[bottom-i][l]=matrix[bottom][r-i];

      matrix[bottom][r-i]=matrix[top+i][r];

       matrix[top+i][r]=top_left;

    }
    l++;
    r--;
    
   }
    }
};
