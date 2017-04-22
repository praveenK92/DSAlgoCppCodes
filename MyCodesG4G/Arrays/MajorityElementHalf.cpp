/*#include<iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Arrays/Input/SumPairInput.txt","r",stdin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n,sum;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        //bool flag=SumPairExists(arr,n,sum);
        bool flag=SumPairHash(arr,n,sum);
        cout<<"Case #"<<t<<endl;
        if(flag)cout<<"Yes Sum Pair Exists: "<<x<<" & "<<y<<endl;
    }
    return 0;
}
*/
