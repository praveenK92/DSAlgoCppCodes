/*#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    int arr[n],f[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        f[i]=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                f[i]+=1;
            }
        }
    }
    int ans=0;
    //sort(f,f+n);

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(f[i]+f[j]>=k)ans++;
        }
    }
    /*int i=0,j=n-1;
    for(j=n-1;j>i;){
        for(;i<j;){
            if(f[i]+f[j]>=k){
                ans+=j-i;
                j--;
                break;
            }else i++;
        }
    }*//*
    cout<<ans;
    return 0;
}
*/
