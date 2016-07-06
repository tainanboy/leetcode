class Solution {
public:
    int addDigits(int num) {
        int d = num%10;
        int t = (num-d)/10;
        int sol = d+t;
        while(sol>=10){
            sol = addDigits(sol);
        }
        return sol;
    }
};