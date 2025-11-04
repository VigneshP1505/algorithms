#include<iostream>
#include<vector>

using namespace std;

class Algorithms{
    public:
         int maxDistinct(vector<int>& nums, int k){
            int count=0,prev=INT_MIN;
            sort(nums.begin(), nums.end());
            for(int num: nums){
                int curr=min(max(num-k,prev+1), num+k);
                if(curr>prev){
                    count++;
                    prev=curr;
                }
            }
            return count;
         }
    //remove k elements such that the vector has the minimum number of unique elements
    public:
         int leastUnique(vector<int>& nums,int k){
            unordered_map<int,int> m;
            for(int num: nums){
                m[num]++;
            }
            vector<int> frequencies;
            for(auto it:m){
                frequencies.push_back(it.second);
            }
            sort(frequencies.begin(), frequencies.end());
            int removedElements=0;
            for(int i=0;i<frequencies.size();++i){
                removedElements+=frequencies[i];
                if(removedElements>k)
                    return frequencies.size()-i;
            }
            return 0;
         }
    public:
         void duplicateZeros(vector<int>& nums){
            
         }
};

int main(){
    Algorithms o;
}