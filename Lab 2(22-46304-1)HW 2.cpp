#include<iostream>
using namespace std;
    int main(){
    int x;
        cout<<"Enter the size of Array: ";
          cin>>x;

    int a1[x];
       cout<<"Elements are: ";
    for(int i=0;i<x;i++) {
        cin>>a1[i]; }

    int a2[x];
        for(int i=0;i<x;i++){

    if(a2[i]!=-1){
         int count=1;

    for(int j=i+1;j<x;j++){
        if(a1[i]==a1[j]) {
    count++;
     a2[j]=-1;  }
    }
    cout<<a1[i]<<" repeats "<<count<<" times "<<endl;
    }
      }

      return 0;

    }
