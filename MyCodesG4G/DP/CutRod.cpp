/*#include<iostream>
#include<stdio.h>
#define MIN -99999
using namespace std;

int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}

int *price;

int CutRodRec(int n){
    if(n<=0)return 0;
    int max1=MIN;
    for(int i=1;i<=n;i++){
        max1=max(max1,CutRodRec(n-i)+price[i-1]);
    }
    return max1;
}

int CutRodDP(int n){
    int sol[n+1];
    sol[0]=0;sol[1]=price[0];
    for(int i=1;i<=n;i++){
        //sol[i]=MIN;
        sol[i]=price[i-1];
        for(int j=1;j<i;j++){
            sol[i]=max(sol[i],sol[i-j]+price[j-1]);
        }
    }
    return sol[n];
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/DP/DPInputOutput/CutRodInput.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n;
        cin>>n;
        price=new int[n];
        for(int i=0;i<n;i++)cin>>price[i];

        cout<<"Case #"<<t<<endl;
        cout<<"CutRod Recursively: "<<CutRodRec(n)<<endl;
        cout<<"CutRod DP: eggs="<<CutRodDP(n)<<endl;
    }
    return 0;
}
*/
