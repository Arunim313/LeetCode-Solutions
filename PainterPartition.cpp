// Code Studio
// https://www.codingninjas.com/codestudio/problems/painter-s-partition-problem_1089557?topList=siddharth-singh-coding-sheet-problems


#include <bits/stdc++.h>
using namespace std;
 
bool isPossible(vector<int> &boards, int k, int n, int mid){
    int painters = 1;
    int boardSum = 0;
    
    for(int i=0; i<n; i++){
        if( boardSum + boards[i] <= mid ){
            boardSum += boards[i];
        }
        else{
            painters++;
            if( painters > k || boards[i] > mid){
                return false;
            }
            boardSum = 0;
            boardSum += boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    
    int s = 0;
    int sum = 0;
    int n = boards.size();
    
    for(int i=0; i<n; i++){
        sum += boards[i];
    }
    
    int ans = -1;
    int e = sum;
    int mid = s + (e-s)/2;
    
    while( s<=e ){
        if(isPossible(boards, k, n, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int arr[] = {12, 34, 67, 90};
    int arr2[] = {12, 12, 12, 12};
    int m = 2;
    cout << findLargestMinDistance(arr2, 4,2) << endl;    

    return 0;
}