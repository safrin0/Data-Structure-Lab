#include <iostream>
using namespace std;

  int main() {
  int a[20][20];
   int transpose[20][20];
   int row;
   int col;
   int x;
   int y;

cout << "Enter the number of rows: ";
   cin >> row;
cout<<"Enter the number of column: ";
   cin>>col;

   for (int x=0; x<row; ++x) {
      for (int y=0; y<col; ++y) {
    cout << "Enter element a" << x << y << ": ";
         cin >> a[x][y];
 }
   }
  for (int x=0; x<row; ++x) {
       for (int y=0; y<col; ++y) {
 cout << " " ;
    a[x][y];
        if (y == col-1)
            cout << endl; }
  }
   for (int x=0; x<row; ++x)
    for (int y=0; y<col; ++y) {
    transpose[y][x] = a[x][y]; }

    cout << "\nTranspose of Matrix: " << endl;
      for (int x=0; x<col; ++x)
      for (int y=0; y<row; ++y) {
         cout<< " " << transpose[x][y];
         if (y==row-1)
            cout << endl; }
   return 0;
  }
