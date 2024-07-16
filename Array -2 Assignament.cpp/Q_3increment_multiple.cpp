#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,4,5,6,5,4,8,96,2,4,6,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    //second multiple at odd index and increment by the 10 at even index

    for(int i = 0;  i < n;i++){
        if(i%2 != 0){
            arr[i] *= 2;
        }
        else{
            arr[i] += 10;
        }
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}