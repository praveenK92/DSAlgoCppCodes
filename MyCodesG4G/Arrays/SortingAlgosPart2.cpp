/*#include<iostream>
#include<stdio.h>
#define MIN -99999
#define MAX 99999
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

int getMax(int *arr,int n){
    int max1=MIN;
    for(int i=0;i<n;i++){
        max1=max(max1,arr[i]);
    }
    return max1;
}

void CountSortForDigitWise(int *arr,int n,int exp){
    int cc[10]={0},op[n];
    for(int i=0;i<n;i++){
        int x=(arr[i]/exp)%10;
        cc[x]++;
    }
    for(int i=1;i<10;i++){
        cc[i]+=cc[i-1];
    }
    for(int i=n-1;i>=0;i--){
        int x=(arr[i]/exp)%10;
        op[cc[x]-1]=arr[i];
        cc[x]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=op[i];
    }
}

void RadixSort(int *arr,int n){
    int m=getMax(arr,n);
    for(int exp=1;m/exp>0;exp*=10){
        CountSortForDigitWise(arr,n,exp);
    }
}

void CountSort(int *arr,int n){
    int op[n],m=getMax(arr,n)+1;
    int cc[m];
    for(int i=0;i<=m;i++){
        cc[i]=0;
    }
    for(int i=0;i<n;i++){
        cc[arr[i]]++;
    }
    for(int i=1;i<m;i++){
        cc[i]+=cc[i-1];
    }
    for(int i=0;i<n;i++){
        op[cc[arr[i]]-1]=arr[i];
        cc[arr[i]]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=op[i];
    }
}
// code taken from wikipedia
int interpolation_search(int *arr, int size, int key)
{
    int low = 0;
    int high = size - 1;
    int mid;

    while (arr[high] != arr[low] && key >= arr[low] && key <= arr[high]) {
        mid = low + ((key - arr[low]) * (high - low) / (arr[high] - arr[low]));

        if (arr[mid] < key)
            low = mid + 1;
        else if (key < arr[mid])
            high = mid - 1;
        else
            return mid;
    }

    if (key == arr[low])
        return low ;
    else
        return -1;
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

        //RadixSort(arr,n);
        CountSort(arr,n);

        cout<<"After Sorting: ";
        printArray(arr,n);
    }
    return 0;
}
*/
