// Code Studio

#include <bits/stdc++.h>
using namespace std;
 
bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++){
        if( pageSum + arr[i] <= mid ){
            pageSum += arr[i];

        }
        else{
            studentCount++;
            if( studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];    
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m){

    int max = 0;
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
        if( arr[i] > max ){
            max = arr[i];
        }
    }

    int start = 0;
    int end = sum;
    int mid = start + (end - start)/2;
    int ans = -1;

    cout << "max = " << max <<endl;
    while(start < end){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){

    int arr[] = {12, 34, 67, 90};
    int arr2[] = {12, 12, 12, 12};
    int m = 2;
    cout << allocateBooks(arr2, 4,2) << endl;    

    return 0;
}