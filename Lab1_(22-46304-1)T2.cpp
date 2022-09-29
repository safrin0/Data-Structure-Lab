#include <iostream>
using namespace std;

  int main() {
    int a[]= {1,2,3,4,5,6,7,8,11,12,14,15,19,20,27,56,66,79,85,97};
cout<<"Even Numbers: ";
    for(int i=0; i<20; i++) {
        if(a[i]%2==0) {
            cout<<a[i]<<" ";
         }
}
  cout<<"\nOdd Numbers: ";
     for(int i=0; i<20; i++) {
        if(a[i]%2!=0) {
            cout<<a[i]<<" ";
    }
     }
 }
