// #include<iostream>
// using namespace std;

// int Sum(int n){   //SUM OF NUMBERS TILL N.

//     if(n==0){
//         return 0;
//     }

//     int prevSum = Sum(n - 1);
//     return n + prevSum;

// }
// int main(){

//     int n=0;
//     cin>>n;

//     cout<<Sum(n)<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int power(int n,int p){    //n raise to power p

//     if(p==0){
//         return 1;
//     }
//     int prevPower = power(n,p-1);
//     return n*prevPower;


// }
// int main(){
//     int n,p;
//     cin>>n>>p;

//     cout<<power(n,p)<<endl;



// }


// #include<iostream>
// using namespace std;
// int factorial(int n){

//     if(n==0){
//         return 1;
//     }

//     int prevFact = factorial(n - 1);
//     return n*prevFact;
//     //OR
//     //return n*factorial(n-1);  without using prevFact.

// }

// int main(){
//     int n=0;
//     cin>>n;
//     cout<<factorial(n)<<endl;
//     return 0;
// }