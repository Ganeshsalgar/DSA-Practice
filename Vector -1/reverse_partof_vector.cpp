#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void display(vector<int> &v){
    cout<<"Print the vector"<<endl;
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void reverse_part(vector<int> &v, int st, int ed){
    int i = st;
    int j = ed;
    while( i <= j){
        swap(v[i] , v[j]);
        i++;
        j--;
    }
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

    reverse_part(v , 1, 6);

    display(v);

    reverse(v.begin() , v.end());

    display(v);
}