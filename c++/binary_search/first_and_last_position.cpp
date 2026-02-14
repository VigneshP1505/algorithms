#include<iostream>

using namespace std;

int findFirstAndLast(vector<int>& nums, int target, bool searchLeft){
    vector<int> result={-1,-1};
    int low=0,high=nums.size()-1;
    int idx=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>target){
            high=mid-1;
        }else if(nums[mid]<target){
            low=mid+1;
        }else{
            idx=mid;
            if(searchLeft){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
    }
    return idx;
}

int main(){
    vector<int> nums={4,7,7,8,8,10};
    vector<int> nums_1={7,7,7,7};
    vector<int> nums_2={0,0,0};
    int leftBound=findFirstAndLast(nums_2, 7, true);
    if(leftBound==-1){
        cout << "left and right bound:" << -1 << -1 << endl;
        return 0;
    }
    int rightBound=findFirstAndLast(nums_2,7,false);
    cout << "left and right bound:" << leftBound << ',' << rightBound << endl;
    return 0;
}