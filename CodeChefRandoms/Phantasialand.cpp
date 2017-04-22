/*#include<iostream>
using namespace std;

int main(){
    long n;
    cin>>n;
    long arr[n];
    for(long i=0;i<n;i++)cin>>arr[i];
    long ans=0,ones=0;
    for(long i=0;i<n;i++){
        if(arr[i]==1)ones++;
        else{
            long t=arr[i]/2;
            if(arr[i]%2==1)ones++;
            ans+=t;
        }
    }
    ans+=ones/2;
    if(ones%2==1)ans++;
    cout<<ans<<endl;
    return 0;
}
*/
