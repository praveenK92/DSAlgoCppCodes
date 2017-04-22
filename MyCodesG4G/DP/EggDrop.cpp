/*#include<iostream>
#include<stdio.h>
#define MAX 99999
using namespace std;

int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}

int EggDropRec(int n,int k){
    if(k==0 || k==1)return k;
    if(n==1)return k;

    int min1=MAX;
    for(int x=1;x<=k;x++){
        int temp=1+max(EggDropRec(n-1,x-1),EggDropRec(n,k-x));
        min1=min(min1,temp);
    }
    return min1;
}

int EggDropDP(int n,int k){
    int egg[n+1][k+1];

    for(int i=1;i<=n;i++){
        egg[i][0]=0;
        egg[i][1]=1;
    }
    for(int i=0;i<=k;i++){
        egg[0][i]=MAX;
        egg[1][i]=i;
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<=k;j++){
            egg[i][j]=MAX;
            for(int x=1;x<=j;x++){
                int temp=1+max(egg[i-1][x-1],egg[i][j-x]);
                egg[i][j]=min(egg[i][j],temp);
            }
        }
    }
    return egg[n][k];
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/DP/DPInputOutput/EggDropInput.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n,k;
        cin>>n>>k;

        cout<<"Case #"<<t<<endl;
        //cout<<"EggDrop Recursively: "<<EggDropRec(n,k)<<endl;
        //Recursive gets stuck for n=2 k=36
        cout<<"EggDrop DP: eggs="<<n<<" Floors= "<<k<<" Tries= "<<EggDropDP(n,k)<<endl;
    }
    return 0;
}
*/
