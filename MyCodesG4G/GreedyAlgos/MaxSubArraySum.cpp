/*#include<iostream>
#include<stdio.h>
#define MIN -99999
using namespace std;
// Kadane Algo most optimized This one just for learning purposes
int max(int a,int b){
    return a>b?a:b;
}

int SubArraySumMiddle(int *arr,int l,int m,int h){
    int sum=0,LM=MIN,RM=MIN;
    for(int i=m;i>=l;i--){
        sum+=arr[i];
        LM=max(LM,sum);
    }
    sum=0;
    for(int i=m;i<=h;i++){
        sum+=arr[i];
        RM=max(RM,sum);
    }
    return LM+RM-arr[m];
}

int MaxSubArraySum(int *arr,int l,int h){
    if(l==h)return arr[l];
    int m=(l+h)/2;

    return max(max(MaxSubArraySum(arr,l,m),MaxSubArraySum(arr,m+1,h)),
               SubArraySumMiddle(arr,l,m,h));
}


int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/GreedyAlgos/GreedyInputOutput/MaxSubArraySum.txt","r",stdin);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int n;cin>>n;
        int arr[n],a[n+1];
        a[0]=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            a[i+1]=a[i]+arr[i];
        }
        cout<<"Case #"<<t<<" "<<MaxSubArraySum(arr,0,n-1)<<endl;
    }
    return 0;
}
*/
