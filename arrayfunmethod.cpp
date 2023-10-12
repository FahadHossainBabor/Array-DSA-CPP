#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        i[arr] = i;
    }

    for(int &a: arr){
        cout<<a<<" ";
    }

    return 0;
    
}