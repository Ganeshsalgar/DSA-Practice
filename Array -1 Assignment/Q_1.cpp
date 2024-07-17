// Calculate the product of all the elements in the given array.

#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,7,6,7,1,6,69,1,6,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    //Product Of all array
    int Product = 1;
    for(int i = 0; i < n ;i++){
        Product = Product * arr[i];
    }

    cout<<"Product of the Array :- "<<Product;
}