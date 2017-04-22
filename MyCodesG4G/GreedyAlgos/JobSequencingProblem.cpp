/*#include<iostream>
#include<stdio.h>
using namespace std;

class Job{
public:
    char job;int d,p;
public:
    Job(char ch,int d,int p){
        this->job=ch;this->d=d;this->p=p;
    }
    Job(){
        job='-';d=0;p=0;
    }
};

void swap(Job *j1,Job *j2){
    Job *temp=j1;
    *j1=*j2;
    *j2=*temp;
}

void sortJobOnProfit(Job **jobs,int n){
    for(int i=0;i<n;i++){
        bool f=true;
        for(int j=i;j<n-i-1;j++){
            if(jobs[j]->p<jobs[j+1]->p){
                swap(jobs[j],jobs[j+1]);
                f=false;
            }
        }
        if(f)break;
    }
}


int min(int a,int b){
    return a<b?a:b;
}

void JobSequence(Job **jobs,char *res,int n){
    for(int i=0;i<n;i++){
        for(int j=min(n,jobs[i]->d)-1;j>=0;j--){
            if(res[j]=='-'){
                res[j]=jobs[i]->job;
                break;
            }
        }
    }
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/GreedyAlgos/GreedyInputOutput/JobSequencing.txt","r",stdin);
    //freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Graphs/GraphInputOutput/DijkstraOnetoOneOP.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n;
        cin>>n;
        Job **jobs=new Job*[n];
        char *res=new char[n];
        for(int i=0;i<n;i++){
            char ch;int d,p;
            cin>>ch>>d>>p;
            jobs[i]=new Job(ch,d,p);
            res[i]='-';
        }
        // Assuming already sorted on profit
        sortJobOnProfit(jobs,n);
        JobSequence(jobs,res,n);
        cout<<"Case #"<<t<<" Job Sequence is: ";
        for(int i=0;i<n;i++){
            if(res[i]!='-')cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
