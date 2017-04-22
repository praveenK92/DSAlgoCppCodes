/*#include<iostream>
using namespace std;

int N,**chess;
bool *row,*col;

bool isSafe(int x,int y){
    // this is a useless condition bro
    if(x<=0 || y<=0 || x>N || y>N || chess[x][y]==1)return false;
    // this condition is OK
    else if(row[x] || col[y])return false;
    //1st Diagonal
    for(int i=1;i<=N-x;i++){
        int xx=x+i,yy=y+i;
        if(xx<=N && yy<=N && chess[xx][yy]==1)return false;
    }
    for(int i=1;i<=N-x;i++){
        int xx=x+i,yy=y-i;
        if(xx<=N && yy>0 && chess[xx][yy]==1)return false;
    }
    // Other Diagonal
    for(int i=1;i<x;i++){
        int xx=x-i,yy=y-i;
        if(xx>0 && yy>0 && chess[xx][yy]==1)return false;
    }
    for(int i=1;i<x;i++){
        int xx=x-i,yy=y+i;
        if(xx>0 && yy<=N && chess[xx][yy]==1)return false;
    }
    return true;
}

bool SolveNQueen(int x,int y,int queens){
    if(queens==N)return true;
    if(isSafe(x,y)){
        chess[x][y]=1;
        row[x]=true;col[y]=true;
        queens++;
        bool flag=false;
        for(int i=1;i<=N;i++){
            flag=SolveNQueen(i,y+1,queens);
            if(flag)break;
        }
        if(flag)return true;
        else{
            chess[x][y]=0;
            queens--;
            row[x]=false;col[y]=false;
            return false;
        }
    }
    return false;
}

int main(){
    N=8;
    chess=new int*[N+1];
    row =new bool[N+1];
    col=new bool[N+1];
    for(int i=0;i<=N;i++){
        chess[i]=new int[N+1];
    }
    for(int i=0;i<=N;i++){
        row[i]=false;
        col[i]=false;
        for(int j=0;j<=N;j++){
            chess[i][j]=0;
        }
    }
    bool f=false;
    for(int i=1;i<=N;i++){
        f=SolveNQueen(i,1,0);
        if(f)break;
    }

    if(f){
        for(int i=0;i<=N;i++){
            for(int j=0;j<=N;j++){
                cout<<chess[i][j]<<" ";
            }
            cout<<endl;
        }
    }else cout<<"Sorry! No Soln Found!"<<endl;
}
*/
