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
    vector<int>::iterator itr;
    for(itr=v2.begin();itr!=v2.end();itr++){
        cout << *(itr) << std::endl;
    }
    vector<int>::reverse_iterator itr2;
    for(itr2=v2.rbegin();itr2!=v2.rend();itr2++){
        cout << *(itr2) << std::endl;
    }
    for(auto itr=v2.begin();itr!=v2.end();itr++){
        cout << *(itr) << std::endl;
    }

    //insert
    cout << "insert\n";
    v2.insert(v2.begin(),100);
    v2.insert(v2.begin(), 2, 50);
    for(auto itr=v2.begin();itr!=v2.end();itr++){
        cout << *(itr) << endl;
    }

    //erase
    v2.erase(v2.begin()+1);
    cout <<"erase";
    for(auto itr=v2.begin();itr<=v2.end();itr++){
        cout << *(itr) << endl;
    }

    cout << "practice" << endl;
    vector<int> copied(2,25);
    vector<int> vector(2,50); //{50,50}
    vector.push_back(10); //{50,50,10}
    vector.insert(vector.begin()+1, 300); //{50,300,50,10}
    vector.insert(vector.begin()+1, 2, 100); //{50,100,100,300,50,10}
    vector.insert(vector.begin()+1, copied.begin(), copied.end()); //{50,25,25,100,100,300,50,10}
    for(auto itr=vector.begin();itr!=vector.end();itr++){
        cout << *(itr) << endl;
    }

    cout << std::endl;
}

int main(){
    pairs();
    vectors();
    return 0;
}