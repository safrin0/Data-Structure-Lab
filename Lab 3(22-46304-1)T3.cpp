#include<iostream>
using namespace std;
 struct Employee  {
    string id;
    int jyr;
    int salary;
      };
int main() {
    int x=10;
    struct Employee info[x];
       for(int i=0; i<x; i++) {
    cout<<"Employee's ID NO: ";
        cin>>info[i].id;
    cout<<"Employee's Joining Year: ";
        cin>>info[i].jyr;
    cout<<"Employee's Amount of Salary: ";
        cin>>info[i].salary;
    cout<<endl;  }
    cout<<"Employee Who Fill The Conditions: " <<endl;
      for(int i=0; i<x; i++)
        if(info[i].salary>20000 && info[i].jyr<2009)
    cout<<"Employee's ID: "<<info[i].id<<endl;
    }
