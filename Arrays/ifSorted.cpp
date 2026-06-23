//check if the array is sorted or not
#include<iostream>
#include<vector>
using namespace std;

int isSorted(vector<int> a, int n){
    for(int i=0; i<n; i++){
        if(a[i] >= a[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}