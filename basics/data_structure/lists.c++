#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<string> fruits = {"Apple", "Banana", "Grape", "Pineapple"};

    cout << fruits.front() << endl; 
    cout << fruits.back() << endl;

    fruits.front() = "Orange";

    //* List size
    cout << fruits.size() << endl;

    return 0;
}