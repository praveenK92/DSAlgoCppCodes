/*#include<iostream>
using namespace std;

int N=8;
int sol[8+1][8+1];
//int X[8]={-2,-2-1,-1,1,1,2,2};
//int Y[8]={-1,1,-2,2,2,-2,1,-1};

//int X[8]={2,1,-1,-2,-2,-1,1,2};
//int Y[8]={1,2,2,1,-1,-2,-2,-1};

int X[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
int Y[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };

bool isSafe(int x,int y){
    return x>0 && y>0 && x<=N && y<=N && sol[x][y]==-1;
}
bool TourKnight(int x,int y,int move){
    if(move==64)return true;
    int xx,yy;
    for(int i=0;i<8;i++){
        xx=x+X[i];yy=y+Y[i];
        if(isSafe(xx,yy)){
            sol[xx][yy]=move;
            if(TourKnight(xx,yy,move+1)){
                return true;
            }
            else{
                // now backtracking
                sol[xx][yy]=-1;
            }
        }
    }
    return false;
}

int main(){
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            sol[i][j]=-1;
        }
    }
    sol[1][1]=0;
    if(TourKnight(1,1,1)){
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                cout<<sol[i][j]<<" ";
            }
        cout<<endl;
        }
    }else cout<<"No Path Found!"<<endl;

    return 0;
}
*/
