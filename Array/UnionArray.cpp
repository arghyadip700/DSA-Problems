/*Given two sorted arrays, 'A' and 'B' of size 'N' and 'M', respectively, return the union of arrays.
The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. The final array should be sorted in ascending order.*/

// Solution: Uning 2 pointer approach

/*
#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n1 = a.size();
    int n2 = b.size();

    int i = 0;
    int j = 0;

    vector<int>unionArray;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionArray.size() == 0 ||unionArray.back() != a[i]){
                unionArray.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArray.size() == 0 ||unionArray.back() != b[j]){
                unionArray.push_back(b[j]);
            }
            j++;
        }
    }

    //if 2nd array runs out
    while(i<n1){
        if(unionArray.size() == 0 ||unionArray.back() != a[i]){
                unionArray.push_back(a[i]);
            }
            i++;
    }

    //if 1st array runs out
    while(j<n2){
        if(unionArray.size() == 0 ||unionArray.back() != b[j]){
                unionArray.push_back(b[j]);
            }
            j++;
    }

    return unionArray;
}
*/