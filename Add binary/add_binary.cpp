class Solution {
public:
    string addBinary(string a, string b) {
        string c;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int carry = 0;
        int n = max(a.size(), b.size());
        for(int i=0; i<n; i++){
            int ai = i<a.size()? a[i]-'0':0;
            int bi = i<b.size()? b[i]-'0':0;
            int val = (ai+bi+carry)%2;
            carry = (ai+bi+carry)/2;
            c.push_back(val+'0');
        }
        if(carry) c.push_back('1');
        reverse(c.begin(),c.end());
        return c;
    }
};
