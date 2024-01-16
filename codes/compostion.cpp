// #include<iostream>
// using namespace std;

// class Address{

//     int house_num;
//     int street_num;
//     string city;

//     public:

//     Address(int house,int street,string input_city){
//         this->house_num = house;
//         this->street_num = street;
//         this->city = input_city;
//     }

//     void display(void){
//         cout<<"House # "<<house_num<<endl;
//         cout<<"Street # "<<street_num<<endl;
//         cout<<"City : "<<city<<endl;
//     }

// };


// class Person{

//     string name;

//     Address address;

//     public:

//     Person(string input_name,int house,int street,string input_city)
//         :address(house,street,input_city){
//         this->name = input_name;
//     }
//     void display(void){
//         cout<<"Name : "<<name<<endl;
//         address.display();
//     }


// };

// int main(){

//     Person p("Nouman",2,3,"Lahore");
//     p.display();


//     return 0;
// }

//*******************************************************************************

// AGGREGATION:

// #include<iostream>
// using namespace std;

// class Address{

//     int house_num;
//     int street_num;
//     string city;

//     public:

//     Address(int house,int street,string input_city){
//         this->house_num = house;
//         this->street_num = street;
//         this->city = input_city;
//     }

//     void display(void){
//         cout<<"House # "<<house_num<<endl;
//         cout<<"Street # "<<street_num<<endl;
//         cout<<"City : "<<city<<endl;
//     }

// };


// class Person{

//     string name;

//     Address address;

//     public:

//     Person(string input_name,Address add)
//         :address(add){
//         this->name = input_name;
//     }
//     void display(void){
//         cout<<"Name : "<<name<<endl;
//         address.display();
//     }
    


// };

// int main(){

//     Address add(1,2,"Lahore");
//     Person p("Nouman",add);
//     p.display();




//     return 0;
// }

//******************************************************************