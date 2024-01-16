// #include<iostream>
// using namespace std;

// class Cars{

//     int fuel;
//     string model;
//     static int totalCars;
    
//     public:
//     Cars();
//     int getTotalCars(void){return totalCars;}
//     static int getCars(void){return totalCars;}


// };
// Cars :: Cars(void){
//     fuel = 0;
//     model = "?";
//     totalCars++;
// }
// int Cars :: totalCars;
// int main(){

//     Cars c1;
//     Cars c2;
//     Cars c3;
//     cout<<c1.getTotalCars()<<endl;
    
//     cout<<c1.getCars()<<endl;
//     cout<<Cars::getCars()<<endl;  //By Class name we can access static function.


//     return 0;
// }

// //******************************************************

 

// #include<iostream>
// using namespace std;

// class Employee{

//     char *first_name;
//     char *last_name;
//     static int count;

// public:

//     Employee(const char *,const char *);
//     void display(void);
//     ~Employee();
//     static int get_count(void){return count;}
// };

// Employee :: Employee(const char *first,const char *last){
//     const char *temp_first = first;
//     const char *temp_last = last;
//     int first_len = 0;
//     int last_len = 0;
    
//     while((*temp_first)!='\0'){
//         first_len++;
//         temp_first++;
//     }

//     while((*temp_last)!='\0'){
//         last_len++;
//         temp_last++;
//     }
    
//     first_name = new char[first_len+1];
//     last_name = new char[last_len+1];

//     for(int i=0;i<first_len;i++){
//         first_name[i] = first[i];
//     }
//     for(int i=0;i<last_len;i++){
//         last_name[i] = last[i];
//     }
//     cout<<"Employee Constructor for "<<first_name<<" "<<last_name<<endl;
//     count++;
// }

// Employee :: ~Employee(){
//     cout<<"Destructor Called for Employee : "<<first_name<<" "<<last_name<<endl;
//     delete [] first_name;
//     delete [] last_name;
//     --count;
// }

// int Employee :: count = 0;

// void Employee :: display(void){
//     cout<<first_name<<" "<<last_name<<endl;
// }

// int main(){

//     cout<<"Number of Employees Before Instantiation = "<<Employee::get_count()<<endl;
//     Employee *emp1 = new Employee("Nouman","Younas");
//     Employee *emp2 = new Employee("Omer","Farooq");
//     cout<<"Number of Employees After Instantiation = "<<Employee::get_count()<<endl;
//     cout<<"Employee 1 : ";
//     emp1->display();
//     cout<<"Employee 2 : ";
//     emp2->display();
    
//     delete emp1;
//     emp1 = NULL;
//     delete emp2;
//     emp2 = NULL;

//     cout<<"Number of Employees after Deletion is "<<Employee::get_count()<<endl;

//     return 0;
// }

