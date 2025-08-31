#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include <utility>
#include<string>
#include <tuple>
#include<stack>
#include<queue>
using namespace std;

int main(){

vector<int>v={1,2,3,4,5,6};
 vector<int>v1(v);
 for(auto i:v1){
cout<<i<<" ";
 }
 cout<<endl;

v.emplace_back(7);//same type v.push_back(7);
for(auto i:v){
cout<<i<<" ";
 }
 cout<<endl;

cout<<v[0]<<endl;
cout<<v.at(0)<<endl;

v1.erase(v1.begin());
for(auto i:v1){
cout<<i<<" ";
 }
 cout<<endl;

v1.erase(v1.begin()+2);
for(auto i:v1){
cout<<i<<" ";
 }
 cout<<endl;

 vector<int>y={7,8,9,10,11,12,13};
 y.erase(y.begin()+1,y.begin()+4);
 for(auto i:y){
cout<<i<<" ";
 }
 cout<<endl;

vector<int>z={7,8,9,10,11,12};
z.insert(z.begin()+3,16);
for(auto i:z){
cout<<i<<" ";
 }
 cout<<endl;

vector<int>a={7,8,9,10,11,12};
cout<<"Before clear values"<<endl;
for(auto i:a){
cout<<i<<" ";
 }
 cout<<endl;

 cout<<"After clear elements:"<<endl;
 a.clear();
for(auto i:a){
cout<<i<<" ";
 }
 cout<<endl;

 cout<<"Empty vector:"<<a.empty()<<endl;
 vector<int>l={1,2,3,4,5,6};
 cout<<"First value of {1,2,3,4,5,6} is:"<<*l.begin()<<endl;
 cout << "End value {1,2,3,4,5,6} is: " << *(l.end()) << endl;//it's provide a gervage value cause eta last index er pore point kore

 cout<<"List is:";
 list<int>c={1,2,3,4,5,6};
 for(auto i:c){
 cout<<i<<" ";
 }
 cout<<endl;

  cout<<"Deque is:";
 deque<int>d={1,2,3,4,5,6};
 for(auto i:d){
 cout<<i<<" ";
 }
 cout<<endl<<endl;

 cout<<"Pair:";
 pair<int, string> p = {1, "Limon"};
cout << "First: " << p.first << ", Second: " << p.second << endl;
cout<<endl<<endl;
cout<<"Vector PAir:";
vector<pair<int, string>>vec={
        {1, "Apple"},
        {2, "Banana"},
        {3, "Mango"}
    };

    for (auto x :vec) {
        cout << "ID: " << x.first << ", Name: " << x.second << endl;
    }
cout<<"Make pair using tie()"<<endl;
int id;
string name;
tie(id, name) = make_pair(10, "Limon");
cout << id << " " << name << endl;
cout<<endl<<endl;
cout<<"Nested pair:";
 pair<int, pair<string, string>> pr;
    pr.first = 21;
    pr.second.first = "Limon";
    pr.second.second = "Nijhum";
cout << "Age: " << pr.first << endl;
cout << "Name 1: " << pr.second.first << endl;
cout << "Name 2: " << pr.second.second << endl;
cout<<endl<<endl;

cout<<"Stack "<<endl;

stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
cout<<endl<<endl;

cout << "Queue" << endl;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }


return 0;
}
