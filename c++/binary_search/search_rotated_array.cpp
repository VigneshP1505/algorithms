#include<iostream>

using namespace std;

bool search(vector<int>& nums,int target){
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            return true;
        }
        bool isInLeft = nums[low]<=target && nums[mid]>=target || nums[low]>=target && nums[mid]>=target;
        if(isInLeft){
            if(nums[mid]>target && nums[low]<=target){ high=mid-1; }
            else { low=mid+1; }
        }else{
            if(nums[mid]<target && nums[high]>=target) {low=mid+1;}
            else{high=mid-1;}
        }
    }
    return false;
}

int main(){
    vector<int> nums={4,5,6,6,7,0,1,2,4,4};
    vector<int> nums_1={1,0,1,1,1};
    cout << search(nums_1,0);
    return 0;
}