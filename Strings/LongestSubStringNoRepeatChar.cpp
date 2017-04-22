#include<iostream>
#include<stdio.h>

using namespace std;

int max(int a,int b){
    return a>b?a:b;
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/Strings/StringInput/LongestSubStringNoRepeatChar.txt","r",stdin);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int n;cin>>n;
        char str[n];cin>>str;
        int x=1,arr[26],ans=1;
        for(int i=0;i<26;i++)arr[i]=-1;
        for(int i=1;i<=n;i++){
            int y=str[i-1]-'a';

            if(arr[y]==-1 || arr[y]<x){
                arr[y]=i;
                ans=max(ans,i-x+1);
                continue;
            }else{
                if(y==str[x]-'a'){
                    ans=max(ans,i-x);
                }
                /*else{
                    ans=max(ans,i-x+1);
                }*/
                x=arr[y]+1;
            }
        }
        cout<<"Case #"<<t<<" "<<str<<" Ans="<<ans<<endl;
    }
}
