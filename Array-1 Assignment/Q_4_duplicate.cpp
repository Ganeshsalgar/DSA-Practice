#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,5,6,4,1,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    //duplicates in array
    bool flag = false;
    for(int i  =0; i < n; i++){
       for(int j = 0; j < n; j++){
        if(arr[i] == arr[j]){
            flag = true;
        }
       }
        
    }
    if(flag == true){
        cout<<"present duplicates";
    }
    else{
            cout<<"Not present dulpicate ";
        }
}