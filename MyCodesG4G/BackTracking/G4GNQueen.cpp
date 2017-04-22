/*#include<iostream>
using namespace std;

int N,**chess;

bool isSafe(int row,int col){
    // for any queen along the row
    for(int i=1;i<=N;i++){
        if(chess[row][i])return false;
    }
    // for diagonals we look for only 2 bcz other 2 do not matter at all
    // as no queens are there.
    for(int i=row,j=col;i>0 && j>0;i--,j--){
        if(chess[i][j])return false;
    }
    for(int i=row,j=col;i<=N && j>0;i++,j--){
        if(chess[i][j])return false;
    }
    return true;
}

bool SolveNQueen(int column){
    if(column>N)return true;

    for(int i=1;i<=N;i++){
        if(isSafe(i,column)){
            chess[i][column]=1;
            if(SolveNQueen(column+1))return true;
            // backtrack
            chess[i][column]=0;
        }
    }
    return false;
}

int main(){
    N=8;
    chess=new int*[N+1];
    for(int i=0;i<=N;i++){
        chess[i]=new int[N+1];
    }
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            chess[i][j]=0;
        }
    }
    if(SolveNQueen(1)){
        for(int i=0;i<=N;i++){
            for(int j=0;j<=N;j++){
                cout<<chess[i][j]<<" ";
            }
            cout<<endl;
        }
    }else cout<<"Sorry! No Soln Found!"<<endl;
}
*/
