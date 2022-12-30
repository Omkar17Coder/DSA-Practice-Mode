You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
  
  
  
  class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // First find the trasnspose
   int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // Reverse Rows
    for(int i=0;i<n;i++){
        int s=0;
        int h=n-1;
        while(s<=h){
            swap(matrix[i][s],matrix[i][h]);
            s++;
            h--;
        }
    }
    }
};
