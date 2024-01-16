// #include<iostream>
// using namespace std;
// int main(){

//     // int a=10;
//     // int *aptr=&a;    //address of a is stored in a pointer
    
    
//     // cout<<a<<endl;  //value of a i.e 10
//     // cout<<&a<<endl; //address of a
//     // cout<<aptr<<endl; //address of a
//     // cout<<*aptr<<endl; //value of a i.e 10

//     // *aptr=50;    //value of a is changed without using a
//     // cout<<a<<endl;  //50
//     // cout<<*aptr<<endl;  //50
//     // cout<<aptr<<endl;

//     // aptr++;
//     // cout<<aptr<<endl; //address of a will be incremented....(+4 because int takes 4 bytes.. if char then 1 byte)
//     // cout<<*aptr<<endl; //here it will give a junk value

//     // //ARRAYS:
 
//     // int arr[]={10,20,30};
//     // cout<<*arr<<endl;   // 0th element of array i.e 10

//     // int *ptr=arr;//cant store the address of array because arr already have the address and can print 1 element.
//     // cout<<*ptr<<endl;
//     // cout<<*(ptr+1)<<endl;
//     // cout<<*(ptr+2)<<endl;
    
//     // //BY LOOPS:
//     // for(int i=0;i<3;i++){
//     //     cout<<*ptr<<" "; //first of all first value of arr is printed

//     //     ptr++; //then +4 and it will go to the next index and print second element and so on.  
//     // }cout<<endl;
    
//     // for(int i=0;i<3;i++){
//     //     cout<<*(arr+i)<<" ";   //we can also use *arr to print the values of arr.
//     //     // arr++;    we cant do this cuz its illegal so we'll use +i as shown.

//     // }

//     // // POINTER TO POINTER

//     // int a=10;
//     // int *p;
//     // p = &a;

//     // cout<<a<<endl;
//     // cout<<&a<<endl;
//     // cout<<p<<endl; 
//     // cout<<*p<<endl;   //print 10 as shown before
    
//     // int **q=&p;       //new pointer with value of first pointer.
    
//     // cout<<*q<<endl;   //DEREFERNCE ONE TIME AND IT WILL SHOW THE ADDRESS OF P
//     // cout<<**q<<endl;  //DEFERENCE SECOND TIME AND WILL PRINT THE VALUE OF A

//     // //EQUATING TWO POINTERS:

//     // int a=10;
//     // int *p1;
//     // p1=&a;
//     // int *p2;
//     // p2=p1;     //NEW POINTER BECOMES EQUAL TO THAT
//     // cout<<*p1<<endl;
//     // cout<<*p2<<endl;
    



//     return 0;
// }


// // PASSING POINTERS TO FUNCTION(CALLING BY REFERENCE)

// #include<iostream>
// using namespace std;

// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int a=2;
//     int b=4;

//     int *aptr=&a;
//     int *bptr=&b;

//     swap(aptr,bptr);
//     cout<<a<<" "<<b<<endl;

//     return 0;

// }

// // SECOND METHOD POINTERS TO FUNCTION:(BY REFERENCE)
// #include<iostream>
// using namespace std;

// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int a=2;
//     int b=4;


//     swap(&a,&b);
//     cout<<a<<" "<<b<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){

//     //EXPLICIT CASTING......
//     int *p1;
//     p1 = new int;
//     *p1=65;

//     char *p2;

//     p2 = (char*)p1;     
//     cout<<*p1<<endl;
//     cout<<*p2<<endl;   //Ascii value 65 so prints A

//     int *pi=new int;
//     *pi=131072;

//     short *pd;
//     pd=(short*)pi;
//     cout<<*pd<<endl;

//     int a=5;
//     int *aptr=&a;
//     cout<<a<<endl;
//     (*aptr)++;  // value of a is now 6....just use brackets as * has lower precedence .or use previous method.     
//     cout<<a<<endl;
    

//     int arr[]={14,23,43};
//     cout<<*(arr+1)<<endl;   //PRINTS 23
//     cout<<*arr+1<<endl;   //BRACKETS!!! it will increase the first value of array by 1
//     cout<<*(arr+2)+30<<endl; //73....third value increased by 30.

//     int *ptr=arr;    //We can also use pointers as an array name. Not address of array.
//     //REST IS SAME AS ABOVE..............
//     cout<<*(ptr+1)<<endl;  
//     cout<<*ptr+1<<endl;        
//     cout<<*(ptr+2)+30<<endl;
    

//     int arrr[3]={10,20,30};
//     int *ptrr;
//     ptrr=arrr;
//     cout<<"ELEMENTS OF ARRAY"<<endl;
//     for(int count=0;count<3;count++){
//         cout<<*ptrr<<" ";
//         ptrr++;

//     }cout<<endl;
    
//     cout<<"IN REVERSE ORDER: "<<endl;
//      for(int count=0;count<3;count++){
//         ptrr--;
//         cout<<*ptrr<<" ";  

//     }cout<<endl;

    


//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){             //PRINT VALUES IN INCREASING ORDER
    
//     int arr[5] = {5,6,1,2,9};
//     int *ptr=arr;
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//         if(*(arr+i) > *(arr+j)){
//             int temp = *(arr+i);
//             *(arr+i) = *(arr+j);
//             *(arr+j) = temp;
//         }
//         }   
//     }
//     for(int i=0;i<5;i++){
//         cout<<*(arr+i)<<" ";
//     }
    
//     return 0;
// }

//********************************************************
// #include<iostream>
// using namespace std;

// const double PI = 3.14;

// int main(){
//     double *radiusptr;
//     radiusptr = new double;
//     cout<<"Enter the radius"<<endl;
//     cin>>*radiusptr;
//     cout<<"Radius = "<<*radiusptr<<" , Area = "<<PI * (*radiusptr)*(*radiusptr)<<endl;

//     cout<<"The address of value stored in radius pointer (radiusptr)= "<<radiusptr<<endl;
//     cout<<"The address of radius pointer(&radiusptr) = "<<&radiusptr<<endl;

//     delete radiusptr;

//     cout<<"After using delete operator the value stored in location to which radiusptr is pointing = ";
//     cout<<*radiusptr<<endl;  
//     cout<<"radiusptr = "<<radiusptr<<endl; 
//     cout<<"&radiusptr = "<<&radiusptr<<endl;   //same address as before.

//     radiusptr = NULL;
//     cout<<"After using NULL"<<endl;
//     cout<<"radiusptr = "<<radiusptr<<endl;    //prints zero.
//     cout<<"&radiusptr = "<<&radiusptr<<endl;    //same address as before.


//     //********************************************************************
//     int a = 10;
//     int *aptr = &a;

//     cout<<"a: "<<a<<endl;
//     cout<<"&a: "<<&a<<endl;
//     cout<<"*aptr: "<<*aptr<<endl;
//     cout<<"&aptr: "<<&aptr<<endl;     //address of aptr
//     cout<<"aptr: "<<aptr<<endl;      //address of a

//     return 0;
// }

//*******************************************************************************

// #include<iostream>
// using namespace std;

// int main(){

//     int list[3] = {18,20,56};

//     int *ptr = list;

//     for(int i=0;i<3;i++){
//         //can be access like this:
//         // cout<<ptr[i]<<" ";
//         //OR:
//         // cout<<*ptr<<" ";
//         // ptr++;
//         //OR:
//         //cout<<*(ptr+i)<<" ";
//         //OR:
//         // cout<<*(list+i)<<" ";
//     }

//     int *pointer = ptr+2;   //accessed the 3rd value of array
//     *pointer = 60;          //value changed
//     cout<<*pointer<<endl;   //60
//     cout<<*(ptr+2)<<endl;   //60
//     cout<<list[2]<<endl;    //60

//     return 0;
// }

//********************************************************************
// //DYNAMICALLY  (ARRAYS):

// #include<iostream>
// using namespace std;

// int main(){
//     const int size = 5;
//     int *ptr = new int[size];

//     for(int i=0;i<size;i++){
//         *(ptr+i) = i;
//         //or
//         //ptr[i] = i;
//     }
//     for(int i=0;i<size;i++){
//         cout<<ptr[i]<<" ";
//     }
//     delete [] ptr;
//     ptr = NULL;

//     return 0;
// }

//**************************************************************************************
//// CREATING 2D ARRAYS DYNAMICALLY BY A SINGLE Pointer:

// #include<iostream>
// using namespace std;
// int main(){
//     int row_size = 3;
//     int col_size = 3;

//     int *matrix = new int[row_size * col_size];
//     //int i =0;
//     for(int row=0;row<row_size;row++){
//         for(int col=0;col<col_size;col++){
            
//             *(matrix + row*col_size+col) = rand() % 100;
//             // *(matrix + i) = rand() % 100;        //IN SIMPLE
//             // i++;
            
//         }
//     }
    
//     for(int row=0;row<row_size;row++){
//         for(int col=0;col<col_size;col++){
//             cout<<*(matrix + (row*col_size)+row)<<" ";
//         }cout<<endl;
//     }
//     delete [] matrix; 
//     matrix = NULL;

    
//     return 0;
// }

//***************************************************************
// #include<iostream>
// using namespace std;
// int main(){
//     int row_size = 3;
//     int col_size = 4;

//     int *matrix[row_size];
    
//     for(int row=0;row<row_size;row++){
//         matrix[row] = new int[col_size];
//     }
    
//     for(int row=0;row<row_size;row++){
//         for(int col=0;col<col_size;col++){
//             cin>>matrix[row][col];  
//         }
//     }
//     for(int row=0;row<row_size;row++){
//         for(int col=0;col<col_size;col++){
//             cout<<matrix[row][col]<<" ";  
//         }cout<<endl;
//     }
//     for(int row=0;row<row_size;row++){
//         delete [] matrix[row];
//     }
//     delete [] matrix;
//     matrix = NULL;
//     return 0;
// }
//*****************************************************************
//2D arrays Dynamically using double pointer.
// #include<iostream>
// using namespace std;

// int main(){
//     int row_size = 3;
//     int col_size = 3;

//     int **matrix;
//     matrix = new int*[row_size];

//     for(int row=0;row<row_size;row++){
//         matrix[row] = new int[col_size];
//     }
//     for(int row=0;row<row_size;row++){
//         cout<<"Enter the "<<col_size<<" elements for row number "<<row+1<<":"<<endl;
//         for(int col=0;col<col_size;col++){
//             cin>>matrix[row][col];
//         }
//     }
//     for(int row=0;row<row_size;row++){
//         for(int col=0;col<col_size;col++){
//             cout<<matrix[row][col]<<" ";
//         }cout<<endl;
//     }
//     for(int row=0;row<row_size;row++){
//         delete [] matrix[row];
//     }
//     delete [] matrix;
//      matrix = NULL;

//     return 0;
// }
//************************************************************
// MATRIX OF VARYING ROW SIZE.
// #include<iostream>
// using namespace std;

// int main(){
//     int row_size = 3;
//     int col_size = 3;

//     int **matrix;
//     matrix = new int*[row_size];

//     for(int row=0;row<row_size;row++){
//         matrix[row] = new int[col_size+row];
//     }
//     for(int row=0;row<row_size;row++){
//         cout<<"Enter the "<<col_size+row<<" elements for row number "<<row+1<<":"<<endl;
//         for(int col=0;col<col_size+row;col++){
//             cin>>matrix[row][col];
//         }
//     }                          
//     for(int row=0;row<row_size;row++){
//         for(int col=0;col<col_size+row;col++){
//             cout<<matrix[row][col]<<" ";
//         }cout<<endl;
//     }
//     for(int row=0;row<row_size;row++){
//         delete [] matrix[row];
//     }
//     delete [] matrix;
//      matrix = NULL;

//     return 0;
// }

//************************************************************************************
//3D ARRAY USING DOUBLE POINTER:

// #include<iostream>
// using namespace std;
// int main(){
//     int X = 2;
//     int Y = 3;
//     int Z = 4;
//     int ***A = new int**[X];

//     for(int i=0;i<X;i++){
//         A[i] = new int*[Y];
//         for(int j=0;j<Y;j++){
//             A[i][j] = new int[Z];
//         }
//     }

//     for(int i=0;i<X;i++){
//         for(int j=0;j<Y;j++){
//             for(int k=0;k<Z;k++){
//                 A[i][j][k] = rand() %100;
//             }
//         }
//     }
//     for(int i=0;i<X;i++){
//         for(int j=0;j<Y;j++){
//             for(int k=0;k<Z;k++){
//                 cout<<A[i][j][k]<<" ";
//             }cout<<endl;
//         }cout<<endl;
//     }
//     for(int i=0;i<X;i++){
//         for(int j=0;j<Y;j++)
//             delete A[i][j]; 
//         delete []  A[i];
//     }
//     delete [] A;
//     A = NULL;



//     return 0;
// }
//***************************************************************************

//CHAR ARRAYS AND STRINGS
// #include<iostream>
// using namespace std;

// int main(){
//     char arr[] = "****";                //     ***                                          
//     for(int i=1;i<3;i++){               //     **                  
//         cout<<(arr+i)<<endl;            //     *               
//     }                                   //     **               
//     for(int j=3;j>=1;j--){              //     ***      
//         cout<<(arr+j)<<endl; 
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char arr[] = "Nouman";
//     char *ptr = arr;
//     cout<<arr<<endl;
//     cout<<ptr<<endl;      //prints Nouman
//     ptr++;
//     cout<<ptr<<endl;     //prints ouman

//     return 0;
// }
//********************************************************

// #include<iostream>
// using namespace std;

// void doublearr(int *arr){
//     for(int i=0;i<5;i++){
//         *arr = (*arr)*2;
//         arr++;
//     }
// }

// int main(){
//     int array[] = {2,3,4,5,6};

//     doublearr(array);
//     for(int i=0;i<5;i++){
//         cout<<array[i]<<" ";
//     }

//     return 0;
// }
//****************************************************************

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int *ptr = &a;
//     cout<<"&a:(Address of a) "<<&a<<endl;
//     cout<<"ptr(prints address stored in poitner) = "<<ptr<<endl;
//     cout<<"&ptr(Address of pointer) = "<<&ptr<<endl;

//     int **p = &ptr;
//     cout<<"p(Address of ptr) = "<<p<<endl;
//     cout<<"*p(address of a) = "<<*p<<endl;
//     cout<<"**p(value of a) = "<<**p<<endl;
//     cout<<"&p(Address of p) = "<<&p<<endl;

//     return 0;
// }

//********************************************************************************
// REFERENCE TO POINTER FUNCTION PARameteR
// #include<iostream>
// using namespace std;

// int gl = 95;

// void func(int *&num){
//     num = &gl;   
// }

// int main(){
//     int a = 10;
//     int *ptr = &a;
//     cout<<"Value of a before function call = "<<*ptr<<endl;
//     func(ptr);
//     cout<<"Value of a after function call = "<<*ptr<<endl;

//     return 0;


// }
//********************************************************
// #include<iostream>
// using namespace std;
// int main(){
// char arr[20];

// int i;

// for ( i = 0; i < 10; i++ ){

//     *(arr + i) = 65 + i; // ‘65’ is ASCII code of ‘A’

//     *(arr + i) = '\0';


//     cout << arr;
// }
// return 0;
// }
//*************************
// #include<iostream>
// using namespace std;
// int main(){
//     int int1 = 26;
//     int int2 = 45;
//     int *int1Ptr = &int1;
//     int *int2Ptr = &int2;
//     *int1Ptr = 89;        //int 1 = 89
//     *int2Ptr = 62;      //int2 = 62
//     int1Ptr = int2Ptr;
//     cout<<*int1Ptr<<endl;
//     cout<<*int2Ptr<<endl;
//     *int1Ptr = 80;
//     int1 = 57;
//     cout << int1 << " " << int2 << endl;
//     cout << *int1Ptr << " " << *int2Ptr << endl;    
//     return 0;
    
// }