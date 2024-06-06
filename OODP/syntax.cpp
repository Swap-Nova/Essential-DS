#include<iostream>
using namespace std;

class Rectangle{

    private:
        int length;
        int breadth;
    
    public:
        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }

        int area(){
            return length*breadth;
        }

        void changeValues(int l, int b){
            length = l;
            breadth = b;
        }
};

int main(){
    Rectangle r(20,30);
    r.changeValues(10,30);
    cout << "The area of the rectangle is: " << r.area() << endl;
    return 0;
}

// error handling for more explanation
// #include<iostream>
// using namespace std;

// class Rectangle {
//     private:
//         int length;
//         int breadth;

//     public:
//         // Constructor with validation
//         Rectangle(int l, int b) {
//             setDimensions(l, b);
//         }

//         // Method to calculate the area
//         int area() {
//             return length * breadth;
//         }

//         // Method to change values with validation
//         void setDimensions(int l, int b) {
//             if (l > 0 && b > 0) {
//                 length = l;
//                 breadth = b;
//             } else {
//                 cout << "Invalid values: length and breadth must be positive." << endl;
//             }
//         }

//         // Method to get the length
//         int getLength() {
//             return length;
//         }

//         // Method to get the breadth
//         int getBreadth() {
//             return breadth;
//         }
// };

// int main() {
//     Rectangle r(20, 30); // valid initialization
//     cout << "Area: " << r.area() << endl;

//     r.setDimensions(10, 30); // valid change
//     cout << "Area after change: " << r.area() << endl;

//     r.setDimensions(-10, 30); // invalid change, will be handled
//     cout << "Area after invalid change: " << r.area() << endl;

//     return 0;
// }