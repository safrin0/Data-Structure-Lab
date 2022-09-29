#include<iostream>
using namespace std;
int main() {
 int a1[8];
 int i;
cout<<" Enter 8 Elements for Array: ";
    for(i=0; i<8; i++)
         cin>>a1[i];
 int j;
    cout<<"Not common Elements: ";
         for(i=0; i<8; i++) {
        for(j=0; j<i; j++) {
            if (a1[i]==a1[j]) {
    break;
    }
}
 if(i==j){
{
cout<<a1[i]<<" ";
            }
        } }
return 0;
}

