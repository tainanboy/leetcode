/*
Given two strings s and t, write a function to determine if t is an anagram of s.

For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
    	if (s.length() != t.length()) return false;    
    	int alphabit[26] = {0};
    	for (int i=0;i<s.length();i++){
    		alphabit[s[i]-'a']++;
    		alphabit[t[i]-'a']--;
    	}
    	for(int i=0;i<26;i++){
    		if(alphabit[i]!=0){
    			return false;
    		}
    	}	
        return true;
    }
};