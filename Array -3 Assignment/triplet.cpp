// Count the number of triplets whose sum is equal to the given value x.

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,1,4,5,6,7,10,8,9,1,3,5,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);


    for(int ele : arr){
        cout<<ele<<" ";

    }
    cout<<endl;

    // count the triplets

    int target;
    cout<<"Enter the Target :- "<<endl;
    cin>>target;

    bool flag = false;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(arr[i] + arr[j] + arr[k]  == target){
                    cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<endl;
                    flag = true;
                    
                }
            }
            
        }
        
        
    }

    if(flag == true) cout<<"Target is found "<<endl;
    else cout<<" Target is Not found"<<endl;
}