/*#include<iostream>
#define MAX 99999
#define MIN -99999
using namespace std;


void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Heapify(int *arr,int n,int i){
    int l=2*i+1,r=2*i+2,max1=i;

    if(l<n && arr[l]>arr[max1])
        max1=l;
    if(r<n && arr[r]>arr[max1])
        max1=r;
    if(max1!=i){
        swap(arr[i],arr[max1]);
        Heapify(arr,n,max1);
    }
}

void MaxBuildHeap(int *arr,int n){
    for(int i=n/2-1;i>=0;i--){
        Heapify(arr,n,i);
    }
}
void HeapSort(int *arr,int n){
    for(int i=n/2-1;i>=0;i--){
        Heapify(arr,n,i);
    }
    printArray(arr, n);
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        Heapify(arr,i,0);
    }
}

int main(){
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    HeapSort(arr, n);

    printArray(arr, n);
    return 0;
}
*/
