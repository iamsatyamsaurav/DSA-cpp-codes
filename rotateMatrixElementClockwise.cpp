#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &arr, int n, int m)
{
    int startRow=0;
    int startCol=0;
    int endRow=n-1;
    int endCol=m-1;
    while(startRow<endRow && startCol<endCol){
        int prev=arr[startRow+1][startCol];

        //for first row
        for(int index=startCol;index<=endCol;index++){
            int current=arr[startRow][index];
            arr[startRow][index]=prev;
            prev=current;
        }
        startRow++;

        //for last col
        for(int index=startRow;index<=endRow;index++){
            int current=arr[index][endCol];
            arr[index][endCol]=prev;
            prev=current;
        }
        endCol--;

        //for last row
        for(int index=endCol;index>=startCol;index--){
            int current=arr[endRow][index];
            arr[endRow][index]=prev;
            prev=current;
        }
        endRow--;

        //for first col
        for(int index=endRow;index>=startRow;index--){
            int current=arr[index][startCol];
            arr[index][startCol]=prev;
            prev=current;
        }
        startCol++;
    }
}