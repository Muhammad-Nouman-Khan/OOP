// #include <iostream>
// using namespace std;
// int main()
// {
//     int dividend, divisor, quotient;
//     try
//     {
//         cout << "Line 8: Enter the dividend: ";
//         cin >> dividend;
//         cout << endl;
//         cout << "Line 11: Enter the divisor: ";
//         cin >> divisor;
//         cout << endl;
//         if (divisor == 0)
//             throw 0;
//         quotient = dividend / divisor;
//         cout << "Line 17: Quotient = " << quotient
//              << endl;
//     }
//     catch (int)
//     {
//         cout << "Line 21: Division by 0." << endl;
//     }
//     return 0;
// }
//***********************************************************

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     int dividend, divisor = 1, quotient;
//     string inpStr = "The input stream is in the fail state.";
//     try
//     {
//         cout << "Line 10: Enter the dividend: ";
//         cin >> dividend;
//         cout << endl;
//         cout << "Line 13: Enter the divisor: ";
//         cin >> divisor;
//         cout << endl;
//         if (divisor == 0)
//             throw divisor;
//         else if (divisor < 0)
//             throw string("Negative divisor.");
//         else if (!cin)
//             throw inpStr;
//         quotient = dividend / divisor;
//         cout << "Line 23: Quotient = " << quotient
//              << endl;
//     }
//     catch (int x)
//     {
//         cout << "Line 27: Division by " << x << endl;
//     }
//     catch (string s)
//     {
//         cout << "Line 31: " << s << endl;
//     }
//     return 0;
// }

//**************************************************************************

// Excepting Class:

// #include<iostream>
// using namespace std;

// class divByZero{

// private:

//     string message;

// public:
//     divByZero():message("Division By zero!"){}
//     divByZero(string str):message(str){}
//     string get(){
//         return message;
//     }
// };

// int main(){

//     int numerator,denominator,quotient;

//     try{

//         cout<<"Enter the Numerator : ";
//         cin>>numerator;
//         cout<<"Enter the Denominator : ";
//         cin>>denominator;

//         if(denominator==0){
//             throw divByZero();
//             //throw divByZero("Found Division By Zero");
//         }
//         quotient = numerator / denominator;
//         cout<<"Quotient = "<<quotient<<endl;
//     }

//     catch(divByZero obj){
//         cout<<obj.get()<<endl;
//     }

//     return 0;
// }

//********************************************************************

#include <iostream> //Line 1
#include <iomanip>
using namespace std;

class circleType
{
public:
    void setRadius(double r);
    double getRadius();
    double area();
    // Function to return the area of a circle.
    // Postcondition: Area is calculated and returned.
    double circumference();
    // Function to return the circumference of a circle.
    // Postcondition: Circumference is calculated and returned.
    circleType(double r = 0);
    // Constructor with a default parameter.
    // Radius is set according to the parameter.
    // The default value of the radius is 0.0;
    // Postcondition: radius = r;
private:
    double radius;
};

void circleType::setRadius(double r)
{
    if (r >= 0)
        radius = r;
    else
        radius = 0;
}
double circleType::getRadius()
{
    return radius;
}
double circleType::area()
{
    return 3.1416 * radius * radius;
}
double circleType::circumference()
{
    return 2 * 3.1416 * radius;
}
circleType::circleType(double r)
{
    setRadius(r);
}

int main()                                         // Line 5
{                                                  // Line 6
    circleType circle1(8);                         // Line 7
    circleType circle2;                            // Line 8
    double radius;                                 // Line 9
    cout << fixed << showpoint << setprecision(2); // Line 10
    cout << "Line 11: circle1 - "
         << "radius: " << circle1.getRadius()
         << ", area: " << circle1.area()
         << ", circumference: "
         << circle1.circumference() << endl; // Line 11
    cout << "Line 12: circle2 - "
         << "radius: " << circle2.getRadius()
         << ", area: " << circle2.area()
         << ", circumference: "
         << circle2.circumference() << endl
         << endl;                          // Line 12
    cout << "Line 13: Enter the radius: "; // Line 13
    cin >> radius;                         // Line 14
    cout << endl;
    circle2.setRadius(radius); // Line 16
    cout << "Line 17: After setting the radius."
         << endl; // Line 17
    cout << "Line 18: circle2 - "
         << "radius: " << circle2.getRadius()
         << ", area: " << circle2.area()
         << ", circumference: "
         << circle2.circumference() << endl; // Line 18
    return 0;                                // Line 19
} // end main