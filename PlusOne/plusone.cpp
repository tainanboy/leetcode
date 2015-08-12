//
//  main.cpp
//  PlusOne
//
//  Created by Frank on 2015/7/20.
//  Copyright © 2015年 code39. All rights reserved.
//

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]!=9){
            digits[digits.size()-1]++;
            return digits;
        }
        else if(digits[digits.size()-1]==9){
            digits[digits.size()-1]=0;
            int carry=1;
            for (int i=digits.size()-2;i>=0;i--){
                if (digits[i]!=9){
                    digits[i]++;
                    return digits;
                }else{
                    digits[i]=0;
                }
            }
            vector<int> ans(digits.size()+1,0);
            ans[0]=1;
            return ans;
            
        }
    }
};
