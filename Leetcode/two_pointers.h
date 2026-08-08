#ifndef TWO_POINTERS_H
#define TWO_POINTERS_H

#include <vector>
#include <iostream>
#include <string>

using namespace std;

void removeDuplicates(vector<int>& nums);
int firstOccurrence(string a, string b);
int removeElement(string a);
void mergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n);
void mergeSortedArrayWithoutExtraSpace(vector<int>& nums1, int m, vector<int>& nums2, int n);
bool validPalindrome(string a);
bool validPalindromeII(string a);
int substrings(string s);
vector<int> distances(string s, char c);
void flipImage(vector<vector<int>>& image);
void backspace_O1_Space(string s, string t);
bool longPressedName(string name, string typed);

#endif
