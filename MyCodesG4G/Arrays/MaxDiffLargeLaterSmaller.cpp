/*#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int abs(int x){
    if(x<0)return -x;
    else return x;
}
int max(int a,int b){
    return a>b?a:b;
}

void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Arrays/Input/MaxDiffLargestLaterSmallerInput.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int maxR=arr[n-1],ans=0;
        for(int i=n-2;i>=0;i--){
            if(arr[i]<=maxR){
                ans=max(ans,maxR-arr[i]);
            }
            else maxR=arr[i];
        }
        cout<<"Case #"<<t<<endl;
        cout<<"Max Difference Largest Element After Smaller Element: "<<ans<<endl;

    }
    return 0;
}*/
