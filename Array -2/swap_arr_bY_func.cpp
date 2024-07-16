#include <iostream>
using namespace std;

void print(int arr[] , int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int arr[] , int n){
    int temp;
    temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;
    
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    print(arr,n);

    swap(arr, n);

    print(arr,n);
}