#include<iostream>
using namespace std;
int main(){

    int a = 10;      //Memory Allocated in Stack.

    int *p = new int;   
    *p = 10;        //Memory Allocated in heap.
     
    //p is stored in stack but it is having the address of where the memory is allocated in heap.
    
    delete p;      //Deallocate Memory      
    //memory is deleted but pointer is still present in stack..The pointer is empty.(Dangling Pointer)

    //We can reuse that pointer to store another variable else we have to remove this pointer from stack.

    p = new int[4];   //Now memory is again allocated..we dont need to redefine the pointer.

    delete [] p;    //Deallocating memory.

    p = NULL;     //Removed.


    return 0;
}