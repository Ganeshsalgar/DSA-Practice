// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 5, 6, 4, 1, 36, 56, 4, 8, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    //sum of even indices and sum odd indices

    int even = 0;
    int odd = 0;

    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            even += arr[i];
        }
        else{
            odd += arr[i];
        }
    }
    cout<<"even :- "<<even<<endl;
    cout<<"odd :- "<<odd<<endl;
    cout<<"Differnce Between :- "<<even - odd<<endl;

    return 0;
}
