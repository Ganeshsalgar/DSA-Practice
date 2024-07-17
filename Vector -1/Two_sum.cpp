#include <iostream>
#include <vector>
using namespace std;

int main(){
   
    int target;
    cout<<"Enter the target value :- ";
    cin >> target;

    vector<int> v;
    
    int n;
    cout<<"Enter the size of vector";
    cin >> n;


    for(int i = 0; i < n; i++){
        int x;
        cin>> x;
        v.push_back(x);
    }

    cout<<"Print the vector :- "<<endl;

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //logic 

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(v[i] + v[j] == target){
                cout<<"("<<i<<" "<<j<<")"<<endl;
            }
           
        }
    }
}