#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> nums;
    int target=9;
    unordered_map<int,int> hm;
    for(auto i=0;i<nums.size(); i++){
        auto diff=target-nums.at(i);
        if(hm.find(diff)!=hm.end()){
            cout << hm[diff] << "," << i;
            break;
        }
        hm[nums[i]] = i;
    }
}