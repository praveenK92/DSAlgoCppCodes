/*#include<iostream>
#include<stdio.h>
using namespace std;

int max(int a,int b){
    return a>b?a:b;
}
int n,W,*wt,*price;

int KnapSackRec(int i,int w){
    if(i==n || w==0)return 0;
    if(wt[i]>w)return KnapSackRec(i+1,w);
    else{
        return max(KnapSackRec(i+1,w),price[i]+KnapSackRec(i+1,w-wt[i]));
    }
}

int KnapSackDP(int n,int W){
    int ks[W+1][n+1];
    for(int i=0;i<=n;i++)ks[0][i]=0;
    for(int i=0;i<=W;i++)ks[i][0]=0;
    for(int i=1;i<=W;i++){
        for(int j=1;j<=n;j++){
            if(wt[j-1]>W)ks[i][j]=ks[i][j-1];
            else{
                ks[i][j]=max(ks[i][j-1],price[j-1]+ks[i-wt[j-1]][j-1]);
            }
        }
    }
    return ks[W][n];
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/DP/DPInputOutput/KnapSackInput.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>n;
        wt=new int[n];price=new int[n];
        for(int i=0;i<n;i++){
            cin>>price[i];
        }
        for(int i=0;i<n;i++){
            cin>>wt[i];
        }
        cin>>W;

        cout<<"Case #"<<t<<endl;
        cout<<"KnapSack Recursively: "<<KnapSackRec(0,W)<<endl;
        cout<<"KnapSack DP: "<<KnapSackDP(n,W)<<endl;
    }
    return 0;
}
*/
