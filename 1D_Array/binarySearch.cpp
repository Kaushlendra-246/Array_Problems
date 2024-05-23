#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2; //start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2; //start + (end-start)/2;
    }
    return -1;
}

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    int search = binarySearch(arr,size,7);
    
    if(search != -1) cout<<"Element found at index "<<search<<"\n";
    else printf("Element not found"); //printf, WE can use in c++
    return 0;
}