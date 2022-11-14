#include <iostream>
using namespace std;
 int queue[10];
 int n = 10;
 int front = - 1, rear = - 1;
   void Insert() {
   int value;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
    else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>value;
      rear++;
      queue[rear] = value;
   }
 }
 void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
 }
void Display() {
   if (front == - 1)
       cout<<"Queue is empty"<<endl;
    else {
        cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
 }
int main() {
   int c;
   cout<<"1 Insert element to queue"<<endl;
   cout<<"2 Delete element from queue"<<endl;
   cout<<"3 Display all the elements of queue"<<endl;

   do {
      cout<<"Enter your choice : "<<endl;
       cin>>c;
      switch (c) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   }
   while(c!=5);
   return 0;
 }
