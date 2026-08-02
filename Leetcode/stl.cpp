#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
#include "stl.h"

using namespace std;

void vectors(){
    vector<int> v;
    v={1,2,3};
    v.push_back(10);
    v.push_back(12);
    v.pop_back();
    for (int x:v){
        cout << x << endl;
    }
    cout << "vector size:" << v.size() << endl;
    v.insert(v.begin()+2, 100);
    v.erase(v.begin()+3);
    cout << "vector size:" << v.size() << endl;
    cout << "is vector empty:" << v.empty() << endl;
    
    vector<int> v1= {1,2,3};
    sort(v.begin(),v.end());
    
    vector<char> v2={'a','b','c', 'A', 'g'};
    sort(v2.begin(),v2.end());
    
    for(char c:v2){
        cout << c << ' ';
    }
    
}

void lists(){
    list<int> l;
    l.push_front(10);
    l.push_back(20);
    l.push_front(13);
    for(int x:l){
        cout << x << " ";
    }
    l.reverse();
    cout << endl;
    for(int x:l){
        cout << x << " ";
    }
    cout << endl;
}

void unorderedMap(){
    unordered_map<int,string> map;
    map[1]="Toronto";
    map[2]="Montreal";
    map[3]="vancouver";
    
    if(map.find(1)!=map.end()){
        cout << "Found key and value is:" << map.find(1)->second << endl;
    } else {
        cout << "Key not found";
    }
}
