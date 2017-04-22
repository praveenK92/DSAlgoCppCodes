/*#include<iostream>
#include<algorithm>
#include<stdio.h>
#define MAX 9999
using namespace std;

int x,y;

bool SumPairExists(int *arr,int n,int sum){
    sort(arr,arr+n);
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==sum){
            x=arr[i];y=arr[j];
            return true;
        }
        if(arr[i]+arr[j]<sum){
            i++;
        }else{
            j--;
        }
    }
    return false;
}

bool SumPairHash(int *arr,int n,int sum){
    bool hashMap[MAX]={0};
    for(int i=0;i<n;i++){
        if(!hashMap[sum-arr[i]]){
            if(arr[i]<0)hashMap[-arr[i]]=true;
            else hashMap[arr[i]]=true;
        }else{
            x=arr[i];y=sum-x;
            return true;
        }
    }
    return false;
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Arrays/Input/SumPairInput.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n,sum;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        cin>>sum;
        //bool flag=SumPairExists(arr,n,sum);
        bool flag=SumPairHash(arr,n,sum);
        cout<<"Case #"<<t<<endl;
        if(flag)cout<<"Yes Sum Pair Exists: "<<x<<" & "<<y<<endl;
    }
    return 0;
}
*/
