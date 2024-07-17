#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cout<<"Enter the size of vector :- ";
    cin >> n;

    for(int i = 0; i < n;  i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i  = 0;  i < n; i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;

    vector<int> c(n);

    for(int i = 0; i < n; i++){
        c[n-i-1] = v[i];
    }

    for(int  i=0; i < n; i++){
        cout<<c[i]<<" ";
    }
}