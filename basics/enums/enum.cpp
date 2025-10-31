#include <iostream>

using namespace std;

enum Season: int {
    Summer,
    Autumn,
    Winter,
    Spring
};

int main()
{
    Season winter = Winter;
    cout << winter << endl;
    Season spring = Season(3);
    cout << spring << endl; //* 3

    return 0;
}