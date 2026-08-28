#include <iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n"<<endl;

//     cin>>n;

//     cout<<"printing count from1ton"<<endl;

//     for(int i=1;i<=n;i++){
//         cout<<i<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number" <<endl;
//     cin>>n;
//     for(int a = 0; a<n; a++){
//         for(int b = 0; b<=a; b++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// fibonachi series 

int main(){
    int n =10;
    int a = 0;
    int b = 1;

    for(int i = 1; i<=n;i++){
        cout<<a<<endl;
        int nextnumber = a+b;
        a = b;
        b = nextnumber;
    }
}

// int main(){
//     int n;
//     cout<<"Enter a number"<<endl;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }