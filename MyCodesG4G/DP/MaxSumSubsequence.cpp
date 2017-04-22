/*#include<iostream>
#include<stdio.h>
using namespace std;

int max(int a,int b){
    return a>b?a:b;
}

int *arr,n,ans;

int MaxSumDP(int *arr,int n){
    if(n==1)return arr[0];
    int mss[n];
    for(int i=0;i<n;i++)mss[i]=arr[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                mss[i]=max(mss[i],arr[i]+mss[j]);
            }
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        res=max(res,mss[i]);
    }
    return res;
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/DP/DPInputOutput/MaxSumSubsequenceInput.txt","r",stdin);
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
        cout<<"Length of maxSumSubsequence is(using DP): "<<MaxSumDP(arr,n)<<endl;

    }
    return 0;
}
*/
