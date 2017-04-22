/*#include<iostream>
#include<stdio.h>
using namespace std;

bool **sol;

bool turn(int p,int n1,int m1){
    if(p==1)return sol[n1][m1];
    else return !sol[n1][m1];
}
int getK(int m){
    int i=1;
    while(m!=0){
        m-=2;
        i++;
    }
    return i;
}
int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/HackerRankCodes/HackerRankContests/HackerRankContestInputs/TowerBreakers.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/LongestPathOutput.txt","w",stdout);
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n,m;
        cin>>n>>m;
        sol=new bool*[m+1];
        for(int i=0;i<=,;i++){
            sol[i]=new bool[n+1];
        }
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                sol[i][j]=false;
            }
        }
        for(int i=2;i<=m;i=i+2){
            for(int j=1;j<=n;j++){
                int moves=getK(i)*j;
                sol[i][j]=false;
            }
        }

        if(sol[n][m])cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
    return 0;
}
*/
