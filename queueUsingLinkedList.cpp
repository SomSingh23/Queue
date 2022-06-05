#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *next ;
};
class Queue{
    public:
    node *front =nullptr;
    node *rear =nullptr;

};
void enqueue(Queue *ptr , int x){
if(ptr->rear==nullptr){
    //queue is empty
    node *p = new node ;
    if(p==nullptr)cout<<"Memory nai hai ab Heap me"<<endl;
    ptr->front =p;
    ptr->rear=p;
    p->data = x ;
    p->next =nullptr; 
   
}
else {
    node *p = new node ;
 ptr->rear->next = p ;
 ptr->rear = p ;
 p->data = x; 
 ptr->rear->next = nullptr ;

}
}
int dequeue(Queue *ptr){int x = -1 ;
    if(ptr->front==nullptr)cout<<"delete nai kar sakte"<<endl;
    if(ptr->front==ptr->rear){
          node *qtr  = ptr->front ;
          ptr->front=ptr->rear=nullptr ;
          delete qtr;
    }
    else {
        node *qtr  = ptr->front ;
        x = qtr->data ;
        ptr->front = ptr->front->next ;
        qtr->next = nullptr ;
        delete qtr ;
    }
    return x ;
}
void display(Queue &refe){
    node *ptr = refe.front ;
    while (ptr)
    {
       cout<<ptr->data<<" ";
       ptr=ptr->next ;
    }
    cout<<endl;

}
int main(){
 Queue obj1;
 enqueue(&obj1,15);
  enqueue(&obj1,17);
   enqueue(&obj1,19);
    enqueue(&obj1,21);
     enqueue(&obj1,23);
     dequeue(&obj1);
      dequeue(&obj1);
     display(obj1);
        dequeue(&obj1);
      dequeue(&obj1);
     display(obj1);
        dequeue(&obj1);
      dequeue(&obj1);
     display(obj1);
     enqueue(&obj1,15);
  enqueue(&obj1,17);
   enqueue(&obj1,19);
    enqueue(&obj1,21);
    display(obj1);

}