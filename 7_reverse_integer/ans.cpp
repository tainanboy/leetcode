#include <iostream>
using namespace std;

int reverse(int x) {
    long result = 0;
    while(x != 0)
    {
        result = result*10 + x % 10;
        x = x/10;
    }
    return (result > INT_MAX || result < INT_MIN)? 0 : result;
}

int main(int argc, const char * argv[]) {
    int x = 12;
    cout<<x/10<<endl;
    return 0;
}