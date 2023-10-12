#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of the array:";
    for(int &a: arr){
        cout<<a<<" ";
    }

    return 0;
    
}