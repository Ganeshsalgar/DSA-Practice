#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {1,2,46,6,2,6,5,6,2,45,6,2,5,2,2,41};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    //find the three largest element

    int mx = INT_MIN;
    int smx = INT_MIN;
    int tmx = INT_MIN;
    for(int i = 0 ; i < n; i++){
        if(arr[i] > mx){
            smx = mx;
            mx = arr[i];
        }
        else if(arr[i] > smx && arr[i] != mx){
            tmx = smx;
            smx = arr[i];
        }
        else if(arr[i] > tmx && smx != arr[i] && mx != arr[i]){
            tmx = arr[i];
        }
    }

    cout<<"Max :- "<<mx<<endl;
    cout<<"Second Max :- "<<smx<<endl;
    cout<<"third Max:- "<<tmx<<endl;
}