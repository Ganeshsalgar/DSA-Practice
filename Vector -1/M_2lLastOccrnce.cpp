#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);
   v.push_back(1);
   v.push_back(6);
//    v.push_back(1);

   for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
   }
   cout<<endl;

//    /last ocurrence of the target

    int target = 1;

    for(int i = v.size() - 1; i >= 0; i--){
        if(v[i] == target){
            cout<<"idx :- "<<i;
            break;
        }
    }

}