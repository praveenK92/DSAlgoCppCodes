#include <stdio.h>

class Queue{
public:
    int n,front,rear,*arr;
public:
    Queue(int x){
        n=x;
        arr=new int[n];
        front=rear=-1;
    }
    bool isEmpty(){
        return front==-1;
    }
    void add(int d){
        if(front==-1){
            front=rear=0;
            arr[rear]=d;
        }
        else{
            rear=(rear+1)%n;
            arr[rear]=d;
        }
    }
    int remove(){
        int t=arr[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%n;
        }
        return t;
    }
};

struct petrolPump
{
  int petrol;
  int distance;
};

int printTour(struct petrolPump arr[], int n){
    int i=0,j=0,s=0;
    Queue *q=new Queue(n);
    while(i<n){
        while(s>=0 && (j+1)%n!=i){
            q->add(j);
            s+=arr[j].petrol-arr[j].distance;
            j++;
        }
        if(s>0){
            return i;
        }
        i++;
        while(s<0 && !q->isEmpty()){
            int k=q->remove();
            s+=arr[k].petrol-arr[k].distance;
        }
        if(s<0)return -1;
    }
    return i;
}

// Driver program to test above functions
int main()
{
    struct petrolPump arr[] = {{6, 4}, {3, 6}, {7, 3}};

    int n = sizeof(arr)/sizeof(arr[0]);
    int start = printTour(arr, n);

    (start == -1)? printf("No solution"): printf("Start = %d", start+1);

    return 0;
}
