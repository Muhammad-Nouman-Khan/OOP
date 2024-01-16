// #include<iostream>
// using namespace std;

// class Shape{

//     public:

//     virtual void type(void){
//         cout<<"I am a Shape"<<endl;
//     }

// };
// class Rectangle : public Shape{

//     public:
//     void type(void){
//         cout<<"I am a Rectangle"<<endl;
//     }

// };

// class Triangle : public Shape{

//     public:
//     void type(void){
//         cout<<"I am a Triangle"<<endl;
//     }

// };

// void display(Shape &s){
//     s.type();
// }

// int main(){

//     // Shape s;
//     Rectangle r;
//     Triangle t;

//     // display(s);
//     // display(r);
//     // display(t);

//     Shape *s;
//     s = &r;
//     s->type();
//     s = &t;
//     s->type();
//     return 0;
// }

//**************************************************************

// #include <iostream>
// using namespace std;

// class personType
// {
//     string first_name;
//     string last_name;

// public:
//     void print(void)
//     {
//         cout << "First Name : " << first_name << endl;
//         cout << "Last Name : " << last_name << endl;
//     }
//     personType(string f, string l)
//     {
//         first_name = f;
//         last_name = l;
//     }
//     void setName(string f, string l)
//     {
//         first_name = f;
//         last_name = l;
//     }
// };

// class employeeType : public personType
// {
// public:
//     virtual void print() = 0;

//     virtual double calculatePay() const = 0;

//     void setId(long id);

//     long getId() const;

//     employeeType(string first = "", string last = "", long id = 0);

// private:
//     long personId; // stores the id
// };

// void employeeType::setId(long id)
// {
//     personId = id;
// }
// long employeeType::getId() const
// {
//     return personId;
// }
// employeeType::employeeType(string first, string last, long id)
//     : personType(first, last)
// {
//     personId = id;
// }

// class fullTimeEmployee : public employeeType
// {
// public:
//     void set(string first, string last, long id, double salary, double bonus);

//     void setSalary(double salary);

//     double getSalary();

//     void setBonus(double bonus);

//     double getBonus();

//     void print();

//     double calculatePay() const;

//     fullTimeEmployee(string first = "", string last = "", long id = 0, double salary = 0, double bonus = 0);

// private:
//     double empSalary;
//     double empBonus;
// };

// void fullTimeEmployee::set(string first, string last, long id, double salary, double bonus)
// {
//     setName(first, last);
//     setId(id);
//     empSalary = salary;
//     empBonus = bonus;
// }
// void fullTimeEmployee::setSalary(double salary)
// {
//     empSalary = salary;
// }
// double fullTimeEmployee::getSalary()
// {
//     return empSalary;
// }
// void fullTimeEmployee::setBonus(double bonus)
// {
//     empBonus = bonus;
// }
// double fullTimeEmployee::getBonus()
// {
//     return empBonus;
// }
// void fullTimeEmployee::print()
// {
//     cout << "Id: " << getId() << endl;
//     cout << "Name: ";
//     personType::print();
//     cout << endl;
//     cout << "Wages: $" << calculatePay() << endl;
// }
// double fullTimeEmployee::calculatePay() const
// {
//     return empSalary + empBonus;
// }
// // constructor
// fullTimeEmployee::fullTimeEmployee(string first, string last, long id, double salary, double bonus)
//     : employeeType(first, last, id)
// {
//     empSalary = salary;
//     empBonus = bonus;
// }
// class partTimeEmployee : public employeeType
// {
// public:

//     void set(string first, string last, long id, double rate, double hours);

//     double calculatePay() const;

//     void setPayRate(double rate);

//     double getPayRate();

//     void setHoursWorked(double hours);

//     double getHoursWorked();

//     void print();

//     partTimeEmployee(string first = "", string last = "", long id = 0, double rate = 0, double hours = 0);

// private:
//     double payRate;     // stores the pay rate
//     double hoursWorked; // stores the hours worked
// };
// void partTimeEmployee::set(string first, string last, long id, double rate, double hours)
// {
//     setName(first, last);
//     setId(id);
//     payRate = rate;
//     hoursWorked = hours;
// }
// void partTimeEmployee::setPayRate(double rate)
// {
//     payRate = rate;
// }
// double partTimeEmployee::getPayRate()
// {
//     return payRate;
// }
// void partTimeEmployee::setHoursWorked(double hours)
// {
//     hoursWorked = hours;
// }
// double partTimeEmployee::getHoursWorked()
// {
//     return hoursWorked;
// }
// void partTimeEmployee::print()
// {
//     cout << "Id: " << getId() << endl;
//     cout << "Name: ";
//     personType::print();
//     cout << endl;
//     cout << "Wages: $" << calculatePay() << endl;
// }
// double partTimeEmployee::calculatePay() const
// {
//     return (payRate * hoursWorked);
// }
// // constructor
// partTimeEmployee::partTimeEmployee(string first, string last, long id, double rate, double hours)
//     : employeeType(first, last, id)
// {
//     payRate = rate;
//     hoursWorked = hours;
// }

// int main()
// {
//     fullTimeEmployee newEmp("John", "Smith", 75, 56000, 5700);
//     partTimeEmployee tempEmp("Andy", "Turner", 275, 15.50, 57);
//     newEmp.print();
//     cout << endl;
//     tempEmp.print();
//     employeeType *e;
//     e = &newEmp;
//     e->print();


//     return 0;
// }


//*********************************************************************************

// #include<iostream>
// using namespace std;

// class A{

//     public:

//     virtual void func(void){
//         cout<<"A Function "<<endl;
//     }

// };
// class B : public A{

//     public:

//     void func(void){
//         cout<<"B Function "<<endl;
//     }

// };
// class C : public B{

//     public:

//     void func(void){
//         cout<<"C Function "<<endl;
//     }

// };
// class D : public C{

//     public:
//     void func(int a){
//         cout<<"D parameter Function"<<endl;
//     }
// };

// int main(){
//     B bobj;
//     A *aptr = &bobj;
//     aptr->func();

//     C cobj;
//     aptr = &cobj;
//     aptr->func();
//     B *bptr = &cobj;
//     bptr ->func();

//     D dobj;
//     aptr = &dobj;
//     aptr->func();   //will call the parent class func as the parameters dont match..prints C function.
//     //If D is inheriting A then it will print A function.!!!
    
//     return 0;
// }

//*****************************************************************

#include<iostream>
using namespace std;

class Shape{

    public:
    virtual void sayHi(void){
        cout<<"Hi from the Shape "<<endl;
    }
   
};


class Triangle : public Shape{

    public:
    void sayHi(void){
        cout<<"Hi from the Triangle"<<endl;
    }
};
class Rectangle : public Shape{

    public:

     void sayHi(void){
        cout<<"Hi from the Rectangle"<<endl;
    }

};

int main(){

    cout<<"1)Shape"<<endl;
    cout<<"2)Triangle"<<endl;
    cout<<"3)Rectangle"<<endl;
    int choice = 0;
    cin>>choice;

    Shape *ptr;

    switch(choice){
        case 1: ptr = new Shape; break;
        case 2: ptr = new Triangle; break;
        case 3: ptr = new Rectangle; break;
    }
    ptr->sayHi();
    delete ptr;
    ptr = NULL;

    return 0;
}