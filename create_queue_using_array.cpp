#include <bits/stdc++.h>
using namespace std;
// queue using array 
/* class queue */
class Queue {
    public:
    int size ;
    int rear  ; // point to the last element
    int front ; // point to the top most element
    int *p ; // point to array created dynamically

};
void enqueue(Queue *ptr , int data){
  if(ptr->rear==ptr->size-1){cout<<"Queue is full :_("<<endl; }  
  
else { (ptr->rear)++ ;ptr->p[ptr->rear]=data ;}
}
int dequeue(Queue *ptr){
    int x = -1 ;
    if(ptr->front==ptr->rear)cout<<"Delete kya karu :_(";
    else {
        ptr->front++ ;
       x =  ptr->p[ptr->front]; 
       

    }
return x ;

}
void display(Queue *ptr){
    for(int i = ptr->front+1 ; i<=ptr->rear ; i++){
        cout<<ptr->p[i]<<" ";
    }cout<<endl;
}
int main(){

Queue obj1 ;
obj1.size = 10 ;
obj1.p = new int[obj1.size] ;
obj1.rear = -1;
obj1.front = -1;
enqueue(&obj1 , 5);
enqueue(&obj1 , 15);
enqueue(&obj1 , 25);
enqueue(&obj1 , 35);
enqueue(&obj1 , 45);

enqueue(&obj1 , 55);
enqueue(&obj1 , 65);
enqueue(&obj1 , 35);
enqueue(&obj1 , 45);

enqueue(&obj1 , 55);
enqueue(&obj1 , 65);
enqueue(&obj1 , 35);
enqueue(&obj1 , 45);

enqueue(&obj1 , 55);
enqueue(&obj1 , 65);
display(&obj1);
cout<<"dequeue : "<<dequeue(&obj1)<<endl;
cout<<"dequeue : "<<dequeue(&obj1)<<endl;
cout<<"dequeue : "<<dequeue(&obj1)<<endl;
cout<<"dequeue : "<<dequeue(&obj1)<<endl;
cout<<"dequeue : "<<dequeue(&obj1)<<endl;
cout<<"dequeue : "<<dequeue(&obj1)<<endl;
cout<<"dequeue : "<<dequeue(&obj1)<<endl;
cout<<"dequeue : "<<dequeue(&obj1)<<endl;
cout<<"dequeue : "<<dequeue(&obj1)<<endl;
cout<<"dequeue : "<<dequeue(&obj1)<<endl;
display(&obj1);

}