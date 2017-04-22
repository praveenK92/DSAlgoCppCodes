#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/HackerRankCodes/HackerRankContests/HackerRankContestInputs/FairRations.txt","r",stdin);
    int n;
    cin>>n;
    int arr[n][2],even=0;
    bool ans[n][2];
    for(int i=0;i<n;i++){
        cin>>arr[i][0];
        arr[i][1]=arr[i][0];
        if(arr[i][0]%2==0)even++;
        ans[i][0]=ans[i][0]=false;
    }
    for(int i=0;i<n;i++){
        if(arr[i][0]%2==0){
            arr[i][0]++;

        }

    }


    return 0;
}
