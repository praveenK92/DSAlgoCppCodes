/*#include<iostream>
using namespace std;

int maze[4][4]= {   {1, 0, 0, 0},
                    {1, 1, 0, 1},
                    {0, 1, 0, 0},
                    {1, 1, 1, 1}
                };
int sol[4][4];
int srcX,srcY,destX,destY,M,N;
int X[]={0,1};
int Y[]={1,0};

bool isSafe(int x,int y){
    return x>=0 && y>=0 && x<M && y<N && maze[x][y]==1;
}
bool DFS(int x,int y){
    if(x==destX && y==destY)return true;
    for(int i=0;i<2;i++){
        int xx=x+X[i],yy=y+Y[i];
        if(isSafe(xx,yy)){
            maze[xx][yy]=2;
            if(DFS(xx,yy))
                return true;
            else maze[xx][yy]=0;
            return false;
        }
    }
    return false;
}

int main(){
    srcX=0;srcY=0;
    destX=3;destY=3;
    M=4;N=4;
    maze[srcX][srcY]=2;
    if(DFS(0,0))cout<<"Path Exists"<<endl;
    else cout<<"No Path Exist Man!"<<endl;

    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cout<<maze[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
