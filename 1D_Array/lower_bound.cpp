#include<iostream>
#include<vector>
// #include<bits/stdc++.h>
using namespace std;


//O(log(n))
int lowerBound(vector<int> a,int size,int target){
    int i=0,j=size-1;
    int ans = size;//if target is greater then last index value then return after last index
    while(i <= j){
        int mid = (i+j)/2;
        if(a[mid] >= 7){
            ans = mid;
            j = mid-1;
        }
        else{
            i = mid+1;
        }
    }
    return ans;
}

//for upperBound code
// int lowerBound(vector<int> a,int size,int target){
//     int i=0,j=size-1;
//     int ans = size;//if target is greater then last index value then return after last index
//     while(i <= j){
//         int mid = (i+j)/2;
//         if(a[mid] > 7){       //change only this line
//             ans = mid;
//             j = mid-1;
//         }
//         else{
//             i = mid+1;
//         }
//     }
//     return ans;
// }


int main(){
    //Array is sorted
    vector<int> arr = {2,4,5,6,8,10,13,15,16,17};
    int n = arr.size();
    
    int ans = lowerBound(arr,n,7);

    //int ans = lower_bound(arr.begin(),arr.end(),7);

    // //O(n)
    // int ans = 0;
    // for(int i=0; i<n; i++){
    //     if(arr[i] <= 7) ans++;
    // }
    cout<<"first index which value >= 7 is : "<<ans;
    return 0;
}