class Queue {
    int *arr;
    int size;
    int qfront;
    int rear;
  
    
public:
    Queue() {
        size=10001;
        arr=new int[size];
        qfront=0;
        rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
       if(qfront==rear){
           return true;
       }
       else{
           return false;
       }
    }

    void enqueue(int data) {
        //overflow condition
        if(rear==size){
            cout<<"queue is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        //underflow condition
        if(qfront==rear){
            return -1;
        }
        else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;

        }
    }

    int front() {
       if(qfront==rear){
           return -1;

       }
       else{
           return arr[qfront];
       }
    }
};