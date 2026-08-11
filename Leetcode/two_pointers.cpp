#include<vector>
#include<stack>
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

bool validPalindrome(string s) {
    string temp;
    for(char c : s) {
        if(isalnum(c)) {
            temp += tolower(c);
        }
    }

    int l = 0;
    int r = static_cast<int>(temp.size()) - 1;

    while(l < r) {
        if(temp[l] != temp[r])
            return false;
        l++;
        r--;
    }
    return true;
}

bool isValidPalindrome(string s,int left, int right){
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
bool validPalindromeII(string s){
    int left=0,right=static_cast<int>(s.length()-1);
    while(left<right){
        if(s[left]==s[right]){
            left++;
            right--;
        }else{
            return isValidPalindrome(s,left+1,right) || isValidPalindrome(s,left,right-1);
        }
    }
    return true;
}

int substrings(string s){
    if(s.length()==0 || s.length()==1)
        return 0;
    
    int ctr=0,prev=0,res=0;
    for(int i=1;i<s.length();++i){
        if(s[i]==s[i-1]){
            ctr++;
        }else{
            prev=ctr;
            ctr=1;
        }
        if(ctr<=prev){
            res++;
        }
    }
    return res;
}

vector<int> distances(string s, char c){
    vector<int> ioc;
    int n = s.length();
    vector<int> ans(n);
    for (int i = 0; i < n; ++i) {
        if (s[i] == c)
            ioc.push_back(i);
    }
    int m = ioc.size();
    int left = 0, right = 0;
    
    for (int i = 0; i < n; ++i) {
        
        if (i > ioc[right]) {
            left = right;
            if (right < m - 1)
                ++right;
        }
        ans[i] = min(abs(ioc[right] - i), abs(ioc[left] - i));
    }
    return ans;
}

void flipInvert(vector<int>& v){
    int left=0,right=static_cast<int>(v.size()-1);
    while(left<=right){
        int tmp=v[left]^1;
        v[left]=v[right]^1;
        v[right]=tmp;
        left++;
        right--;
    }
}

void flipImage(vector<vector<int>>& image){
    for(int i=0;i<image.size();i++){
        flipInvert(image[i]);
    }
}

string removeChars(string s){
    stack<char> stack;
    string result="";
    for(char c:s){
        if(c=='#' && stack.size()!=0)
            stack.pop();
        else
            stack.push(c);
    }
    while(!stack.empty()){
        result=result+stack.top();
        stack.pop();
    }
    return result;
}
bool backspace(string s, string t){
    return removeChars(s)==removeChars(t);
}


bool backspace_O1_Space(string s, string t){
    int k=0,p=0;
    for(int i=0;i<s.length();++i){
        if(s[i]=='#'){
            k--;
            k=max(0,k);
        } else{
            s[k]=s[i];
            k++;
        }
    }
    for(int i=0;i<t.length();i++){
        if(t[i]=='#'){
            p--;
            p=max(0,p);
        }else{
            t[p]=t[i];
            p++;
        }
    }
    if(k!=p)
        return false;
    for(int i=0;i<k;i++){
        if(s[i]!=t[i])
            return false;
    }
    return true;
}


vector<int> sortArrayByParity(vector<int>& nums){
    for(int i=0,j=0;j<nums.size();j++){
        if(nums[j]%2==0){
            swap(nums[i++],nums[j]);
        }
    }
    return nums;
}

string reverseOnlyLetters(string s){
    int p1 = 0;
    int p2 = s.length() - 1;
    while (p1 < p2) {
        if (isalpha(s[p1]) && isalpha(s[p2])) {
            swap(s[p1], s[p2]);
            p1++;
            p2--;
        } else if (!isalpha(s[p1])) {
            p1++;
        } else {
            p2--;
        }
    }
    return s;
}

bool longPressedName(string name, string typed){
    int i = 0, m = name.length(), n = typed.length();
      for (int j = 0; j < n; ++j)
          if (i < m && name[i] == typed[j])
              ++i;
          else if (!j || typed[j] != typed[j - 1])
              return false;
      return i == m;
}


vector<int> squareAndSort(vector<int>& nums){
    vector<int> result(nums.size());
    int p1=0,p2=static_cast<int>(nums.size()-1);
    for(int i=nums.size()-1;i>=0;i--){
        if(abs(nums[p1])>abs(nums[p2])){
            result[i]=nums[p1]*nums[p1];
            p1++;
        } else{
            result[i]=nums[p2]*nums[p2];
            p2--;
        }
    }
    return result;
}
