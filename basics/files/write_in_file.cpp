#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file("./data/file2.txt");
    file << "This content is an override";

    file.close();
    return 0;
}