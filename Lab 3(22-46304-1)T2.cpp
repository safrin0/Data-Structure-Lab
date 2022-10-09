#include<iostream>
using namespace std;
  int main() {
    int x;
    int temp;
    string a;
   cout<<"The Sentence: ";
      getline(cin,a);

      for(int i=0; i<a.size(); i++)
        cout<<a[i];
   cout<<"\nThe Number of Changing Value: ";
        cin>>x;

    for(int i=2; i<a.size(); i+=3) {
        temp=a[i];
        a[i]=char(temp+x);
     }
cout<<"\nChanged Sentence is: ";
    for(int i=0; i<a.size(); i++)
        cout<<a[i];
        return 0;

        }
