#include <iostream>
#include <vector>
using namespace std;
void display (vector<int>& v){
    cout<<"printing the vector"<<endl;
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> v;

    int n ;
    cout<<"Enter the size of the vector :-";
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    display(v); 

    //logic

    int i = 0;
    int j = n-1;
    while(i <= j){
         swap(v[i] , v[j]);
         i++;
         j--;
    }

    display(v);
}