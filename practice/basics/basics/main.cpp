//
//  main.cpp
//  basics
//
//  Created by frank on 4/2/17.
//  Copyright © 2017 frank. All rights reserved.
//

#include <iostream>
using namespace std;

//double getAverage(int *arr, int size);
//double getAverage2(int arr[], int size);

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

int main(int argc, const char * argv[]) {
    // insert code here...
    // an int array with 5 elements.
    
    /*
     int balance[5] = {1000, 2, 3, 17, 50};
    double avg, avg2;
    
    // pass pointer to the array as an argument.
    avg = getAverage(balance, 5 ) ;
    avg2 = getAverage2(balance, 5 ) ;

    
    // output the returned value
    cout << "Average value is: " << avg << endl;
    cout << "Average value is: " << avg2 << endl;
     */
    
    ListNode *root;
    root = new ListNode(0);
    return 0;
}

/*
double getAverage(int *arr, int size) {
    int    i, sum = 0;
    double avg;
    
    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }
    
    avg = double(sum) / size;
    
    return avg;
}


double getAverage2(int arr[], int size) {
    int    i, sum = 0;
    double avg;
    
    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }
    avg = double(sum) / size;
    
    return avg;
}
*/
