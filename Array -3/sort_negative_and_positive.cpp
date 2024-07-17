#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v){
    cout<<"Printing the vector Element :- "<<endl;

    for(int i= 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(5);
    v.push_back(-6);
    v.push_back(7);
    v.push_back(-8);
    v.push_back(9);
    v.push_back(-10);


    display(v);

    int i = 0; 
    int j = v.size() - 1;
    while(i <= j){
        if(v[i] < 0){
            swap(v[i] , v[j]);
            j--;

        }
        else{
            i++;
        }
    }

     display(v);

}