#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {1,4,5,6,7,5,5,5,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int ele :arr){
        cout<<ele<<" ";

    }
    cout<<endl;

    //max Element
    int max = INT_MIN;
    for(int i = 0;  i< n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout<<"Max Element is "<<max<<endl;
}