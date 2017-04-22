/*#include<iostream>
#include<stdio.h>
using namespace std;

int max(int a,int b){
    return a>b?a:b;
}

int *arr,n;

int BitonicSequence(int *arr,int n){
    if(n==1)return 1;
    int lcs[n],lds[n],bitonic[n];
    for(int i=0;i<n;i++){
        lcs[i]=1;lds[i]=1;bitonic[i]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                lcs[i]=max(lcs[i],1+lcs[j]);
            }
        }
    }
    for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(arr[j]<arr[i]){
                lds[i]=max(lds[i],1+lds[j]);
            }
        }
    }
    int max1=1;
    for(int i=0;i<n;i++){
        bitonic[i]=lcs[i]+lds[i]-1;
        max1=max(max1,bitonic[i]);
        //cout<<i<<" LCS: "<<lcs[i]<<" LDS: "<<lds[i]<<" Bitonic: "<<bitonic[i]<<endl;
    }
    return max1;
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/DP/DPInputOutput/BitonicSequenceInput.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>n;
        arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<"Case #"<<t<<endl;
        cout<<"Length of Bitonic Sequence is: "<<BitonicSequence(arr,n)<<endl;
    }
    return 0;
}
*/
