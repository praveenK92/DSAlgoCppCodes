/*#include<iostream>
#include<stdio.h>
using namespace std;

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
int min(int a,int b){
    return a<b?a:b;
}
int max(int a,int b){
    return a>b?a:b;
}

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void InsertionSort(int *arr,int n){

    for(int i=1;i<n;i++){
        int j=i,x=arr[i];
        while(j>0 && arr[j-1]>x){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=x;
    }
}
void SelectionSort(int *arr,int n){

    for(int i=0;i<n;i++){
        int m1=i;
        for(int j=i+1;j<n;j++){
            if(arr[m1]>arr[j]){
                m1=j;
            }
        }
        swap(&arr[i],&arr[m1]);
    }
}
void BubbleSort(int *arr,int n){

    for(int i=0;i<n;i++){
        bool f=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                f=true;
            }
        }
        if(!f)break;
    }
}

void Merge(int *arr,int l,int m,int r){
    int l1=m-l+1,r1=r-m;
    int La[l1],Ra[r1];
    for(int i=0;i<l1;i++){
        La[i]=arr[i+l];
    }
    for(int i=0;i<r1;i++){
        Ra[i]=arr[i+m+1];
    }
    int i=0,j=0,k=l;
    while(i<l1 && j<r1){
        if(La[i]<Ra[j]){
            arr[k++]=La[i++];
        }
        else{
            arr[k++]=Ra[j++];
        }
    }
    while(i<l1){
        arr[k++]=La[i++];
    }
    while(j<r1){
        arr[k++]=Ra[j++];
    }
}

void MergeSort(int *arr,int l,int r){
    int m=(l+r)/2;
    if(l<r){
        MergeSort(arr,l,m);
        MergeSort(arr,m+1,r);
        Merge(arr,l,m,r);
    }
}

int Partition(int *arr,int low,int high){
    int pivot=arr[high],j=low;
    for(int i=low;i<high;i++){
        if(arr[i]<pivot){
            swap(arr[i],arr[j++]);
        }
    }
    swap(arr[j],arr[high]);
    return j;
}

void QuickSort(int *arr,int low,int high){
    if(low<high){

        int part=Partition (arr,low,high);
        QuickSort(arr,low,part-1);
        QuickSort(arr,part+1,high);
    }
}

int main(){
    freopen("d://CHESS+STUDY/STUDY/COMPANY/CODES/DS&AlgoCppCodes/MyCodesG4G/Arrays/Input/SortingAlgos.txt","r",stdin);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Case #"<<t<<endl;
        cout<<"Before Sorting: ";
        printArray(arr,n);
        //InsertionSort(arr,n);
        //SelectionSort(arr,n);
        //BubbleSort(arr,n);
        //MergeSort(arr,0,n-1);
        QuickSort(arr,0,n-1);

        cout<<"After Sorting: ";
        printArray(arr,n);
    }
    return 0;
}
*/
