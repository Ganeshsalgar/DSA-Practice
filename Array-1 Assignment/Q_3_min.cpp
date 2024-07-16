// Find the minimum value out of all elements in the array.
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {5,23,4,1,6,1,6,2,4,2,6,55,4,5,};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int ele :arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    //min element
    int min = INT_MAX;
    for(int i  =0; i < n ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout<<"Min element :_ "<<min<<endl;
}