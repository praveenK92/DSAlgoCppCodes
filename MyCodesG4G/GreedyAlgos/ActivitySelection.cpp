/*#include<iostream>
#include<stdio.h>
using namespace std;

void ActivitySelection(int *s,int *e,bool *vis,int n){
    int i=0;vis[i]=true;
    for(int j=1;j<n;j++){
        if(s[j]>=e[i]){
            i=j;
            vis[i]=true;
        }
    }
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/GreedyAlgos/GreedyInputOutput/ActivitySelection.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/DijkstraOnetoOneOP.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int *s,*e,n;
        bool *sel;
        cin>>n;
        s=new int[n];e=new int[n];sel=new bool[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
            sel[i]=false;
        }
        for(int i=0;i<n;i++){
            cin>>e[i];
        }
        // Assuming already sorted on end time increasing order.
        ActivitySelection(s,e,sel,n);
        cout<<"Case #"<<t<<" Activity Selected are: ";
        for(int i=0;i<n;i++){
            if(sel[i])cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
