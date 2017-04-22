/*#include<iostream>
using namespace std;

int n,*a,*b;

int main(){
    int T;cin>>T;
    for(int i=0;i<T;i++){
        cin>>n;
        a=new int[n+1];b=new int[n+1];
        a[0]=0;b[0]=0;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
        int ans=0;
        for(int i=1;i<=n;i++){
            int tt=a[i]-a[i-1];
            if(tt>=b[i])ans++;
        }
        cout<<ans<<endl;
    }
}
*/
