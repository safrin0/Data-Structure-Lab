#include <iostream>
using namespace std;

  int main() {
    int a[10];
    int p;
    int count=0;
cout<<"Enter the Elements: ";
     for(int i =0;i<10;i++) {
        cin>>a[i];
 }
cout<<"Which number you want to see?"<<endl;
  cin>>p;
  for(int i=0;i<10;i++) {
    if(a[i]==p)
        count++;
        }

    cout<<p<<" "<<"repeats"<<" "<<count<< " "<<"times"<<endl;
        return 0;
   }


