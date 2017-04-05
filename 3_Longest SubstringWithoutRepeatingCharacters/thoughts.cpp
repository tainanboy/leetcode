#include <iostream>
#include <string>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

int lengthOfLongestSubstring(string s) {
    if (s.empty()){
        return 0;
    }
    int size = s.size();
    int max = 1;
    for (int i=0;i<size;i++){
        string left = s.substr(i+1,size-i);
        //cout<<left<<endl;
        size_t found = left.find(s[i]);
        //cout<<found<<endl;
        if (found!=std::string::npos){
            //cout<<left<<endl;
            int length = found+1;
            if (length >max){
                max = length;
            }
        }
        else{
            cout<<left<<endl;
            int length = left.size()+1;
            if (length >max){
                max = length;
            }
        }
    }
    return max;
}

int main(int argc, const char * argv[]) {
    /*ListNode *root;
    root = new ListNode(0);
    cout<<root->val<<endl;
    */
    string s = "abcabcbb";
    cout<<lengthOfLongestSubstring(s)<<endl;
    return 0;
}