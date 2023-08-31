#include<iostream>
#include<vector>

using namespace std;

//program to sort

int main(){

    vector<int> vec = {
        0,2,1,2,0
    };

    int i = 0,j = 0;

    while(i != vec.size() - 1){
        if(vec[j] < vec[i]){
            swap(vec[i],vec[j]);
            j = i;
        }
        else if(j ==  vec.size() - 1){
            i++;
            j = i;
        }

        else{
            j++;
        }
    }

    for(auto x : vec) cout<<x<<" ";

    cout<<endl;

    return 0;
}