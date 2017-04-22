/*#include<iostream>
#include<stdio.h>
using namespace std;

int turn[]={2,3,5};
bool sol[101];

bool result(int n){
    switch(n){
        case 0:
        case 1:return false;
        case 2:
        case 3:
        case 4:
        case 5:return true;
        default:return false;
    }
}
bool move(int p,int n){
    if(n<=3){
        bool f=result(n);
        if(p==1)return f;
        else return !f;
    }
    if(n==5 || n==4){
        if(p==1)return true;
        else return false;
    }
    if(p==1)return sol[n];
    else return !sol[n];
}
int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/HackerRankCodes/HackerRankContests/HackerRankContestInputs/GameOfStones.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/LongestPathOutput.txt","w",stdout);

    for(int i=0;i<100;i++){
        sol[i]=false;
    }
    for(int i=0;i<=5;i++){
        sol[i]=result(i);
    }
    for(int i=6;i<=100;i++){
        int p1=1,p2=-1;
        bool win2=move(p2,i-2);
        bool win3=move(p2,i-3);
        bool win5=move(p2,i-5);
        bool win=win2 || win3 || win5;
        sol[i]=win;
    }
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n;
        cin>>n;
        if(sol[n])cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}
*/
