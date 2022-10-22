#include<iostream>
using namespace std;
int main() {

    int a[5];
    int p;
    int temp=-2;

    int x;
    int y;
    int mid;
    cout<<" Enter the elements: ";
    for(int i=0;i<=4;i++) {
        cin>>a[i];
       }
    cout<<" Enter the number you want to search: ";
    cin>>p;
    x=0;
    y=4;
    while(x<=y) {
      mid=(x+y)/2;
      if(a[mid]==p) {
          temp=mid;
          break;
      }
      else if(p<a[mid]) {
          y=mid-1;
      }
    else {
        x=mid+1;
    }
}
    if(temp==-2) {
    cout<<" Element not found"<<endl;
    }
  else
    cout<<" Element is in index: "<<temp<<endl;
    return 0;
  }
