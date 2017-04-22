/*#include<iostream>
using namespace std;

int max(int a,int b){
    return a>b?a:b;
}

int main(){
    bool a[10001];
    a[0]=a[1]=false;
    for(int i=2;i<=1000;i++){
        a[i]=true;
    }
    for(int i=2;i<=1000;i++){
        if(!a[i])continue;
        int j=2,k;
        k=j*i;
        while(k<=1000){
            a[k]=false;
            j++;k=i*j;
        }
    }
    int T;cin>>T;
    for(int t=0;t<T;t++){
        int n;cin>>n;
        int max1=-1;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            if(a[k]){
                if(k>=max1){
                    max1=max(max1,k);
                }
            }
        }
        if(max1==-1)cout<<-1<<endl;
        else cout<<max1*max1<<endl;
    }
    return 0;
}
*/
