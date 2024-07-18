#include <iostream>
using namespace std;

void display(int arr[] , int m){
    cout<<"Printing a Array :- "<<endl;

    for(int i = 0; i < m; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr1[] = {1,2,3,4,5};
    int m = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[]  = {6,7,8,9,10};
    int n = sizeof(arr2)/ sizeof(arr2[0]);

    int p = m+n;
    int arr[p];


    display(arr1, m);
    display(arr2, n);

    int i = 0;
    int j = 0;
    int k = 0;

    while(i <= m-1 && j <= n-1){
        if(arr1[i] < arr2[j]){
            arr[k] = arr1[i];
            i++;
        }
        else{
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    if(i == m){
        while(j <= n-1){
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }

    if(j == n){
        while(i <= m-1){
            arr[k] = arr1[i];
            i++;
            k++;
        }
    }

    display(arr , p);
    
}