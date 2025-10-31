#include <iostream>
#include <vector>
#define MAX 6

using namespace std;

class Student {
    public:
        string name;
        int age;
        vector<string> skills;
    Student(string name, int age, vector<string> skills) : name(name), age(age), skills(skills) {}
};

int main()
{
    Student s1 = Student("Ahmed", 17, {"C++", "Python", "JavaScript", "Linux"}); 

    cout << s1.name << endl;
    cout << s1.age << endl;
    int i = 1;
    for (string skill : s1.skills) {
        cout << "Skill " + to_string(i) + ": " << skill << endl;
        i++;
    }
    
    return 0;
}