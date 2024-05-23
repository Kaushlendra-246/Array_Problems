#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int n = arr.size();

    //O(n^3)  all subArray
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         for(int k=i; k<=j; k++){
    //             cout<<arr[k]<<" ";
    //         }
    //         cout<<"\n";
    //     }
    // }

    //Sum of all subArray
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum += arr[k];
            }
            cout<<sum<<" ";
        }
    }
    cout<<endl;


    //Longest subArray length with sum = 15
    // int maxlen = 0;
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         int sum = 0;
    //         for(int k=i; k<=j; k++){
    //             sum += arr[k];
    //         }
    //         if(sum == 15) maxlen = max(maxlen,j-i+1);
    //     }
    // }
    // cout<<maxlen<<endl;
}
