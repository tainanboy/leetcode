#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

void Print(const std::vector<int>& v){
    for(unsigned i = 0; i< v.size(); ++i) {
        cout << v[i];
    }
    cout<<endl;
}

/*
void Print2(const std::vector<int>& v) {
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); ++it) {
        cout << (*it) << '\n';
    }
}
*/

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    int target = 0;
    if ((m+n)%2 == 0){
        target = (m+n)/2;
    }
    else if ((m+n)%2 == 1){
        target = (m+n+1)/2;    
    }
    //cout<<target<<endl;
    vector<int> nums3(1,0);
    //Print(nums3);
    while(nums3.size()<m+n){
        if (!nums1.empty()&&!nums2.empty()){
            if (nums1.front()<nums2.front()){
            nums3.push_back(nums1.front());
            nums1.erase(nums1.begin());
            }
            else if (nums2.front()<nums1.front()){
                nums3.push_back(nums2.front());
                nums2.erase(nums2.begin());
            }
        }
        else if (nums1.empty()&&!nums2.empty()){
            nums3.push_back(nums2.front());
            nums2.erase(nums2.begin());
        }
        else if (!nums1.empty()&&nums2.empty()){
            nums3.push_back(nums1.front());
            nums1.erase(nums1.begin());
        }
    }
    //Print(nums3);
    if ((m+n)%2 == 0){
        double sum = nums3[target]+nums3[target+1];
        return sum/2;
    }
    else{
        double sum = nums3[target];
        return sum;
    }
}

int main(int argc, const char * argv[]) {
    int n1[] = {1,3};
    int n2[] = {2,4};
    vector<int> nums1(begin(n1),end(n1));
    vector<int> nums2(begin(n2),end(n2));
    //Print(nums2);
    //nums1.erase(nums1.begin());
    //Print(nums1);
    cout<<findMedianSortedArrays(nums1,nums2)<<endl;
    return 0;
}