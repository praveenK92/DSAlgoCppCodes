/*#include<iostream>
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
    int parent(int i){
        return (i-1)/2;
    }
    int left(int i){
        return 2*i+1;
    }
    int right(int i){
        return 2*i+2;
    }

    void Heapify(int i){
        int l=left(i),r=right(i),min1=i;
        if(l<s && arr[l]<arr[min1]){
            min1=l;
        }
        else if(r<s && arr[r]<arr[min1]){
            min1=r;
        }
        if(min1==i)return;
        swap(arr[i],arr[min1]);
        Heapify(min1);
    }

    int getMin(){
        if(s==0)return MAX;
        return arr[0];
    }
    int extractMin(){
        if(s==0){
            return MAX;
        }else if(s==1){
            s--;
            return arr[0];
        }
        int root=arr[0];

        arr[0]=arr[s-1];
        s--;
        Heapify(0);
        return root;
    }

    void insertKey(int k){
        if(s==cap){
            cout<<"Heap Full"<<endl;
            return;
        }
        arr[s++]=k;
        int i=parent(s-1),j=s-1;
        while(j!=0 && arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            j=i;
            i=parent(j);
        }
    }

    void DecreaseKey(int i,int x){
        arr[i]=x;
        while(i!=0 && arr[parent(i)]>arr[i]){
            swap(arr[parent(i)],arr[i]);
            i=parent(i);
        }
    }
    int deleteKey(int i){
        int ans=arr[i];
        DecreaseKey(i,MIN);
        extractMin();
        return ans;
    }
    void print(){
        for(int i=0;i<s;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    MinHeap h(11);
    h.insertKey(3);
    h.insertKey(2);h.print();
    h.deleteKey(1);h.print();
    h.insertKey(15);
    h.insertKey(5);
    h.insertKey(4);
    h.insertKey(45);h.print();
    cout << h.extractMin() << " ";
    cout << h.getMin() << " ";
    h.DecreaseKey(2, 1);
    cout << h.getMin();
    return 0;
}
*/
