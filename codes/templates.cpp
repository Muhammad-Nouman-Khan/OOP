// #include<iostream>
// using namespace std;

// template <typename T>
// T myMax(T x, T y)
// {
//     return (x > y) ? x : y;
// }

// int main()
// {
//     cout << myMax<int>(3, 7) << endl; // Call myMax for int
//     cout << myMax<double>(3.0, 7.0)<< endl; // call myMax for double
//     cout << myMax<char>('g', 'e')<< endl; // call myMax for char

//     return 0;

// }
//***************************************************************
// #include<iostream>
// using namespace std;

// template <typename T1,typename T2>
// T1 myMax(T1 x, T2 y)
// {
//     // return (x > y) ? x : y;
//     if(x>y){
//         return x;

//     }
//     else{
//         return y;
//     }
// }

// int main()
// {
//     cout << myMax(3, 7.5) << endl;
//     cout << myMax(3.0, 7.0)<< endl;
//     cout << myMax('g', 'e')<< endl;

//     return 0;

// }
//**************************************************************
// #include<iostream>
// using namespace std;

// template<class T>
// class Array{

//     T *ptr = NULL;
//     int size;

//     public:
//     Array(T array[],int input_size);
//     void print(void);
//     ~Array();
// };

// template<class T>
// Array<T> :: Array(T array[],int input_size){
//     ptr = new T[input_size];
//     size = input_size;

//     for(int i=0;i<size;i=i+1){
//         ptr[i] = array[i];
//     }
// }
// template <class T>
// Array<T> ::~Array(){

//     delete ptr;
//     ptr = NULL;

// }
// template <class T>
// void Array<T>:: print(){
//     for(int i=0;i<size;i=i+1){
//         cout<<ptr[i]<<" ";
//     }cout<<endl;
// }
// int main(){
//     int size = 5;
//     int arr[size] = {1,2,3,4,5};

//     Array<int> a(arr,size);
//     a.print();

//     return 0;
// }
//*************************************************

// #include<iostream>
// using namespace std;

// template <class T>
// T GetMax(T a,T b){
//     return (a>b) ? a:b;
// }

// int main(){

//     int i=5,j=6;
//     long l=10,m=5;

//     cout<<GetMax(i,j)<<endl;
//     cout<<GetMax(l,m)<<endl;

//     return 0;
// }

//*********************************************************************

// #include <iostream>
// using namespace std;

// template <class T>
// class number
// {
//     T no_1, no_2;

// public:
//     number(T n1, T n2)
//     {
//         no_1 = n1;
//         no_2 = n2;
//     }
//     T greater();
// };
// template <class T>
// T number<T>::greater()
// {   

//     if (no_1 > no_2)
//         return no_1;
//     else
//         return no_2;
// }
// int main()
// {
    
//     number<int> myobject1(1, 2);
//     cout << myobject1.greater() << endl;
//     number<double> myobject2(1.2, 2.2);
//     cout << myobject2.greater() << endl;

//     return 0;
// }

//********************************************


// #include <iostream>
// #include <typeinfo>

// int main() {
//     double num;
//     std::cout << "Enter a number: ";
//     std::cin >> num;

//     if (typeid(num) == typeid(int)) {
//         std::cout << "You entered an integer." << std::endl;
//     } else if (typeid(num) == typeid(float)) {
//         std::cout << "You entered a float." << std::endl;
//     } else if (typeid(num) == typeid(double)) {
//         std::cout << "You entered a double." << std::endl;
//     } else {
//         std::cout << "Unknown data type." << std::endl;
//     }

//     return 0;
// }
