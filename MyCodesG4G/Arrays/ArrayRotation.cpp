/*#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int GCD(int a,int b){
    if(b==0)return a;
    return GCD(b,a%b);
}

void ArrayRotate(int *arr,int n,int d){
    int gc=GCD(n,d);
    for(int i=0;i<gc;i++){
        int j=i,temp=arr[i];
        while(true){
            int k=j+d;
            k=k%n;
            if(k==i)break;
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=temp;
    }
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Arrays/Input/arrayRotateInput.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n,d;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        cin>>d;
        cout<<"Case #"<<t<<endl;
        cout<<"Before Rotation: ";print(arr,n);
        ArrayRotate(arr,n,d);
        cout<<"After Rotation: ";print(arr,n);
    }
    return 0;
}
*/
