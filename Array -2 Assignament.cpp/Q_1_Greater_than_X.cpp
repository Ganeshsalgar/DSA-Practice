#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,5,6,78,4,2,65,3,1,5,2,2,6,6,5,5,21,6,85};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int ele : arr){
        cout<<ele<<" ";

    }
    cout<<endl;

    //count greter than x
    int count = 0;
    int target;
    cout<<"Enter the target value :-"<<endl;
    cin >> target;
    for(int i = 0; i < n; i++){
        if(arr[i] > target){
           count++;
        }
    }
}