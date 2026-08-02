#include<vector>
#include<iostream>

using namespace std;

void removeDuplicates(vector<int>& nums){
    int j=0;
    for(int i=1;i<nums.size();i++){
        if(nums[j]!=nums[i]){
            nums[++j]=nums[i];
        }
    }
    for(int a:nums){
        cout << a << " ";
    }
}


int firstOccurrence(string needle, string hay){
    int len_needle=static_cast<int>(needle.length());
    int len_hay=static_cast<int>(hay.length());
    int p1=0,p2=0,p3=0;
    
    if(len_needle>len_hay){
        return -1;
    }
    
    while(p1<len_needle&&p2<len_hay){
        if(needle[p1]!=hay[p2]){
            p1=0;
            p2=p3+1;
            p3=p2;
        } else{
            p1++;
            p2++;
        }
    }
    
    if(p1>=len_needle){
        return p3;
    }
    return -1;
}

int removeElement(vector<int>& nums, int val){
    int p1=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            nums[p1]=nums[i];
            p1++;
        }
    }
    return p1+1;
}

void mergeSortedArray(vector<int>& nums1,int m, vector<int>& nums2, int n){
    int p1=0,p2=0;
    vector<int> result;
    while(p1<m&&p2<n){
        if(nums1[p1]<=nums2[p2]){
            result.push_back(nums1[p1]);
            p1++;
        }else{
            result.push_back(nums2[p2]);
            p2++;
        }
    }
    
    if(p1<m){
        for(int i=p1;i<m;i++){
            result.push_back(nums1[i]);
        }
    }
    if(p2<n){
        for(int i=p2;i<n;i++){
            result.push_back(nums2[i]);
        }
    }
    
    for(int i=0;i<result.size();++i){
        nums1[i]=result[i];
    }
    
    for(int a:result){
        cout << a << " ";
    }
    
}

void mergeSortedArrayWithoutExtraSpace(vector<int>& nums1,int m, vector<int>& nums2, int n){
    if(n==0)
        return;
    int len1=static_cast<int>(nums1.size());
    int end_idx=len1-1;
    while(n>0&&m>0){
        if(nums2[n-1]>=nums1[m-1]){
            nums1[end_idx]=nums2[n-1];
            n--;
        }else{
            nums1[end_idx]=nums1[m-1];
            m--;
        }
        end_idx--;
    }
    while(n>0){
        nums1[end_idx]=nums2[n-1];
        n--;
        end_idx--;
    }
}
