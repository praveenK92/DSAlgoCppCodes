/*#include<iostream>
#include<stdio.h>
using namespace std;

int **mat,n=9;

int getMatrixRegion(int z){
    if(z>=1 && z<=3)return 1;
    else if(z>=4 && z<=6)return 4;
    else return 7;
}

bool isSafe(int x,int y,int num){
    for(int i=1;i<=n;i++){
        if(mat[x][i]==num || mat[i][y]==num)return false;
    }
    int a=getMatrixRegion(x),b=getMatrixRegion(y);
    for(int i=a;i<a+3;i++){
        for(int j=b;j<b+3;j++){
            if(mat[i][j]==num)return false;
        }
    }
    return true;
}
bool totalFull(int &i,int &j){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(mat[i][j]==0)return false;
        }
    }
    return true;
}
bool SolveSudoku(){
    int x,y;
    if(totalFull(x,y))return true;

    for(int k=1;k<10;k++){
        if(mat[x][y]==0&& isSafe(x,y,k)){
            mat[x][y]=k;
            if(SolveSudoku()){
                return true;
            }else {
                mat[x][y]=0;
            }
        }
    }
    return false;
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/BackTracking/BackTrackingInputOutput/SudokuProblemInput.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/SudokuProblemOutput.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
      mat=new int*[n+1];
      for(int i=0;i<n+1;i++){
        mat[i]=new int[n+1];
      }
      for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            mat[i][j]=0;
        }
      }
      int empty=0;
      for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cin>>mat[i][j];
            if(mat[i][j]==0)empty++;
        }
      }

      cout<<"Case #"<<t<<endl;
      if(SolveSudoku()){
          for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
          }
      }else cout<<"No Soln Found Praveen Sama!"<<endl;
      delete mat;
    }
}
*/
