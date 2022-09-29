#include <iostream>
using namespace std;

  int a[]= {1,2,3,4,5,6,7,8,9,10,23,30};
  int i;
    void oddFinder(int x, int y) {
    cout<<"\nOdd Numbers: ";
    for(a[i]=x; a[i]<=y; i++) {
        if(a[i]%2!=0) {
            cout<<a[i]<<"  ";
    }
}
    cout<<"\n";  }
  int main() {
    int x,y;
        cout<<" First Value: ";
    cin>>x;
        cout<<" Last Value: ";
    cin>>y;
oddFinder(x,y);

      return 0;
}



