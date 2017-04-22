/*#include<iostream>
#include<stdio.h>
using namespace std;

int max(int a,int b){
    return a>b?a:b;
}

int *arr,n,ans;

int LCSRecursive(int x){
    if(x==1)return 1;
    int res,max1=1;
    for(int i=1;i<x;i++){
        res=LCSRecursive(i);
        if(arr[i-1]<arr[x-1])max1=max(res+1,max1);
    }
    ans=max(ans,max1);
    return max1;
}
int LCSBottomUp(int *arr,int n){
    if(n==1)return 1;
    int lcs[n];
    for(int i=0;i<n;i++)lcs[i]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                lcs[i]=max(lcs[i],1+lcs[j]);
            }
        }
    }
    return lcs[n-1];
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/DP/DPInputOutput/LongestIncreasingSubsequenceInput.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>n;
        arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ans=1;
        //LCSRecursive(n);

        cout<<"Case #"<<t<<endl;
        cout<<"Length of lis is: "<<ans<<endl;
        cout<<"Length of lis is(using DP): "<<LCSBottomUp(arr,n)<<endl;

    }
    return 0;
}
*/
