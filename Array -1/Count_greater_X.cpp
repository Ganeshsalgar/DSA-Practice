#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,4,6,2,1,54,8,43,2,6,2,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);


    for(int ele :arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    int x;
    cout<<"Target value"<<endl;
    cin >> x;

    for(int i = 0; i < n; i++){
        if(arr[i] > x){
            cout<<arr[i]<<" ";
        }
    }
}