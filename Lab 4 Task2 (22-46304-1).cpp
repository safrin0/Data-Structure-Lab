#include<iostream>
using namespace std;
 int main() {
 int a[20],n,p,i,flag=0;
 cout<<"How many elements you want to input?";
   cin>>n;
 cout<<"\nEnter elements of the array\n";
    for(i=0;i<n;++i)
  cin>>a[i];
cout<<"\nEnter element to search:";
  cin>>p;
 for(i=0;i<n;++i)  {
   if(a[i]==p) {
      flag=1;
break;
 }
  }
  if(flag)
cout<<"\nElement is found at position "<<i+1;
 else
   cout<<"\nElement not found";
 return 0;
}
