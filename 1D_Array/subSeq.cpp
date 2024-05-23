#include<iostream>
#include<vector>
using namespace std;

void printF(int idx,int arr[],int n,vector<int> &sub){
    if(idx >= n){
        for(auto it : sub) cout<<it<<" ";
        cout<<endl;
        return;
    }
    sub.push_back(arr[idx]); //pick
    printF(idx+1,arr,n,sub);
    
    sub.pop_back(); //not pick
    printF(idx+1,arr,n,sub);
}

int main(){
    int arr[] = {3,2,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> sub;
    printF(0,arr,n,sub);
}