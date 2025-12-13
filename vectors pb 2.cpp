#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>a={4,5,6,7};
 for(int i:a){
    cout<<i<<endl;
 }
 cout<<"Size of a:"<<a.size()<<endl;
return 0;
}
