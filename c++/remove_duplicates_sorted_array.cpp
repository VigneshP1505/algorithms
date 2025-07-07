#include<iostream>
using namespace std;

void removeDuplicates(vector<int>& nums){
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[i] != nums[j]) {
            nums[++i] = nums[j];
        }
    }
}

int main(){
    vector<int> nums={1,1};
    removeDuplicates(nums);
}