#include <iostream>
#include <string>
#include<set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    if (s.empty()){
        return 0;
    }
    int size = s.size();
    int max = 1;
    for (int i=0;i<size;i++){   
        int cur = i+1;
        set<char>a;
        while(cur<size){
            a.insert(s[i]);
            if (a.find(s[cur]) == a.end()){
                a.insert(s[cur]);
            }
            else{
                break;
            }
            cur++;
        }
        int length = a.size();
        if (length>max){
            max = length;
        }
        /*
        set<char>::iterator iter;
        for(iter=a.begin(); iter!=a.end();++iter){
            cout<<i<<endl;
            cout<<*iter;
        }
        */
    }
    return max;
}

int main(int argc, const char * argv[]) {
    /*ListNode *root;
    root = new ListNode(0);
    cout<<root->val<<endl;
    */
    string s = "bbbbb";
    cout<<lengthOfLongestSubstring(s)<<endl;
    return 0;
}