/*#include<iostream>
#include<stdio.h>
using namespace std;

int *set,N,K;
bool *vis;

void printSubSet(){
    for(int i=1;i<=N;i++){
        if(vis[i]){
            cout<<set[i]<<",";
        }
    }
    cout<<endl;
}
// Creates all subsets & checks for the required condition. If true returns otherwise looks for all.
// will also work for -ve.
int SubSetSum(int k,int ii){
    if(k==K){
        //printSubSet();
        return K;
    }
    for(int i=ii;i<=N;i++){
        if(!vis[i]){
            k+=set[i];
            vis[i]=true;
            if((i+1<=N && SubSetSum(k,i+1)==K) || k==K){
                printSubSet();
            }
            vis[i]=false;
            k-=set[i];
        }
    }
    return k;
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/BackTracking/BackTrackingInputOutput/SubSetSumIP.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/SubSetSumOP.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>N;
        set=new int[N+1];
        vis=new bool[N+1];
        for(int i=0;i<=N;i++){
            set[i]=0;
            vis[i]=false;
        }
        for(int i=1;i<=N;i++){
            cin>>set[i];
        }
        cin>>K;
        cout<<"Case #"<<t<<endl;
        SubSetSum(0,1);
    }

    return 0;
}
*/
