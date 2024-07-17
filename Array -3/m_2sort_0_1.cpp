#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v){
    cout<<"Printing the Vector"<<endl;
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}


int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);

    display(v);

    // two pointer

    int i = 0;
    int j = v.size() - 1;
    while(i <= j){
        if(v[i] == 1){
            swap(v[i] , v[j]);
            j--;
        }
        else {
            i++;
        }
    }

    display(v);
}