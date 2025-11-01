#include <iostream>
#include <functional>

using namespace std;

auto showMsg = []() {
    cout << "Hello, World" << endl;
};

//* Lambda function with parameters
auto get_info = [](string name, int age) {
    cout << "=================================\n";
    cout << "Welcome, " << name << endl;
    cout << " - Age: " << age << endl;
    cout << "=================================\n";
};

//* Function that take another function as parameter
void call_func2(function<void()> my_func) {
    my_func();
    my_func();
};

int main()
{
    showMsg();
    get_info("Ahmed", 17);

    //* Use lambda inside another function
    auto func = []() {
        cout << "Nested function" << endl;
    };
    call_func2(func);

    //* Using lambda with loops
    for(int i = 1; i < 5; i++) 
    {
        auto number = [i]() {
            cout << "Number: " << i << endl;
        };
        number();
    }


    //* Capture Clause: to get to lambda access of a variable 
    string name = "Ahmed";
    auto print_name = [name]() {
        cout << name << endl;
    };
    print_name();
    
    //* Capture by reference 
    int score = 30;
    auto print_score = [&score]() {
        cout << score << endl;
    };

    score = 100;

    print_score();
    return 0;
}

//* Wrote by Ahmed Bouramdane 2/11/2025