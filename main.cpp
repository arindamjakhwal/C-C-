#include <iostream>
using namespace std;

// int main() {
//    int a,b;
//    cout<<"Enter the value for a"<<endl;
//    cin>>a;
//    cout<<"Enter the value for b"<<endl;
//    cin>>b;

//    if(a>b){
//     cout<<"a is greater than b"<<endl;
//    }
//    else if(a<b){
//     cout<<"b is greater than a"<<endl;
//    }
//    else{
//     cout<<"a is equal to b"<<endl;
//    }
// }

// int main() {
//     int a;
//     cout<<"Enter the value for a"<<endl;
//     cin>>a;
//     if(a>0){
//         cout<<"a is positive"<<endl;
//     }
//     else if(a<0){
//         cout<<"a is negative"<<endl;
//     }
//     else{
//         cout<<"a is zero"<<endl;
//     }
// }
// int main() {
//     char ch;
//     cout<<"Enter a character"<<endl;
//     cin>>ch;
//     if(isupper(ch)){
//         cout<<"The character is uppercase"<<endl;
//     }
//     else if(islower(ch)){
//         cout<<"The character is lowercase"<<endl;
//     }
//     else{
//         cout<<"The character numerical"<<endl;
//     }
//     return 0;
// }

int main(){
    int a;
    cout<<"Enter the value for a"<<endl;
    cin>>a;
    int i = 1;
    int sum = 0;
    while(i<a){
        sum += i;
        i++;
    }
    cout<<"Sum of numbers from 1 to "<<a-1<<" is: "<<sum<<endl;
    return 0;
}