#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream out_file;   
    out_file.open("./data/file3.txt", ios::app);
    out_file << "Append content to an existent content in the file \n";

    if(out_file.is_open())
    {
        cout << "file is opened successfully\n";
    }
    else
    {
        cout << "Error opening file\n";
    }

    out_file.close();
    return 0;
}