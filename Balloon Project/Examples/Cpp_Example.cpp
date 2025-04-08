// C++ Cheat Sheet

#include <iostream>  // For input/output
#include <vector>    // For dynamic arrays
#include <string>    // For strings
#include <map>       // For key-value pairs
#include <algorithm> // For algorithms like sort
#include <cmath>     // For math functions

// Main function: Entry point of a C++ program
int main() {
    // 1. Basic I/O
    std::cout << "Hello, World!" << std::endl; // Print to console
    int x;
    std::cin >> x; // Input from user

    // 2. Variables and Data Types
    int a = 10;       // Integer
    double b = 3.14;  // Floating-point
    char c = 'A';     // Character
    std::string s = "Hello"; // String
    bool isTrue = true;      // Boolean

    // 3. Conditional Statements
    if (a > 5) {
        std::cout << "a is greater than 5" << std::endl;
    } else {
        std::cout << "a is 5 or less" << std::endl;
    }

    // 4. Loops
    for (int i = 0; i < 5; i++) {
        std::cout << "i: " << i << std::endl;
    }

    int j = 0;
    while (j < 5) {
        std::cout << "j: " << j << std::endl;
        j++;
    }

    // 5. Functions
    auto add = [](int x, int y) { return x + y; }; // Lambda function
    std::cout << "Sum: " << add(3, 4) << std::endl;

    // 6. Arrays and Vectors
    int arr[3] = {1, 2, 3}; // Fixed-size array
    std::vector<int> vec = {1, 2, 3, 4}; // Dynamic array
    vec.push_back(5); // Add element
    for (int v : vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // 7. Maps (Key-Value Pairs)
    std::map<std::string, int> age;
    age["Alice"] = 25;
    age["Bob"] = 30;
    for (auto &pair : age) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // 8. Classes and Objects
    class Person {
    public:
        std::string name;
        int age;

        Person(std::string n, int a) : name(n), age(a) {} // Constructor

        void introduce() {
            std::cout << "Hi, I'm " << name << " and I'm " << age << " years old." << std::endl;
        }
    };

    Person p("Alice", 25);
    p.introduce();

    // 9. Pointers
    int num = 42;
    int *ptr = &num; // Pointer to num
    std::cout << "Value: " << *ptr << ", Address: " << ptr << std::endl;

    // 10. Error Handling
    try {
        throw std::runtime_error("An error occurred!");
    } catch (const std::exception &e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0; // Exit program
}