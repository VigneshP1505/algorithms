#include<iostream>
#include<math.h>

using namespace std;

void pairs(){
    pair<int,int> p ={1,2};
    pair<int, pair<int,int>> dp={1,{1,3}};
    pair<int,int> a[] = {{1,2},{2,2}};
    cout << p.first << p.second;
    cout << dp.first << dp.second.first;
    cout << std::endl;
}

void vectors(){
    vector<int> v;
    v.push_back(10);
    v.emplace_back(2);
    cout << v.at(0);
    vector<pair<int,int>> vp;
    vp.push_back({1,2});
    vp.emplace_back(1,2);
    vector<int> v1(5,100);
    cout << v1.at(3);
    cout << std::endl;
    vector<int>::iterator it=v1.begin();
    vector<int>::reverse_iterator reverseIt=v1.rbegin();
    for(it=v1.begin();it!=v1.end();++it){
        cout << *(it) << std::endl;
    }
    for(reverseIt=v1.rbegin();reverseIt!=v1.rend();reverseIt++){
        cout << *(reverseIt) << std::endl;
    }
    vector<int> v2;
    v2.push_back(10);
    v2.push_back(20);
    cout << std::endl;
}

int main(){
    pairs();
    vectors();
    return 0;
}