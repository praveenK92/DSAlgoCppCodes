/*#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;


int main(){
    string s;
    cin>>s;
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int l,r,n;
        string x;
        cin>>l>>r;
        n=r-l+1;
        x=s.substr(l-1,n);
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=x.at(i)-'0';
        }
        if(n>=2){
            for(int i=n-1;i>0;i--){
                int a=2*arr[i],b=arr[i-1];
                if(b>=a){
                    arr[i-1]=b-a;
                }else{
                    long xx=b,fac=10,j=i-2;
                    for(;j>=0;j--){
                        xx+=arr[j]*fac;
                        if(xx>=a)break;
                        fac*=10;
                    }
                    if(xx<=a){
                        arr[0]=a-xx;arr[1]=0;
                        break;
                    }else{
                        xx=xx-a;
                        for(int k=i-2;k>=j;k--){
                            arr[k]=xx%10;
                            xx=xx/10;
                        }
                    }

                }
            }
            int res=arr[0]+arr[1]*10;
            if(res%7==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else{
            if(arr[0]%7==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }

    return 0;
}
*/
