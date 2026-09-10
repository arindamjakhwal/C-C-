#include <iostream>
using namespace std;




int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    int i = 2;
    while(i<n){
        if(n%i==0){
            cout<<"Not a prime number"<<endl;
            return 0;
        }
        i++;
    }
    cout<<"Prime number"<<endl;
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    int i = 2;
    while(i<n){
        if(n%i==0){
            cout<<"Not a "<<endl;
            return 0;
        }
        i++;
    }
    cout<<"Prime number"<<endl;
}