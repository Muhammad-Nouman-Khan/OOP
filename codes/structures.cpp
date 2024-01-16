// #include<iostream>
// using namespace std;

// struct Student{
//     string name;
//     int ID;
//     double gpa;

// };//sd1,sd2;    Can also do this...

// int main(){
//     Student sd1;
//     sd1.name="Nouman";
//     sd1.ID=20;
//     sd1.gpa=3.5;
//     Student sd2;
//     sd2.name="Talha";
//     sd2.ID=10;
//     sd2.gpa=4;
// //**********************
//     sd1={"Nouman",20,3.5};
//     sd2={"Talha",10,4};
// //**********************
//     Student sd3;
//     cout<<"Enter name of student 3"<<endl;
//     cin>>sd3.name;
//     sd3.ID=15;
//     sd3.gpa=4;
// //*************************
    
//     Student sd4;
//     sd4=sd1;       //becomes same   

//     // if(sd1==sd2){
//     //     cout<<"Both students are same"<<endl;      //CANT DO THIS..
//     // }

//     if(sd1.name == sd4.name){       //BUT CAN DO THIS
//         cout<<"Student 1 and student 4 has same name"<<endl;
//     }    



// //*******************************
//     cout<<"Student 1:"<<endl;
//     cout<<sd1.name<<endl;
//     cout<<sd1.ID<<endl;
//     cout<<sd1.gpa<<endl;
//     cout<<"Student 2:"<<endl;
//     cout<<sd2.name<<endl;
//     cout<<sd2.ID<<endl;
//     cout<<sd2.gpa<<endl;
//     cout<<"Student 3:"<<endl;
//     cout<<sd3.name<<endl;
//     cout<<sd3.ID<<endl;
//     cout<<sd3.gpa<<endl;
//     cout<<"Student 4:"<<endl;
//     cout<<sd4.name<<endl;
//     cout<<sd4.ID<<endl;
//     cout<<sd4.gpa<<endl;


//     return 0;
// }

// //*******************************************************************

// //ARRAYS IN STRUCTURES:

// #include<iostream>
// using namespace std;

// struct BookDetails{
//     int ID;
//     double price;
//     int pages;

// };
// //Example 2:
// struct student{
//     int RollNo;
//     int marks[3];


// };


// int main(){

//     BookDetails books[3];       //DECLARE AN ARRAY OF STRUCTURE

//     for(int i=0;i<3;i++){
//         cout<<"Book # "<<i+1<<endl;
//         cout<<"Enter ID of book # "<<i+1<<endl;
//         cin>>books[i].ID;
//         cout<<"Enter Price of book # "<<i+1<<endl;
//         cin>>books[i].price;
//         cout<<"Enter Pages of book # "<<i+1<<endl;
//         cin>>books[i].pages;
//     }

//     //OR INITIALIZATION CAN BE DONE LIKE THIS:
    
//     // BookDetails books[3]={{10,700,1000},{20,500,200},{30,300,100}};
//     // BookDetails books[3]={{10},{20,500,200},{30,300,100}}; (if we skip any values like for book 1 then it will print 0 in that place)
    
//     for(int i=0;i<3;i++){
//         cout<<"ID of book # "<<i+1<<endl;
//         cout<<books[i].ID<<endl;
//         cout<<"Price of book # "<<i+1<<endl;
//         cout<<books[i].price<<endl;
//         cout<<"Pages of book # "<<i+1<<endl;
//         cout<<books[i].pages<<endl;
//     }

//     cout<<books[1].ID<<endl;        //can also access like this.
//     cout<<books[2].ID<<endl;        //and so on.
    
//     //EXAMPLE 2:
    

//     student s1={6245,{10,20,30}}; //or can be done by arrays by taking input.
//     cout<<s1.RollNo<<endl;
//     cout<<s1.marks[0]<<endl;
//     cout<<s1.marks[1]<<endl;
//     cout<<s1.marks[2]<<endl;
//     student s2={1000,{}};   //OR s2={1000};  
//     cout<<s2.RollNo<<endl;    //PRINT ROLLNO.
//     cout<<s2.marks[0]<<endl;  //PRINT 0
//     cout<<s2.marks[1]<<endl;  // 0
//     cout<<s2.marks[2]<<endl;  // 0


//     return 0;
// }
// //*******************************************

// //POINTERS IN STRUCTURE:

// #include<iostream>
// using namespace std;

// struct Rectangle{

//     int width;
//     int height;

// };
// int main(){
//     Rectangle rect1 = {10,20};
//     Rectangle *rect1ptr = &rect1;
    
//     cout<<rect1ptr<<endl;  //PRINT ADDRESS OF rect1.

//     cout<<(*rect1ptr).width<<endl;     //PRINTS WIDTH OF RECTANGLE1
//     cout<<(*rect1ptr).height<<endl;    //BRACKETS MUST OTHERWISE ERROR!

//     cout<< rect1ptr->width<<endl;      //WE CAN ALSO USE ARROW OPERATOR TO PRINT THESE.
//     cout<< rect1ptr->height<<endl;
    

//     return 0;
// }

// //***************************************************

// #include<iostream>
// using namespace std;

// struct Rectangle{
    
//     double length;
//     double width;
//     double height;

// };
// void changeRect(Rectangle &rect){  //PASS BY REFERENCE IT WILL CHANGE THE VALUES.
//     rect.length = 50;
//     rect.width = 60;
//     rect.height = 70;

// }

// int main(){
//     Rectangle rect1 = {10,20,30};
//     changeRect(rect1);

//     cout<<rect1.length<<endl;
//     cout<<rect1.width<<endl;
//     cout<<rect1.height<<endl;


//     return 0;
// }

// //***************************************************
// //PRACTICE QUESTION 1;

// #include<iostream>
// using namespace std;

// struct Car{
//     string model;
//     int year;
//     float price;

// };

// int main(){

//     Car showroom[5];
//     for(int i=0;i<5;i++){
//         cout<<"Model of car "<<i+1<<endl;
//         cin>>showroom[i].model;
//         cout<<"Year of car "<<i+1<<endl;
//         cin>>showroom[i].year;
//         cout<<"Price of car "<<i+1<<endl;
//         cin>>showroom[i].price;
        
//     }
//     for(int i=0;i<5;i++){
//         if(showroom[i].price > 500000){
//             cout<<showroom[i].model<<"\t"<<showroom[i].year<<"\t"<<showroom[i].price<<endl;
//         }
//     }
//     return 0;
// }
// //******************************************************
// //PRACTICE QUESTION 2:

// #include<iostream>
// using namespace std;

// struct Address{
//     string city;
//     string country;
// };
// struct ContactInfo{
//     string name;
//     long int number;
//     Address address;

// };

// int main(){
//     ContactInfo people[3];
//     for(int i=0;i<3;i++){
//         cout<<"Name"<<endl;
//         cin>>people[i].name;
//         cout<<"Number"<<endl;
//         cin>>people[i].number;
//         cout<<"City"<<endl;
//         cin>>people[i].address.city;
//         cout<<"Country"<<endl;
//         cin>>people[i].address.country;
//     }
//      for(int i=0;i<3;i++){   
//         cout<<people[i].name<<" "<<people[i].number<<" "<<people[i].address.city<<" "<<people[i].address.country<<endl;
//     }






//     return 0;
// }

//****************************************************************
// #include<iostream>
// using namespace std;

// struct nameType{
//     string firstName;
//     string lastName;
// };

// struct dateType{
//     int day;
//     int month;
//     int year;
    
// };
// struct contactInfo{
//     double phone;
//     string email;
// };

// struct employeeType{           //MORE READABLE RATHER THAN PUTTING ALL THESE THINGS IN ONE STRUCT
//     nameType name;
//     dateType hireDate;
//     dateType quitDate;
//     contactInfo contact;

// };
// void printInfo(employeeType& emp){
//     cout<<emp.name.firstName<<" "<<emp.name.lastName<<endl;
//     cout<<emp.hireDate.day<<"/"<<emp.hireDate.month<<"/"<<emp.hireDate.year<<endl;
//     cout<<emp.quitDate.day<<"/"<<emp.quitDate.month<<"/"<<emp.quitDate.year<<endl;
//     cout<<emp.contact.phone<<endl;
//     cout<<emp.contact.email<<endl;

// }

// int main(){
//     employeeType emp1;
//     emp1.name.firstName = "Nouman";
//     emp1.name.lastName = "Younas";
//     emp1.hireDate.day = 1;
//     emp1.hireDate.month = 12;
//     emp1.hireDate.year = 2022;
//     emp1.quitDate.day = 25;
//     emp1.quitDate.month = 12;
//     emp1.quitDate.year = 2023;
//     emp1.contact.phone = 0;
//     emp1.contact.email = "@gmail.com";
//     printInfo(emp1);

//     employeeType employees[2];

//     for(int i=0;i<2;i++){
//         cout<<"Enter first name of emp # "<<i+1<<endl;
//         cin>>employees[i].name.firstName;
//         cout<<"Enter last name of emp #"<<i+1<<endl; 
//         cin>>employees[i].name.lastName;
//         cout<<"Hire date/month/year of emp# "<<i+1<<endl;
//         cin>>employees[i].hireDate.day>>employees[i].hireDate.month>>employees[i].hireDate.year;
//         cout<<"Quit date/month/year of emp# "<<i+1<<endl;
//         cin>>employees[i].quitDate.day>>employees[i].quitDate.month>>employees[i].quitDate.year;
//         cout<<"Enter phone number of emp# "<<i+1<<endl;
//         cin>>employees[i].contact.phone;
//         cout<<"Enter email of emp# "<<i+1<<endl;
//         cin>>employees[i].contact.email;
//     }
//     for(int i=0;i<2;i++){
//         printInfo(employees[i]);
//     }




//     return 0;
// }
//**********************************************************
/*#include<iostream>
using namespace std;

struct student{
    string firstName;
    string lastName;
    char courseGrade;
    double testScore;
    double programmingScore;
    double GPA;

};
void printResult(student&,double);
int main(){
    student std;
    std.firstName = "Nouman";
    std.lastName = "Khan";
    cout<<"Enter the test Score of the student out of 100"<<endl;
    cin>>std.testScore;
    cout<<"Enter the programming score of the student out of 100"<<endl;
    cin>>std.programmingScore;

    double score = 0;

    score = (std.testScore + std.programmingScore) / 2;

    if(score>=90){
        std.courseGrade = 'A';
    }
    else if(score>=75 && score<90){
        std.courseGrade = 'B';
    }
    else if(score>=60 && score<75){
        std.courseGrade = 'C';
    }
    else if(score>=45 && score<60){
        std.courseGrade = 'D';
    }
    else{
        std.courseGrade = 'F';
    }

    switch(std.courseGrade){
        case 'A':
        std.GPA = 4;
        break;
        case 'B':
        std.GPA = 3;
        break;
        case 'C':
        std.GPA = 2.5;
        break;
        case 'D':
        std.GPA = 2;
        break;
        default:
        std.GPA = 0;
    }
    printResult(std,score);
    
    return 0;
}
void printResult(student &st,double average){
    cout<<"Name: "<<st.firstName<<" "<<st.lastName<<endl;
    cout<<"Test Score: "<<st.testScore<<endl;
    cout<<"Programming Score: "<<st.programmingScore<<endl;
    cout<<"Average: "<<average<<endl;
    cout<<"Student Grade: "<<st.courseGrade<<endl;
    cout<<"GPA: "<<st.GPA<<endl;


}*/

//***************************************************
// #include<iostream>
// using namespace std;
// const int no_of_students = 5;
// struct student{
//     string name;
//     double testScore;
//     char grade;

// };
// void printStudents(student st[],int size){
//     cout<<"Name "<<" "<<"Scores "<<" "<<"Grade"<<endl;
//     for(int index=0;index<size;index++){
//         cout<<st[index].name<<"\t"<<st[index].testScore<<"\t"<<st[index].grade<<endl;
//     }

// }
// void printHighest(student st[],int size){
//     double highest = st[0].testScore;
//     string name = "";
//     for(int index=0;index<no_of_students;index++){
//         if(st[index].testScore > highest){
//             highest = st[index].testScore;
//             name = st[index].name;
//         }
//     }
//     cout<<"Student with highest marks : "<<name<<endl;
//     cout<<"Highest Marks = "<<highest<<endl;
    

// }

// int main(){
//     student students[no_of_students];
//     students[0].name = "Nouman";
//     students[1].name = "Talha";
//     students[2].name = "Qasim";
//     students[3].name = "Ali";
//     students[4].name = "Haroon";

//     students[0].testScore = 80;
//     students[1].testScore = 85;
//     students[2].testScore = 100;
//     students[3].testScore = 95;
//     students[4].testScore = 70;

//     for(int index=0;index<no_of_students;index++){
//         if(students[index].testScore >= 90){
//             students[index].grade = 'A';
//         }
//         else if(students[index].testScore >= 75 && students[index].testScore < 90){
//             students[index].grade = 'B';
//         }
//         else if(students[index].testScore >= 60 && students[index].testScore < 75){
//             students[index].grade = 'C';
//         }
//         else if(students[index].testScore >= 45 && students[index].testScore < 60){
//             students[index].grade = 'D';
//         }
//         else{
//             students[index].grade = 'F';
//         }    
//     }
//     printStudents(students,no_of_students);
//     cout<<"***************************"<<endl;
//     printHighest(students,no_of_students);
//     return 0;
// }
//******************************************************************************