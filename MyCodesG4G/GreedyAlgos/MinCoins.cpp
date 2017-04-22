/*#include<iostream>
#include<stdio.h>
using namespace std;

int denom[]={1,2,5,10,20,50,100,500,1000},n=9;

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/GreedyAlgos/GreedyInputOutput/MinCoins.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/DijkstraOnetoOneOP.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int V,vt;
        cin>>V;vt=V;
        int sol[n],ans=0;
        for(int i=0;i<n;i++)sol[i]=0;
        for(int i=n-1;i>=0;i--){
            if(denom[i]>V)continue;
            else{
                while(V>=denom[i]){
                    V-=denom[i];
                    sol[i]++;ans++;
                }
            }
        }
        cout<<"Case #"<<t<<endl<<"Money="<<vt<<" Total Notes: "<<ans<<endl;
        for(int i=n-1;i>=0;i--){
            if(sol[i]!=0)cout<<"Rs "<<denom[i]<<":"<<sol[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
