#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include <utility>
#include<string>
#include <tuple>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second){
            return true;
            }
    if (p1.second > p2.second){
        return false;
     }
    if (p1.first < p2.first){
            return true;
    }
    else{
        return false;
    }
}


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
cout<<endl<<endl;
cout << "Priority Queue" << endl;
   priority_queue<int>pq;   //Jeta boro seta age asbe mane sorted order thkbe..
    pq.push(1);
    pq.push(3);
    pq.push(5);

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
cout<<endl<<endl;

cout << "Priority Queue with smallest element at the top" << endl;

priority_queue<int, vector<int>, greater<int>> xy; // min heap>>smallest element on top

    xy.push(1);
    xy.push(3);
    xy.push(5);

    while (!xy.empty()) {
        cout << xy.top() << " ";
        xy.pop();
    }
 cout<<endl<<endl;

cout<<"Map:"<<endl<<endl;
  map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera", 25});
    m.emplace("Amir",16);
    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
  cout<<"Count of Amir: "<<m.count("Amir")<<endl; //Amir name e key ache koyta
  cout<<"Value of Amir key's: "<<m["Amir"]<<endl<<endl; // Amir name er key er value dibe.

  cout<<"After erase: "<<endl;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera", 25});
    m.emplace("Amir",16);
    m.erase("watch");
    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    cout<<"Use find() in map:"<<endl;
  //  cout<<m.find("Amir"); is not possible
  if(m.find("Amir")!=m.end()){
    cout<<"This pair of key and value is found"<<endl;
      }
 else{
    cout<<"This pair of key and value is not found"<<endl;
 }
 cout<<endl;

 cout<<"Multimap:"<<endl;

    multimap<string, int> mm;

    mm.insert({"apple", 10});
    mm.insert({"banana", 20});
    mm.insert({"apple", 30});  // duplicate key
 for (auto p : mm) {
        cout << p.first << " " << p.second << endl;
    }

cout<<"After erase same elements in multimap:"<<endl;
   multimap<string, int> Mm;
    Mm.insert({"Limon", 10});
    Mm.insert({"Nijhum", 03});
    Mm.insert({"Limon", 30});  // duplicate key

    Mm.erase("Limon");
 for (auto p : Mm) {
        cout << p.first << " " << p.second << endl;
    }
cout<<endl;

cout<<"After erase exact element in multimap:"<<endl;
   multimap<string, int> MM;
    MM.insert({"Limon", 10});
    MM.insert({"Nijhum", 03});
    MM.insert({"Limon", 30});  // duplicate key

    MM.erase(MM.find("Limon"));
 for (auto p : MM) {
        cout << p.first << " " << p.second << endl;
    }
    cout<<endl;

cout<<"Unordered Map:"<<endl;

 unordered_map<string, int>UM;
    UM.insert({"Limon", 10});
    UM.insert({"Nijhum", 03});
    UM.insert({"Nur", 40});
    UM.insert({"Eshan", 33});
 for (auto p : UM) {
        cout << p.first << " " << p.second << endl;
    }

cout<<endl<<endl;

cout<<"Set: "<<endl;
    set<int>S;

    S.insert(10);
    S.insert(5);
    S.insert(15);
 for(auto i:S){
 cout<<i<<" ";
 }
cout<<endl;
cout<<"Lower bound(5): "<<*(S.lower_bound(5))<<endl;
cout<<"Lower bound(6): "<<*(S.lower_bound(6))<<" (Cause 5,10,15 teh 6 nai)"<<endl;// 6 nai tai 6 er thik pore j value ache seta dibe.
cout<<"Lower bound(20): "<<*(S.lower_bound(20))<<" (20 exist kore na)"<<endl;
cout<<"Upper bound(5): "<<*(S.upper_bound(5))<<" (Cause 5,10,15 teh 5 er thik pore boro value 10)"<<endl;
cout<<"Upper bound(10): "<<*(S.upper_bound(10))<<" (Cause 5,10,15 teh 10 er thik pore boro value 15)"<<endl;
//cout<<"Upper bound(15): "<<*(S.upper_bound(15))<<endl; eta 15 er poreer value dibe jdi na thke sei khetre porer ondex ta dibe must..
cout<<endl;

cout<<"Multi-set:"<<endl;

multiset<int> ms;

    ms.insert(3);
    ms.insert(3);
    ms.insert(2);
    ms.insert(1);
    ms.insert(5);
    ms.insert(1);
    for (auto i : ms) {
        cout << i << " ";
    }
    cout << endl;

    cout<<"Unordered Set:"<<endl;
    unordered_set<int> Ms;

    Ms.insert(3);
    Ms.insert(3);
    Ms.insert(2);
    Ms.insert(1);
    Ms.insert(5);
    Ms.insert(1);
    for (auto i : Ms) {
        cout << i << " ";
    }
    cout << endl<<endl;
 cout<<"Algorithms:"<<endl;
 cout<<"Sorting:"<<endl;

 int arr[5] = {5, 3, 9, 1, 7};
    sort(arr, arr + 5);
    cout << "Sorted array (ascending): ";
    for (int i = 0; i < 5; i++){
    cout << arr[i] << " ";
    }
    cout << endl;

   cout << "Sorted array (descending): ";
    sort(arr, arr +5, greater<int>());

    for (int i = 0; i < 5; i++){
    cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> Vec = {10, 2, 8, 4, 6};
    cout << "Sorted Vector (ascending): ";
    sort(Vec.begin(), Vec.end());
    for (int x : Vec){
    cout << x << " ";
    }
    cout << endl;
    cout << "Sorted Vector (descending): ";
    sort(Vec.begin(), Vec.end(), greater<int>());
    for (int x : Vec){
    cout << x << " ";
    }
    cout << endl<<endl;

  cout<<"Comparator: "<<endl;
// call Comparator function
vector<pair<int, int>>vec1 = {{1, 1}, {2, 1}, {3, 3}, {4, 1}};
sort(vec1.begin(), vec1.end(), comparator);
   cout<<"{";
    for (auto p : vec1){
    cout<< p.first << ", " << p.second<<endl;
    }
    cout<<"}";

    cout << endl<<endl;

vector<int> Vec1 = {10, 2, 8, 4, 6};
cout<<"Max elements:"<<*(max_element(Vec1.begin(),Vec1.end()))<<endl;
cout<<"Mini elements:"<<*(min_element(Vec1.begin(),Vec1.end()))<<endl;
cout<<endl;

cout<<"Binary_search:"<<endl;

  sort(Vec1.begin(), Vec1.end());
  int key=4;
if (binary_search(Vec1.begin(), Vec1.end(), key)) {
        cout << key << " found in Vec1" << endl;
    }
    else {
        cout << key << " not found in Vec1" << endl;
    }

cout<<"Count Bits:"<<endl;
int n = 10;
long int n2 = 40;
long long int n3 = 50;

cout<<"Number of set bits in int (15): "<< __builtin_popcount(n) << endl;    // for int
cout  << "Number of set bits in int (40): " << __builtin_popcountl(n2) << endl;  // for long int
cout<< "Number of set bits in int (50): "  << __builtin_popcountll(n3) << endl; // for long long int

return 0;
}
