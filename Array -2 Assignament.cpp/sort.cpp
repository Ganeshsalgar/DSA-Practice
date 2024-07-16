#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int ele : arr){
        cout<<ele<<" ";

    }
    cout<<endl;

    //sort array or not 
   bool flag = true;
    for(int i = 1; i < n; i++){
        if(arr[i-1] > arr[i] ){
           flag  = false;
            break;
        }
       
       
    }
   
    

    if(flag == true){
        cout<<"sort array"<<endl;
    }
    else{
        cout<<"Not sorted Array"<<endl;
    }
}