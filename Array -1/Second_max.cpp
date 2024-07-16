#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {4,5,9,8,5,2,4,6,7,5,4,6,1,4,2,6,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int ele :arr){
        cout<<ele<<" ";

    }
    cout<<endl;

    //second maxx element

    int mx = INT_MIN;
    int smx = INT_MIN;

    for(int i =0; i<n; i++){
        if(arr[i] > mx){
            mx = arr[i];
        }
    }

    cout<<"This is the max Element :- "<<mx<<endl;

    for(int i = 0; i < n; i++){
        if(arr[i] > smx && arr[i] != mx){
            smx = arr[i];
        }
    }

    cout<<"This is the Second Max :- "<<smx<<endl;
}