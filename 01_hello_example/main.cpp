#include <iostream>

float my_pow(float x, int n){
    float result = 1.0;
    for(int i = 0; i < n; i++){
        result *= x;
    }
    return result;
}

float area_of_circle(float radius){
    return 3.14159 * my_pow(radius, 2);
}

float max_of_three(float a, float b, float c){
    if(a > b){
        if(a > c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b > c){
            return b;
        }else{
            return c;
        }
    }
}

int main(){

    // char name[256];

    // std::cout << "What's your name?\n";
    // std::cin >> name;
    // std::cout << "Hello " << name << "!\n";

    // float radius;
    // std::cout << "Enter the radius: ";
    // std::cin >> radius;
    // std::cout << "The area of the circle is: " << area_of_circle(radius) << "\n";

    // float a, b, c;
    // std::cout << "Enter three numbers: ";
    // std::cin >> a >> b >> c;
    // std::cout << "The maximum of the three numbers is: " << max_of_three(a, b, c) << "\n";

    // return 0;

    int *a;
    int b = 7; // B is a normal int variable holding the value 7
    a = &b; // point

    std::cout << a << std::endl;; // returns b's memory address.
    std::cout << *a << std::endl; // returns b's value  (i.e. 7).

    *a = 10;                     // updates a's target
    std::cout << b << std::endl; // returns 10
    
    return 1;
}

