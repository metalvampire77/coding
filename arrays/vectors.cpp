#include<iostream>
#include<vector>

using namespace std;

//program to remove zeros from vector

int main(){

    vector<int> vec = {
        1,2,0,3,0,55,0
    };
    cout<<"hi"<<endl;

    auto x = vec.begin(); //vec.begin()  points to the first element address so when accessing the element we use * to get the value of that address
    while(x != vec.end()){
        if(*x == 0) vec.erase(x); //erase function directly iterates the pointer to the next element , so no need to iterate to next element manually
        else x++;
    }

    x = vec.begin();

    vec.push_back(3);

    vec.pop_back();

    while(x != vec.end()){
        cout<<*x<<" ";
        x++;
    }

    cout<<endl;

    return 0;
}