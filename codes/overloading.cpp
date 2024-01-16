// #include<iostream>
// using namespace std;

// class complex{

// private:

//     float real;
//     float imag;

// public: 

//     complex(float,float);
//     complex operator+(complex);
//     complex operator+(int);
//     bool operator==(complex);
//     bool operator>(complex);
//     void display(void);
    

// };

// bool complex :: operator>(complex c){
//     if(real > c.real && imag > c.imag){
//         return true;
//     }
//     else{
//         return false;
//     }
// }


// complex :: complex(float input_real,float input_imag){
    
//     real = input_real;
//     imag = input_imag;

// }

// complex complex :: operator+(complex c2){
//     complex c(0,0);
//     c.real = real + c2.real;
//     c.imag = imag + c2.imag;
//     return c;
// }

// complex complex :: operator+(int c2){
//     complex c(0,0);
//     c.real = real + c2;
//     c.imag = imag;
//     return c;
// }

// bool complex :: operator==(complex c2){
//     if(real == c2.real && imag == c2.imag){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// void complex :: display(void){
//     cout<<real<<" + "<<imag<<"i"<<endl;
// }

// int main(){

//     complex c1(5,10);
//     complex c2(5,7);

//     complex c3(0,0);
//     c3 = c1 + c2;
//     c3.display();

//     c3 = c1 + 20;
//     c3.display();

//     cout<<(c1==c2)<<endl;

//     complex c5(0,0);
//     complex c6(10,20);

//     c5=c6;
//     c5.display();
//     complex c7(100,100);
//     if(c7>c3){
//         cout<<"Greater"<<endl;
//     }
//     else{
//         cout<<"Not Greater"<<endl;
//     }
    
//     return 0;   
// }


// ///*************************************************

// #include<iostream>
// using namespace std;


// class complex{

//     double real;
//     double imag;

//     public:

//     complex(void);
//     void setpara(double,double);
//     void show(void);
//     complex operator+(complex);
//     complex operator-(complex);
//     complex operator*(complex);
//     complex operator/(complex);
//     bool operator==(complex);
//     void operator=(complex);

// };



// complex :: complex(void){
//     real = 0;
//     imag = 0;
// }

// void complex :: setpara(double input_real,double input_imag){
//     real = input_real;
//     imag = input_imag;
// }

// void complex :: show(void){
//     cout<<real<<" + "<<imag<<"i"<<endl;
// }

// complex complex :: operator+(complex c2){
//     complex c;
//     c.real = real + c2.real;
//     c.imag = imag + c2.imag;
//     return c;
// }
// complex complex :: operator-(complex c2){
//     complex c;
//     c.real = real - c2.real;
//     c.imag = imag - c2.imag;
//     return c;
// }

// complex complex :: operator*(complex c2){
//     complex c;
//     c.real = real * c2.real;
//     c.imag = imag * c2.imag;
//     return c;
// }

// complex complex :: operator/(complex c2){
//     complex c;
//     c.real = real / c2.real;
//     c.imag = imag / c2.imag;
//     return c;
// }
// bool complex :: operator==(complex c2){
    
//     if(real == c2.real && imag == c2.imag){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// void complex :: operator=(complex c2){
//     real = c2.real;
//     imag = c2.imag;
// }

// int main(){

//     complex n1,n2,n3;
//     n1.setpara(2,3);
//     n2.setpara(1,4);
//     cout<<"Equating n1 = n2 "<<endl;
//     n3=n1;
//     n3.show();
//     cout<<"Adding (n1+n2).show()"<<endl;
//     (n1+n2).show();
//     cout<<"Multiplying "<<endl;
//     n3=n1*n2;
//     n3.show();
//     cout<<"Subtracting"<<endl;
//     n3=n1-n2;
//     n3.show();
//     cout<<"Dividing"<<endl;
//     n3=n1/n2;
//     n3.show();
//     cout<<" == "<<endl;
//     if(n1==n2)
//     cout<<"Both no have same real and imag part "<<endl;
//     else
//     cout<<"Unequal !!!"<<endl;

//     return 0;
// }


//***************************************************

#include<iostream>
using namespace std;

class Rectangle{

    float length;
    float width;

    public:
    Rectangle(void);
    Rectangle(float,float);
    Rectangle operator+(Rectangle);
    Rectangle operator*(Rectangle);
    bool operator>(Rectangle);
    friend ostream& operator<<(ostream&,Rectangle);
    friend istream& operator>>(istream&,Rectangle&);
    //Rectangle operator++();
    friend Rectangle operator++(Rectangle&);
    void operator-(Rectangle);
    Rectangle operator++(int);
};
Rectangle Rectangle :: operator++(int u){
    Rectangle temp = *this; 
 
    length++;
    width++;
    return temp;
}
// Rectangle Rectangle :: operator++(){
//     length ++;
//     width ++;
    
//     return *this;
// }
Rectangle operator++(Rectangle &r){
    (r.length)++;
    (r.width)++;
    return r;
}
bool Rectangle :: operator>(Rectangle r){
    if(length>r.length && width>r.width){
        return true;
    }
    else{
        return false;
    }
}
Rectangle :: Rectangle(void){
    length = 0;
    width = 0;
}
Rectangle :: Rectangle(float input_len,float input_width){
    length = input_len;
    width = input_width;
}

Rectangle Rectangle :: operator+(Rectangle r1){
    Rectangle r;
    r.length = length + r1.length;
    r.width = width + r1.width;
    return r;
}

Rectangle Rectangle :: operator*(Rectangle r1){
    Rectangle r;
    r.length = length * r1.length;
    r.width = width * r1.width;
    return r;
}
istream& operator>>(istream & isobject,Rectangle &r){
    isobject >> r.length >> r.width;
    return isobject;
}

ostream& operator<<(ostream & osobject,Rectangle r){
    osobject << "Length = "<<r.length <<", width = " << r.width;
    return osobject;
}

void Rectangle :: operator-(Rectangle r){
    cout<<length-r.length<<"\t"<<width - r.width<<endl;
}
int main(){

    Rectangle myRectangle;
    cout<<"Enter length and width of rectangle"<<endl;
    cin>>myRectangle;
    
    Rectangle yourRectangle(10,20);
    
    cout<<"My Rectangle : "<<myRectangle<<endl;
    cout<<"Your Rectangle : "<<yourRectangle<<endl;
    Rectangle r3(100,100);
    if(r3>myRectangle+yourRectangle){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    Rectangle r4(0,0);
    Rectangle r5 = ++r4;
    cout<<"r4 = "<<r4<<endl;
    cout<<"r5 = "<<r5<<endl;

    Rectangle r6(1,1);

    Rectangle r7  = r6.operator++(0);
    cout<<r7<<endl;
    cout<<r6<<endl;
    return 0;
}