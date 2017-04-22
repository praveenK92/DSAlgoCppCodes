/*#include<iostream>
#include<stdio.h>
#define MAX 99999
#define MIN -99999
using namespace std;

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

class MinHeap{
public:
    int cap,s,*arr;
public:
    MinHeap(int c){
        cap=c;s=0;
        arr=new int[cap];
    }
    int parent(int i){return (i-1)/2;}
    int left(int i){return 2*i+1;}
    int right(int i){return 2*i+2;}

    int getMin(){return arr[0];}

    void MinHeapify(int i){
        int l=left(i),r=right(i),small=i;
        if(l<s && arr[l]<arr[small])small=l;
        if(r<s && arr[r]<arr[small])small=r;

        if(small!=i){
            swap(arr[i],arr[small]);
            MinHeapify(small);
        }
    }

    int extractMin(){
        if(s==0)return MAX;
        if(s==1){
            s--;
            return arr[0];
        }
        int root=arr[0];
        arr[0]=arr[s-1];
        s--;
        MinHeapify(0);
        return root;
    }

    void insertKey(int x){
        if(s==cap){
            cout<<"Capacity Full"<<endl;
            return;
        }
        int i=s++;
        arr[i]=x;
        while(i!=0 && arr[parent(i)]>arr[i]){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
    void DecreaseKey(int i,int x){
        arr[i]=x;
        while(i!=0 && arr[parent(i)]>arr[i]){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
    int deleteKey(int i){
        int x=arr[i];
        DecreaseKey(i,MIN);
        extractMin();
        return x;
    }
    void print(){
        for(int i=0;i<s;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={12, 6, 8, 2, 56, 3,23,16,45,44,98};
    int n=sizeof(arr)/sizeof(arr[0]),k=5;
    MinHeap hh(k);
    for(int i=0;i<n;i++){
        if(i<k){
            hh.insertKey(arr[i]);
        }
        else if(arr[i]>hh.getMin()){
            hh.extractMin();
            hh.insertKey(arr[i]);
        }
    }
    int sol[k];
    for(int i=k-1;i>=0;i--){
        sol[i]=hh.extractMin();
    }
    printArray(sol,k);

    return 0;
}
*/
