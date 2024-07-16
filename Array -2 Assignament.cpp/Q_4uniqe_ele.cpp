#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,3,3,4,4,5,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    // unique element
    bool flag = false;
    for(int i = 0; i < n; i++){
       for(int j = i+1 ; j <n; j++){
        if(arr[i] != arr[j]){
            flag = true; 
            break;
        }
       }
    }
    if(flag == true) cout<<"unique element present";
    else cout<<"not present ";
}