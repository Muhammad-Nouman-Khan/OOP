
// #include<iostream>
// using namespace std;

// class Class_B;

// class Class_A{

//     int value = 1;

//     public:

//     friend int addvalues(Class_A & a,Class_B & b);

// };

// class Class_B{

//     int value = 2;

//     public:

//     friend int addvalues(Class_A & a,Class_B & b);

// };
// int addvalues(Class_A & a,Class_B & b){

//     return a.value + b.value;

// }
// int main(){

//     Class_A a;

//     Class_B b;
    
//     cout<<addvalues(a,b);

//     return 0;
// }


//****************************************************



#include<iostream>
using namespace std;

class complex{

private:

    float real;
    float imag;

public: 

    complex(float,float);
    friend complex Add(complex &,complex &);
    void display(void);
    float get_real(void){return real;}
    float get_imag(void){return imag;}

};

complex :: complex(float input_real,float input_imag){
    
    real = input_real;
    imag = input_imag;

}
complex Add(complex &c1,complex &c2){
    
    complex c(c1.get_real() + c2.get_real(),c1.get_imag() + c2.get_imag());
    //FOR FRIEND FUNCTION:
    // c.real = c1.real + c2.real;
    // c.imag = c1.imag + c2.imag;

    return c;

}

void complex :: display(void){
    cout<<real<<" + "<<imag<<"i"<<endl;
}

int main(){

    complex c1(5,10);
    complex c2(5,7);

    complex c3(0,0);

    c3 = Add(c1,c2);
    c3.display();

    
    return 0;
}


//*******************************************************************


// #include<iostream>
// using namespace std;

// class Complex{

//     float real;
//     float imag;

//     friend class Calculator;
    
//     public:
//     Complex(float input_real,float input_imag);
//     void display(void);




// };

// Complex :: Complex(float input_real,float input_imag){
//     real = input_real;
//     imag = input_imag;
// }

// void Complex :: display(void){
//     cout<<real<<" + "<<imag<<" i "<<endl;
// }


// class Calculator{
    
//     public:

//     float sumReal(Complex &c1,Complex &c2){
//         return c1.real + c2.real;
//     }
//     float sumImag(Complex &c1,Complex &c2){
//         return c1.imag + c2.imag;
//     }
//     void display(float real_sum,float imag_sum){
//         cout<<real_sum<<" + "<<imag_sum<<" i"<<endl;
//     }
    
// };

// int main(){

//     Complex c1(2,3);
//     Complex c2(5,7);
//     c1.display();
//     c2.display();

//     Calculator cal;
//     float sum_real = cal.sumReal(c1,c2);    
//     float sum_imag = cal.sumImag(c1,c2);
//     cal.display(sum_real,sum_imag);

//     return 0;
// }

//*******************************************************************