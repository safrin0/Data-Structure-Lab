#include <iostream>
using namespace std;

  int main() {
  int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13} ;

cout<<"Normal Order: ";
    for(int i=0;i<13;i++) {
        cout<<a[i]<<"  ";
    }
cout<<"\n\nReverse Order: ";
    for(int i=12;i>=0;i--) {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}



