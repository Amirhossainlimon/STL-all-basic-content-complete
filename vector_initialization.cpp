#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int>x;
x={1,2,3};
cout<<"Value of x vector:"<<endl;
cout<<x[0]<<endl;
cout<<x[1]<<endl;
cout<<x[2]<<endl;
cout<<"Value of y vector:"<<endl;
vector<int>y(4,1);//4 holo size & 1 holo proti index er value.
cout<<y[0]<<endl;
cout<<y[1]<<endl;
cout<<y[2]<<endl;
cout<<y[3]<<endl;


return 0;
}
