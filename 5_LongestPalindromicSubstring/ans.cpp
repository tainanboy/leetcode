#include <iostream>
#include <string>
using namespace std;

bool palindrome(string s)
{
    for (int i=0; i<s.size()/2; i++)
        if (s[i] != s[s.size() - 1 - i])
            return false;
    return true;
}

int main(int argc, const char * argv[]) {
    string s = "babab";
    bool result = palindrome(s);
    cout<<result<<endl;
    return 0;
}