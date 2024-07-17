#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v){
    cout<<"printing the vector :- "<<endl;
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;
}

vector<int> reverse_part(vector<int> &v , int i , int j){
    while(i <= j){
        swap(v[i] , v[j]);
        i++;
        j--;
    }
    return v;
}

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);

    display(v);
    int n = v.size();
    int k;
    cout<<"Enter the value reverse part :-";
    cin>> k;
    

    reverse_part(v, 0, n-k-1);
    reverse_part(v,n-k , n-1);
    reverse_part(v,0 , n-1);

    display(v);
}