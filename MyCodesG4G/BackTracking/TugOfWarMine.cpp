/*#include<iostream>
#include<stdio.h>
#define MIN -99999
#define MAX 99999
using namespace std;

bool *vis,*minCostVis;
int *arr,N,sum,other,no,minCost;

int min(int a,int b){
    return a<b?a:b;
}
void printAll(){
    cout<<"MinCost is: "<<minCost<<endl<<"Set One:"<<endl;
    for(int i=1;i<=N;i++){
        if(minCostVis[i])cout<<arr[i]<<",";
      }cout<<endl<<"Set Two:"<<endl;
      for(int i=1;i<=N;i++){
        if(!minCostVis[i])cout<<arr[i]<<",";
      }
      cout<<endl<<endl;
}
void print(int ans){
    cout<<endl<<"Cost is: "<<ans<<endl<<"Set One:"<<endl;
    for(int i=1;i<=N;i++){
        if(vis[i])cout<<arr[i]<<",";
      }cout<<endl<<"Set Two:"<<endl;
      for(int i=1;i<=N;i++){
        if(!vis[i])cout<<arr[i]<<",";
      }
      cout<<endl;
}
void setMinCost(){
    for(int i=1;i<=N;i++){
        minCostVis[i]=vis[i];
    }
}
int TugOfWar(int x,int selected){
    int ans=MAX;
    if(selected==no){
        ans=sum-other;
        if(ans<0)ans*=-1;
        minCost=min(ans,minCost);
        //print(ans);
        return ans;
    }
    for(int i=x;i<=N;i++){
        //if(!vis[i]){
            vis[i]=true;
            sum+=arr[i];
            other-=arr[i];
            selected++;
            ans=TugOfWar(i+1,selected);
            if(ans<=minCost){
                setMinCost();
                if(ans==0)return 0;
            }
            // backtrack
            vis[i]=false;
            sum-=arr[i];
            other+=arr[i];
            selected--;
        //}
    }
    return ans;
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/BackTracking/BackTrackingInputOutput/TugOfWarInput.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/BackTracking/BackTrackingInputOutput/TugOfWarOutput.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
      cin>>N;
      arr=new int[N+1];
      vis=new bool[N+1];
      minCostVis=new bool[N+1];
      for(int i=0;i<=N;i++){
        arr[i]=0;
        vis[i]=false;
        minCostVis[i]=false;
      }
      other=0;
      for(int i=1;i<=N;i++){
        cin>>arr[i];
        other+=arr[i];
      }

      sum=0;minCost=MAX;no=0;
      if(N%2==0)no=N/2;
      else no=(N/2)+1;

      TugOfWar(1,0);
      cout<<"Case #"<<t<<endl;
      printAll();
      for(int i=1;i<=N;i++){
        cout<<minCostVis[i]<<" ";
      }
      cout<<endl;
      delete arr;
      delete vis;
      delete minCostVis;
    }
}
*/
