// #include<iostream>
// using namespace std;

// class Rectangle{
//     private:         //KEEP DATA ATTRIBUTES PRIVATE AND FUNCTIONS PUBLIC TO PROTECT DATA FROM UNWANTED ACCESS
//     double width;    // AND MODIFICATION a.k.a data hiding.
//     double length;

//     public:
//     void setWidth(double w){  //SETTERS
//         width = w;
//     }
//     void setLength(double l){
//         length = l;
//     }
//     double getWidth() const {  //getters dont change an object data so they should be marked const.(GPP).
//         return width;
//     }
//     double getLength()const {
//         return length;
//     }
//     void printWidth(){
//         cout<<"Width: "<<getWidth()<<endl;
//     }
//     void printLength(){
//         cout<<"Length: "<<getLength()<<endl;
//     }
//     double CalcArea(){   //ITS IN-Line Function..We can also define a function outside the class as follows:
//         return length*width;
//     }

//     // double CalcArea();  //First define the prototype inside the class.

//     void printArea(){
//         cout<<"Area: "<<CalcArea()<<endl;
//     }

// };

// //return type className :: MemberFunctionName(){}

// // double Rectangle :: CalcArea(){  //Out-of-line function.
// //     return length*width;
// // }

// int main(){
//     Rectangle r1;
//     double w = 10;
//     double l = 20;
//     r1.setWidth(w);
//     r1.setLength(l);
//     r1.printWidth();
//     r1.printLength();
//     r1.CalcArea();
//     r1.printArea();
//     cout<<"POINTER"<<endl;
//     Rectangle *r1ptr;
//     r1ptr = &r1;
//     (*r1ptr).printWidth();
//     r1ptr->printLength();
//     r1ptr->printArea();
//     //changing values.
//     r1ptr->setWidth(20);
//     r1ptr->setLength(40);
//     cout<<"After changing l and w with pointers"<<endl;
//     cout<<"r1 ";
//     r1.printWidth();
//     cout<<"r1 ";
//     r1.printLength();
//     cout<<"r1 ";
//     r1.printArea();
//     cout<<"printing by pointer"<<endl;
//     r1ptr->printWidth();
//     r1ptr->printLength();
//     r1ptr->printArea();

//     //DYNAMICALLY ALLOCATE OBJECTS:

//     Rectangle *r2ptr = new Rectangle;
//     (*r2ptr).setWidth(100);
//     r2ptr->setLength(50);
//     r2ptr->printWidth();
//     r2ptr->printLength();
//     r2ptr->printArea();

//     delete r2ptr;    //DEALLOCATING.
//     r2ptr = NULL;

//     return 0;
// }

//***************************************************************
// #include<iostream>
// using namespace std;

// class Count{

//     private:
//     int x;

//     public:
//     void setX(int value){
//         x = value;
//     }
//     void printX(){
//         cout<<x<<endl;
//     }

// };

// int main(){
//     Count counter;                   //CREATED COUNTER OBJECT
//     Count *counterptr = &counter;   //POINTER TO COUNTER
//     Count &counterRef = counter;   //CREATE REFERENCE TO COUNTER

//     //WE WILL BE PRINTING VALUE OF X USING THESE 3.
//     cout<<"Setting x to 10 and printing by using the object's name"<<endl;
//     counter.setX(10);
//     counter.printX();
//     cout<<"Setting x to 20 and printing by using reference to an object"<<endl;
//     counterRef.setX(20);
//     counterRef.printX();
//     cout<<"Setting x to 30 and printing by using pointer to an object"<<endl;
//     counterptr->setX(30);
//     (*counterptr).printX();

//     return 0;
// }
//***********************************************************************************

// //CONSTRUCTORS IN CLASSES:

// #include<iostream>
// using namespace std;
// class Rectangle{

//     private:

//     double length;
//     double width;

//     public:
//     Rectangle(); //Default Constructor(prototype)
//     Rectangle(double,double);   //Parametrized Constructor(prototype)
//     void printInfo(){
//         cout<<"Length: "<<length<<endl;
//         cout<<"Width: "<<width<<endl;
//     }
//     ~Rectangle(){
//         cout<<"Destructor Constructor Called"<<endl;
//     }

// };
// Rectangle :: Rectangle(){
//     cout<<"Default Constuctor Called "<<endl;
//     length = 30;
//     width = 40;
// }
// Rectangle :: Rectangle(double l,double w){
//     cout<<"Parametrized Constructor Called"<<endl;
//     length = l;
//     width = w;
// }
// int main(){
//     Rectangle r;          //DEFAULT CONSTRUCTOR WOULD BE CALLED
//     r.printInfo();
//     Rectangle r1(10,20); //PARAMETRIZED CONSTRUCTOR CALLED
//     r1.printInfo();
//     Rectangle r2;       //DEFAULT
//     r2.printInfo();

//     Rectangle *r3;             //DYNAMICALLY
//     r3 = new Rectangle(50,60);
//     r3->printInfo();
//     delete r3;
//     r3 = NULL;

//     Rectangle r4;
//     r4 = r1;
//     r4.printInfo();

//     return 0;
// }

// //ARRAYS IN CLASSES:

// #include<iostream>
// using namespace std;

// class Info{

//     private:
//     double cost;
//     int units;

//     public:
//     Info(){          //DEFAULT
//         cost = 0;
//         units = 0;

//     }
//     Info(double c){   //TAKE ONE ARGUMENT  (parametrized constructor 1)
//         cost = c;
//         units = 0;
//     }
//     Info(double c,double u){  //TAKES TWO ARGUMENT  (constructor 2)
//         cost = c;
//         units = u;
//     }
//     void printInfo(){
//         cout<<"Cost: "<<cost<<endl;
//         cout<<"Units: "<<units<<endl;
//     }
//     void setCost(double c){
//         cost = c;
//     }
//     void setUnits(int u){
//         units = u;
//     }

// };
// int main(){
//     cout<<"DEFAULT CONSTRUCTOR CALLED"<<endl;
//     Info items[3];  //Defalut Constructor Called..
//     items->printInfo();  //prints the cost and unit of first item..(by Default Constructor).
//     (*items).printInfo(); //can be written like this.
//     //To Access the first second and third item:
//     items[0].printInfo();
//     items[1].printInfo();
//     items[2].printInfo();

//     //To print the values of all the three items we can also use loop:
//     for(int i=0;i<3;i++){
//         cout<<"**********"<<endl;
//         cout<<"Item "<<i+1<<":"<<endl;
//         items[i].printInfo();
//     }cout<<endl;
// //**************************************************************************
//     cout<<"PARAMETRIZED CONSTRUCTOR 1 CALLED"<<endl;
//     Info items1[3] = {10,20,30};  //constructor 1 would be called(Taking one argument i.e cost)second argument is defined in the consturtor.
//     items1->printInfo();  //as explained above...and so on.

//     for(int i=0;i<3;i++){
//         cout<<"**************"<<endl;
//         cout<<"Item "<<i+1<<":"<<endl;
//         items1[i].printInfo();
//     }

// //*******************************************************************
//     cout<<"PARAMETRIZED CONSTRUCTOR 2 CALLED"<<endl;
//     Info items2[3] = {{10,20},{30,40},{50,60}};
//     // Info items2[3] = {Info(10,20),Info(30,40),Info(50,60)};  //Can be written like this.
//     for(int i=0;i<3;i++){
//         cout<<"**************"<<endl;
//         cout<<"Item "<<i+1<<":"<<endl;
//         items2[i].printInfo();
//     }
// //*********************************************************************************
//     cout<<"CASE 1:"<<endl;
//     cout<<"-----------"<<endl;
//     Info items3[3] = {1,{2,3},4}; //Not necessary to call same constructor for each object in an array.
//     //1 goes to const 1....2,3 goes to const 2....and 4 goes to const 1.
//     items3[0].printInfo();
//     items3[1].printInfo();
//     items3[2].printInfo();
//     cout<<"CASE 2"<<endl;
//     cout<<"-----------"<<endl;
//     Info items4[3] = {{},{20,30},40};  //First Default then 2 const and then 40 goes to 1 const.
//     items4[0].printInfo();
//     items4[1].printInfo();
//     items4[2].printInfo();
// //************************************************************************
//     cout<<"CASE 3************************"<<endl;
//     Info items5[3];
//     items5[0].setCost(100);
//     items5[0].setUnits(200);
//     items5[0].printInfo();        //PARAMETRIZED CONST.
//     items5[1].printInfo();       //DEFAULT CONSTRUCTOR.
//     items[2].setCost(3000);
//     items[2].printInfo();      //CONSTRUCTOR 1 as one argument is passed.

// //***************************************************************************

//     Info items6[3];
//     for(int i=0;i<3;i++){  //If we input only cost then const 1 would be called..in this case its const 2...
//         double c = 0;     // else default.
//         cout<<"Enter the cost of item "<<i+1<<":"<<endl;
//         cin>>c;
//         items6[i].setCost(c);
//         int u = 0;
//         cout<<"Enter the units of item "<<i+1<<":"<<endl;
//         cin>>u;
//         items6[i].setUnits(u);

//     }
//     for(int i=0;i<3;i++){

//         items6[i].printInfo();

//     }

//     return 0;
// }

// //************************************************************************

// PRACTICE QUESTION:

// #include<iostream>
// using namespace std;

// class Date{

//     public:
//     Date(int = 31,int = 12,int = 2022);     //DEFAULT
//     void printDate();

//     private:
//     int day;
//     int month;
//     int year;

// };
// Date :: Date(int d,int m,int y){
//     day = d;
//     month = m;
//     year = y;
// }
// void Date :: printDate(){
//     cout<<day<<"/"<<month<<"/"<<year<<endl;
// }

// int main(){
//     Date date1(1,1,2023);
//     Date date2;
//     cout<<"Date 1 = ";
//     date1.printDate();
//     cout<<"Date 2 = ";
//     date2.printDate();

//     date2 = date1;

//     cout<<"After default memberwise assignment, Date 2 = ";
//     date2.printDate();

//     return 0;
// }

//***********************************************************************************

// #include<iostream>         //SHALLOW COPY
// using namespace std;

// class Demo{
//     private:
//     int a;
//     int b;
//     int *c;

//     public:
//     Demo(){
//         c = new int;
//     }
//     void setValues(int,int,int);
//     void ShowData();

// };
// void Demo :: setValues(int x,int y,int z){
//     a = x;
//     b = y;
//     *c = z;

// }
// void Demo :: ShowData(){
//     cout<<"The value of a is "<<a<<endl;
//     cout<<"The value of b is "<<b<<endl;
//     cout<<"The value of c is "<<*c<<endl;
// }
// int main(){
//     Demo d1;
//     d1.setValues(10,20,30);
//     d1.ShowData();
//     Demo d2;
//     d2 = d1;
//     d2.ShowData();
//     d2.setValues(40,50,60);
//     d2.ShowData();  //prints 40,50,60;
//     d1.ShowData(); //prints 10,20,60(c changed)........(Shallow Copy)

//     return 0;
// }
//****************************************************
// #include<iostream>         //DEEP COPY
// using namespace std;

// class Demo{
//     private:
//     int a;
//     int b;
//     int *c;

//     public:
//     Demo(){
//         c = new int;
//     }
//     Demo(Demo &d){       //COPY CONSTRUCTOR.
//         a = d.a;
//         b = d.b;
//         *c = *(d.c);
//     }
//     void setValues(int,int,int);
//     void ShowData();

// };
// void Demo :: setValues(int x,int y,int z){
//     a = x;
//     b = y;
//     c = new int;  //FOR DEEP COPY.
//     *c = z;
// }
// void Demo :: ShowData(){
//     cout<<"The value of a is "<<a<<endl;
//     cout<<"The value of b is "<<b<<endl;
//     cout<<"The value of c is "<<*c<<endl;
// }
// int main(){
//     Demo d1;
//     d1.setValues(10,20,30);
//     d1.ShowData();
//     Demo d2;
//     d2 = d1;
//     d2.ShowData();
//     d2.setValues(40,50,60);
//     d2.ShowData();   //PRINTS 40,50,60
//     d1.ShowData();  //PRINTS 10,20,30 .......d1 not changed....Deep copy.

//     return 0;
// }
//*****************************************************************************
// #include<iostream>
// using namespace std;

// class Car{
//     private:
//     int fuel;
//     string model;

//     public:
//     static int totalCars;  //its public....if it is private then obv we will use getters to print totalcars.
//     Car(){                //DEFAULT
//         fuel = 0;
//         model = "";
//         totalCars++;
//     }
//     int getCars(){         //NON STATIC
//         return totalCars;
//     }
//     static int getTotalCars(){   //STATIC FUNCTION
//         return totalCars;
//     }

// };
// int Car :: totalCars;

// int main(){
//     Car car1,car2,car3;
//     cout<<Car::totalCars<<endl;             //Can access by class name
//     cout<<car1.totalCars<<endl;            //Can access by object's name
//     cout<<car1.getCars()<<endl;           //can be accessed by non static function
//     cout<<Car::getTotalCars()<<endl;     //can be accessed by static function and using class name.
//     cout<<car1.getTotalCars()<<endl;    //can be accessed by static function and  object name.

//     return 0;
// }
//******************************************************************
// //STATIC PRACTICE QUESTION:
// #include<iostream>
// #include<cstring>
// using namespace std;

// class Employee{
//     private:
//     char *firstName;
//     char *lastName;
//     static int count;

//     public:
//     Employee(char*,char*);
//     char *getfirstName();
//     char *getlastName();
//     static int getCount();
//     ~Employee();

// };
// int Employee :: count;
// int Employee :: getCount(){
//     return count;
// }
// Employee :: Employee(char *first,char *last){
//     firstName = new char[strlen(first)+1];
//     strcpy(firstName,first);
//     lastName = new char[strlen(last)+1];
//     strcpy(lastName,last);
//     count++;
//     cout<<"Employee Constructor Called for "<<firstName<<" "<<lastName<<endl;
// }
// char *Employee :: getfirstName(){
//     return firstName;
// }
// char *Employee :: getlastName(){
//     return lastName;
// }
// Employee :: ~Employee(){
//     cout<<"~Employee Constructor Called for "<<firstName<<" "<<lastName<<endl;
//     delete [] firstName;
//     delete [] lastName;
//     count--;
// }

// int main(){
//     cout<<"Number of employees before instantiation is "<<Employee::getCount()<<endl;
//     Employee *emp1;
//     emp1 = new Employee("Nouman","Younas");
//     Employee *emp2 = new Employee("Talha","Ahmed");
//     cout<<"Number of employees after instantitaion is "<<Employee::getCount()<<endl;

//     delete emp1;
//     emp1 = NULL;
//     delete emp2;
//     emp2 = NULL;

//     cout<<"Number of employees after deletion is "<<Employee::getCount()<<endl;

//     return 0;
// }
//*****************************************************************************************

// //FRIEND FUNCTIONS:

// #include<iostream>
// using namespace std;

// class Count{

//     friend void setX(Count &,int);

//     private:
//     int x;

//     public:
//     Count(){
//         x = 0;
//     }
//     void printX() const {
//         cout<<x<<endl;
//     }

// };
// void setX(Count &c, int value){
//     c.x = value;

// }
// int main(){
//     Count counter;
//     cout<<"The value of x after instantiation: ";
//     counter.printX();
//     cout<<"The value of x after call to setX friend function: ";
//     setX(counter,10);
//     counter.printX();

//     return 0;

// }

//*******************************************************************************
// //EXERCISE PROBLEM::::
// #include<iostream>
// using namespace std;

// class clockType{
//     private:
//     int hr;
//     int min;
//     int sec;

//     public:

//     void setTime(int,int,int);
//     void getTime(int &,int &,int&);
//     void printTime();
//     void incrementSeconds();
//     void incrementMinutes();
//     void incrementHours();
//     bool equalTime(const clockType&)const;

// };
// void clockType :: setTime(int hours,int minutes,int seconds){
//     hr = hours;
//     min = minutes;
//     sec = seconds;
// }
// void clockType :: getTime(int &hours,int &minutes,int &seconds){
//     hours = hr;
//     minutes = min;
//     seconds = sec;
// }
// void clockType :: printTime(){
//     cout<<hr<<":"<<min<<":"<<sec<<endl;
// }
// void clockType :: incrementHours(){
//     hr++;
//     if(hr>23){
//         hr = 0;
//     }
// }
// void clockType :: incrementMinutes(){
//     min++;
//     if(min>59){
//         min = 0;
//         incrementHours();
//     }
// }
// void clockType :: incrementSeconds(){
//     sec++;
//     if(sec>59){
//         sec = 0;
//         incrementMinutes();
//     }
// }

// bool clockType :: equalTime(const clockType& otherClock)const{
//     return (hr==otherClock.hr && min==otherClock.min && sec==otherClock.sec);

// }

// int main(){
//     clockType myClock;
//     clockType yourClock;

//     myClock.setTime(5,4,30);
//     cout<<"My ClockTime = ";
//     myClock.printTime();

//     cout<<"Your ClockTime = ";
//     yourClock.printTime();

//     yourClock.setTime(5,45,16);
//     cout<<"After Setting your clock = ";
//     yourClock.printTime();

//     if(myClock.equalTime(yourClock)){
//         cout<<"Both Times are equal "<<endl;
//     }
//     else{
//         cout<<"Times are not equal"<<endl;
//     }

//     int hours = 0;
//     int minutes = 0;
//     int seconds = 0;

//     cout<<"Enter the hours minutes and seconds "<<endl;
//     cin>>hours>>minutes>>seconds;

//     myClock.setTime(hours,minutes,seconds);
//     cout<<"New Time of my clock = ";
//     myClock.printTime();

//     myClock.incrementSeconds();
//     cout<<"After increment my clock time by one second = ";
//     myClock.printTime();

//     // myClock.incrementMinutes();
//     // cout<<"After increment my clock time by one minute = ";
//     // myClock.printTime();

//     // myClock.incrementHours();
//     // cout<<"After increment my clock time by one hour = ";
//     // myClock.printTime();
//     myClock.getTime(hours,minutes,seconds);
//     cout<<"Hours = "<<hours<<",minutes = "<<minutes<<", seconds = "<<seconds<<endl;

//     return 0;
// }
//***************************************************************************************

// //EXERCISE PROBLEM::
// // integer manipulation (reverse int,even,odd,zeroes,sum)
// #include<iostream>
// using namespace std;
// //INTEGER MANIPULATION.

// class Integer{
//     private:
//     long long num;
//     long long revNum;
//     int evensCount;
//     int oddCount;
//     int zerosCount;
//     long sum;

//     public:

//     void setNum(long long);
//     long long getNum();
//     void getrevNum();
//     void ClassifyDigits();
//     int getEvens();
//     int getOdds();
//     int getZeros();
//     void getSum();
//     Integer(long long n = 0);

// };
// void Integer :: setNum(long long n){
//     num = n;
// }
// long long Integer :: getNum(){
//     return num;
// }
// void Integer :: getrevNum(){

//     long long temp = num;

//     while(temp != 0){
//         long long rev = 0;
//         rev = temp % 10;
//         temp = temp / 10;
//         cout<<rev<<" ";
//     }
// }
// void Integer :: ClassifyDigits(){
//     long long temp;
//     temp = num;

//     int digit=0;
//     while(temp != 0){
//         digit =temp%10;

//         temp = temp/10;

//         if(digit%2==0){
//             evensCount++;

//          if(digit==0)
//             zerosCount++;
//         }
//         else
//             oddCount++;

//     }

// }
// int Integer :: getEvens(){
//     return evensCount;
// }
// int Integer :: getOdds(){
//     return oddCount;
// }
// int Integer :: getZeros(){
//     return zerosCount;
// }
// void Integer :: getSum(){
//     long sum = 0;
//     long long temp = num;

//     while(temp!=0){
//         int digit = temp%10;
//         temp = temp/10;
//         sum = sum + digit;
//     }
//     cout<<sum<<endl;

// }
// Integer::Integer(long long n)
// {
//     num = n;
//     revNum = 0;
//     evensCount = 0;
//     oddCount = 0;
//     zerosCount = 0;
// }

// int main(){
//     Integer number;
//     long long n;
//     cout<<"Enter the number "<<endl;
//     cin>>n;
//     number.setNum(n);

//     cout<<number.getNum()<<"*******************"<<endl;
//     cout<<"The number in reverse order = ";
//     number.getrevNum();
//     cout<<endl;
//     number.ClassifyDigits();
//     cout<<"The number of even digits = ";
//     cout<<number.getEvens()<<endl;
//     cout<<"The number of odd digits = ";
//     cout<<number.getOdds()<<endl;
//     cout<<"The number of zeros = ";
//     cout<<number.getZeros()<<endl;
//     cout<<"The sum of the number is ";
//     number.getSum();

//     return 0;
// }
// //*******************************************************************************

// //EXERCISE PROBLEM:

// #include<iostream>
// using namespace std;

// class cashRegister{

//     private:
//     int cashOnHand;

//     public:
//     int getCurrentBalance();
//     void acceptAmount(int amountIn);
//     cashRegister(int cashIn = 500);

// };
// int cashRegister :: getCurrentBalance(){
//     return cashOnHand;
// }
// void cashRegister :: acceptAmount(int amountIn){
//     cashOnHand = cashOnHand + amountIn;
// }
// cashRegister :: cashRegister(int cashIn){
//     if(cashIn>=0){
//         cashOnHand = cashIn;
//     }
//     else{
//         cashOnHand = 500;
//     }

// }

// class dispenserType{

//     private:

//     int no_of_items;
//     int cost;

//     public:
//     int getNoOfItems();
//     int getCost();
//     void makeSale();
//     dispenserType(int setNoOfItems = 50,int setCost = 50);

// };
// int dispenserType :: getNoOfItems(){
//     return no_of_items;
// }
// int dispenserType :: getCost(){
//     return cost;
// }
// void dispenserType :: makeSale(){
//     no_of_items--;
// }
// dispenserType :: dispenserType(int setNoOfItems, int setCost){
//     if(setNoOfItems>=0){
//         no_of_items = setNoOfItems;
//     }
//     else{
//         no_of_items = 50;
//     }
//     if(setCost>=0){
//         cost = setCost;
//     }
//     else{
//         cost = 50;
//     }

// }

// void showSelection();
// void sellProduct(dispenserType& product,cashRegister& pCounter);

// int main(){
//     cashRegister counter;
//     dispenserType orange(100, 50);
//     dispenserType apple(100, 65);
//     dispenserType mango(75, 80);
//     dispenserType strawberryBanana(100, 85);

//     int choice = 0;
//     showSelection();
//     cin>>choice;

//     while(choice !=9){
//     switch (choice)
//     {

//     case 1:
//     sellProduct(orange, counter);
//     break;

//     case 2:
//     sellProduct(apple, counter);
//     break;

//     case 3:
//     sellProduct(mango, counter);
//     break;

//     case 4:
//     sellProduct(strawberryBanana, counter);
//     break;

//     default:
//     cout << "Invalid selection." << endl;

//     }
//     showSelection();
//     cin >> choice;
//  }

//     return 0;
// }

// void showSelection(){
//     cout << "*** Welcome to Juice Shop ***" << endl;
//     cout << "To select an item, enter " << endl;
//     cout << "1 for orange juice (50 rupees)" << endl;
//     cout << "2 for apple juice (65 rupees)" << endl;
//     cout << "3 for mango juice (80 rupees)" << endl;
//     cout << "4 for strawberry banana juice (85 rupees)" << endl;
//     cout << "9 to exit" << endl;

// }

// void sellProduct(dispenserType& product,cashRegister& pCounter){

//     int amount1;
//     int amount2;
//     if(product.getNoOfItems()>0){
//         cout<<"Please deposit "<<product.getCost()<<" rupees"<<endl;
//         cin>>amount1;
//     }
//     else{
//         cout<<"Sorry this item is sold out"<<endl;
//     }
//     if(amount1 < product.getCost()){
//     cout<<"Please Deposit another "<<product.getCost() - amount1<<" rupees"<<endl;
//     cin>>amount2;
//     amount1 = amount1 + amount2;
//     }
//     if(amount1 >= product.getCost()){
//     pCounter.acceptAmount(amount1);
//     product.makeSale();
//     cout<<"Collect Your Item at the bottom and enjoy"<<endl;
//     }
//     else{
//     cout<<"The amount is not enough, Collect what you deposited"<<endl;
//     }
// }
//******************************************************************************************

// #include <iostream>

// class lineType {
// private:
//     double a, b, c;

// public:
//     // Constructor
//     lineType(double aVal, double bVal, double cVal) {
//         a = aVal;
//         b = bVal;
//         c = cVal;
//     }

//     // Check if the line is nonvertical and determine its slope
//     double getSlope() {
//         if (b != 0)
//             return -a / b;
//         else {
//             std::cout << "Vertical line has undefined slope." << std::endl;
//             return 0.0;
//         }
//     }

//     // Check if two lines are equal
//     bool isEqual(lineType otherLine) {
//         return ((a == otherLine.a && b == otherLine.b && c == otherLine.c) ||
//                 (a * otherLine.a == 0 && b * otherLine.b == 0 && c * otherLine.c == 0));
//     }

//     // Check if two lines are parallel
//     bool isParallel(lineType otherLine) {
//         return (a * otherLine.b == b * otherLine.a);
//     }

//     // Check if two lines are perpendicular
//     bool isPerpendicular(lineType otherLine) {
//         return (a * otherLine.a + b * otherLine.b == 0);
//     }

//     // Find the point of intersection of two non-parallel lines
//     void findIntersection(lineType otherLine) {
//         if (isParallel(otherLine)) {
//             std::cout << "Lines are parallel. No intersection point." << std::endl;
//             return;
//         }

//         double x = (otherLine.c * b - c * otherLine.b) / (otherLine.a * b - a * otherLine.b);
//         double y = (a * otherLine.c - otherLine.a * c) / (a * otherLine.b - otherLine.a * b);

//         std::cout << "Intersection point: (" << x << ", " << y << ")" << std::endl;
//     }
// };

// int main() {
//     // Create two lines
//     lineType line1(2, 3, 4);
//     lineType line2(4, 6, 8);

//     // Check slope of line1
//     double slope = line1.getSlope();
//     std::cout << "Slope of line1: " << slope << std::endl;

//     // Check if line1 and line2 are equal
//     bool equal = line1.isEqual(line2);
//     std::cout << "Lines line1 and line2 are " << (equal ? "equal" : "not equal") << std::endl;

//     // Check if line1 and line2 are parallel
//     bool parallel = line1.isParallel(line2);
//     std::cout << "Lines line1 and line2 are " << (parallel ? "parallel" : "not parallel") << std::endl;

//     // Check if line1 and line2 are perpendicular
//     bool perpendicular = line1.isPerpendicular(line2);
//     std::cout << "Lines line1 and line2 are " << (perpendicular ? "perpendicular" : "not perpendicular") << std::endl;

//     // Find the point of intersection of line1 and line2
//     line1.findIntersection(line2);

//     return 0;
// }

//*******************************************************************************
// #include <iostream>
// using namespace std;

// class Person
// {

//     string name;
//     string ID;
//     string address;

// public:
//     Person(string input_name, string input_ID, string input_address)
//     {
//         name = input_name;
//         ID = input_ID;
//         address = input_address;
//     }

//     void display(void)
//     {
//         cout << "Name : " << name << endl;
//         cout << "ID : " << ID << endl;
//         cout << "Address : " << address << endl;
//     }
// };

// class Course
// {

//     string course;
//     string ID;

// public:
//     Course()
//     {
//         course = "??";
//         string ID = "0";
//     }
//     Course(string input_course, string input_ID)
//     {
//         course = input_course;
//         ID = input_ID;
//     }
//     void display(void)
//     {
//         cout << "Course : " << course << endl;
//         cout << "Course ID : " << ID << endl;
//     }
// };

// class Student : public Person
// {

//     string student_ID;
//     double GPA;
//     Course *courses = NULL;
//     int no_of_courses;

// public:
//     Student(string input_ID, double input_GPA, int NoOfcourses, string courseNames[], string courseID[], string input_name, string ID, string input_address)
//         : Person(input_name, ID, input_address)
//     {
//         no_of_courses = NoOfcourses;
//         courses = new Course[no_of_courses];
//         for (int i = 0; i < no_of_courses; i++)
//         {
//             courses[i] = Course(courseNames[i], courseID[i]);
//         }
 
//         student_ID = input_ID;
//         GPA = input_GPA;
//     }
//     void display(void)
//     {
//         Person::display();
//         for (int i = 0; i < no_of_courses; i++)
//         {
//             cout << "-------------------" << endl;
//             cout << "Course # " << i + 1 << endl;
//             courses[i].display();
//             cout << "-------------------" << endl;
//         }
//         cout << "Student ID : " << student_ID << endl;
//         cout << "GPA : " << GPA << endl;
//     }
//     ~Student()
//     {
//         delete[] courses;
//         courses = NULL;
//     }
// };

// class Faculy
// {
// };

// class University
// {
// };

// int main()
// {
//     cout << "Enter the Number of Courses taken by student" << endl;
//     int courses = 0;
//     cin >> courses;
//     string course_names[courses];
//     string ID[courses];
//     for (int i = 0; i < courses; i++)
//     {
//         cout << "Enter the Name of course # " << i + 1 << endl;
//         cin >> course_names[i];
//         cout << "Enter the ID number of course # " << i + 1 << endl;
//         cin >> ID[i];
//     }

//     Student s("6245", 3.5, courses, course_names, ID, "Nouman", "35201", "Shalimar");
//     s.display();

//     return 0;
// }

