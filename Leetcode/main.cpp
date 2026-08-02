#include <iostream>
#include <vector>
#include <unordered_map>
#include "stl.h"
#include "two_pointers.h"

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map; // value -> index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }

        map[nums[i]] = i;
    }

    return {};
}

void bubbleSort(vector<int>& v){
    for(int i=0;i<v.size()-1;i++){
        for(int j=0;j<v.size()-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

void preSum(vector<int>& v){
    vector<int> s;
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum=0;
        for(int j=0;j<v.size()-i-1;j++){
            sum+=v[j];
        }
        s.insert(s.begin(), sum);
    }
    for(int a:s){
        cout << a << " ";
    }
}

void preSum2(vector<int>& v){
    vector<int> result;
    int sum=0;
    for(int i=0;i<v.size();i++){
        result.push_back(sum);
        sum+=v[i];
    }
    for(int a:result){
        cout << a << " ";
    }
}

//max int value = 2147483647
bool palindromeNumber(int x){
    int original=x;
    int reverse=0;
    while (x>0) {
        int remainder = x%10;
        if(reverse > INT_MAX || (reverse == INT_MAX/10 && remainder > 7)){
            return false;
        }
        reverse = reverse*10+remainder;
        x=x/10;
    }
    return reverse==original;
}


int main() {
    vector<int> nums1 = {1,2,3,4,5,0,0,0};
    vector<int> nums2 = {2,2,3};
    mergeSortedArray(nums1,5, nums2,3);
}
