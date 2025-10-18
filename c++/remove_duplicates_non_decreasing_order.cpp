#include<iostream>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums){
            int i=0;
            for(int j=1;j<nums.size();++j){
                if(nums[i]!=nums[j]){
                    nums[++i]=nums[j];
                }
            }
            return i+1;
        }
    public:
        void vectors(){
            vector<int> v;
            v.push_back(10);
            v.push_back(12);
            v.push_back(13);
            cout << "vector size:" << v.size() << endl;
            cout << "max size of vector:" << v.max_size() << endl;
            //iterators
            vector<int>::iterator i = v.begin();
            for(;i!=v.end();++i){
                cout << (*i) << endl;
            }
        }
};

int main(){
    Solution o;
    vector<int> nums={1,2,3};
    o.removeDuplicates(nums);
    o.vectors();
}