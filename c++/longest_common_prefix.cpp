#include<iostream>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    if(strs.empty()) return "";
    string result=strs[0];
    int prefLen = result.length();
    for(int i=1;i<strs.size();++i){
        string s=strs[i];
        while(prefLen>s.length() || result!=s.substr(0,prefLen)){
            prefLen--;
            if(prefLen==0) return "";
            result=result.substr(0,prefLen);
        }
    }
    return result;
}

int main(){
    vector<string> v={"flower","flow","flight"};
    cout << longestCommonPrefix(v);
}