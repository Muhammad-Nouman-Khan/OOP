
// #include<iostream>

// using namespace std;

// class Person{

//     public:

//     string name = "???";

//     int age = 0;

//     Person();

//     Person(string,int);

//     ~Person();

//     void displayInfo();

// };

// Person :: Person(){
//     cout<<"Default Constructor called for Person "<<endl;
// }

// Person :: Person(string input_name,int input_age){

//     cout<<"Parameterized Constructor Called for Person"<<endl;

//     name = input_name;
//     age = input_age;
// }

// Person :: ~Person(){
//     cout<<"Destructor Called for Person"<<endl;
// }

// void Person :: displayInfo(){
//     cout<<"Name : "<<name<<endl;
//     cout<<"Age : "<<age<<endl;
// }

// class Student : public Person{

//     public:

//     string roll_no;

//     Student(string input_roll);

//     Student(string input_name,int input_age,string input_roll);

//     ~Student();

//     void displayInfo();

// };

// Student :: Student(string input_roll){
//     roll_no = input_roll;
// }

// Student :: Student(string input_name,int input_age,string input_roll)
// :Person(input_name,input_age){
//     roll_no = input_roll;

// }

// void Student :: displayInfo(){
//     Person::displayInfo();
//     cout<<"Roll number : "<<roll_no<<endl;
// }

// Student :: ~Student(){
//     cout<<"Destructor Called for Student"<<endl;
// }


// int main(){

//     Person p;

//     p.displayInfo();

//     Person p1("Omer",21);

//     p1.displayInfo();

//     Student s1("Nouman",20,"6245");
//     s1.displayInfo();

//     return 0;
// }



//********************************************************************************

// #include<iostream>
// using namespace std;

// class base{

//     private:
    
//     int data1;

//     public:

//     int data2;
    
//     void set_data(void){
//         data1 = 20;
//         data2 = 30;
//     }
//     int get_data1(void){return data1;}
//     int get_data2(void){return data2;}
//     void display(void){
//         cout<<"Data 1 = "<<data1<<endl;
//         cout<<"Data 2 = "<<data2<<endl;
//     }

// };

// class derived : public base{
//     private:

//     int data3;

//     public:

//     void process(void){
//         data3 = data2 * get_data1();    //can access data2 cuz its declared public in base.
//     }
//     void display(void){
//         base::display();
//         cout<<"Data3 = "<<data3<<endl;
//     }


// };

// int main(){

//     base b1;
//     b1.set_data();
//     b1.display();

//     cout<<"*********************"<<endl;
//     derived d1;
//     d1.set_data();
//     d1.process();
//     d1.display();



//     return 0;
// }

// // ************************************************

//SAME EXAMPLE AS ABOVE BUT INHERITANCE PRIVATE:

// #include<iostream>
// using namespace std;

// class base{

//     private:
    
//     int data1;

//     public:

//     int data2;
    
//     void set_data(void){
//         data1 = 20;
//         data2 = 30;
//     }
//     int get_data1(void){return data1;}
//     int get_data2(void){return data2;}
//     void display(void){
//         cout<<"Data 1 = "<<data1<<endl;
//         cout<<"Data 2 = "<<data2<<endl;
//     }

// };

// class derived : private base{
//     private:

//     int data3;

//     public:

//     void process(void){
//         set_data();      //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//         data3 = data2 * get_data1();    //can access data2 cuz its declared public in base.
//     }
//     void display(void){
//         base::display();
//         cout<<"Data3 = "<<data3<<endl;
//     }


// };

// int main(){

//     base b1;
//     b1.set_data();
//     b1.display();

//     cout<<"*********************"<<endl;
//     derived d1; 
//    // d1.set_data();   //WE have to call set DATA in process cuz the inheritance is not done publically and we cannot access private members or functions directly in main.
//     d1.process();
//     d1.display();



//     return 0;
// }

//*****************************************************************



// #include<iostream>
// using namespace std;

// class Person{

//     string name = " ";
//     string cnic = " ";

//     public:

//     Person(string,string);

//     string get_name(void);
//     string get_cnic(void);

// };

// string Person :: get_name(){
//     return name;
// }
// string Person :: get_cnic(){
//     return cnic;
// }

// class Student : public Person{

//     string roll_no = " ";
//     float cgpa;
    
//     public:

//     Student(string,string,string,float);
//     void display(void);
// };

// Person :: Person(string input_name,string input_cnic){
//     name = input_name;
//     cnic = input_cnic;
// }

// Student :: Student(string input_name,string input_cnic,string input_roll_no,float input_cgpa)
//     :Person(input_name,input_cnic){
//     roll_no = input_roll_no;
//     cgpa = input_cgpa;
// }

// void Student :: display(void){

//     cout<<get_name()<<" with cnic "<<get_cnic()<<" and roll number "<<roll_no<<" has cgpa of "<<cgpa<<endl;
// }


// int main(){

//     Student s1("Nouman","123-35201","22L-6245",3.5);
//     s1.display();


//     return 0;
// }

//********************************************
