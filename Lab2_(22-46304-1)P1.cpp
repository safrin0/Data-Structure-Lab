#include <iostream>
using namespace std;
 int main() {

  cout<<"Enter the size of 1st Array: "<<endl;
    int x;
    int y;
    cin>>x;
cout<<"Enter the size of 2nd Array: "<<endl;
    cin>>y;
    int a[x];
    int b[y];
    int c[x+y];
 cout<<"\nEnter the Elements of 1st Array: "<<endl;
    for(int i=0;i<x;i++) {
        cin>>a[i]; }
 cout<<"\nEnter the Elements of 2nd Array: "<<endl;
     for(int i=0;i<y;i++) {
        cin>>b[i];
    }
           for(int i=0;i<x;i++) {
               c[i]=a[x-(i+1)];
  }
  int j=y-1;
        for(int i=x;i<x+y;i++) {
    c[i]=b[j];
        j--;  }
       for(int i=0;i<x+y;i++)  {
        cout<<c[i]<<" ";
    }
 return 0;
}
