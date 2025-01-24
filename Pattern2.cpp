// *
// -*
// --*
// ---*
// ----*




#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            if(i==j){
                cout<<"*";
            }
            else(i<j){
                cout<<"-";
            }
        }
    }
}


// *----
// -*---
// --*--
// ---*-
// ----*
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++)
//         {
//             if(i==j){
//                 cout<<"*";
//             }
//             else{
//                 cout<<"-";
//             }
//         }
//         cout<<"\n";
//     }
// }




// ----*
// ---*-
// --*--
// -*---
// *----

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<n;j++)
//         {
//             if(i==j){
//                 cout<<"*";
//             }
//             else{
//                 cout<<"-";
//             }
//         }
//         cout<<"\n";
//     }
// }

// OR

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++)
//         {
//             if(i+j==n-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<"-";
//             }
//         }
//         cout<<"\n";
//     }
// }