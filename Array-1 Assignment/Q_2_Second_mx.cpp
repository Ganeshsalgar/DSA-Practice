// Find the second largest element in the given Array in one pass.

#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {1,54,6,6,5,694,3,6,6,46,6,6,46,46,432,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int ele : arr){
        cout<<ele<<" ";

    }
    cout<<endl;

    //Second largest in one pass
    int mx = INT_MIN;
    int smx = INT_MIN;
    int tmx = INT_MIN;

    for(int i  =0 ; i < n; i++){
        if(arr[i] > mx){
            smx = mx;
            mx = arr[i];
        }
        else if(arr[i] > smx && arr[i] != mx){
            smx = arr[i];
        }
        
    }
    for(int i = 0; i < n;i++){
        if(arr[i] > tmx && smx != arr[i] && mx != arr[i]){
            tmx = arr[i];
        }
    }

    cout<<"mx :-"<<mx<<endl;
    cout<<"smx :-"<<smx<<endl;
    cout<<"smx :-"<<tmx<<endl;

}