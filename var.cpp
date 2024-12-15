#include <iostream>

using namespace std;

int main()
{
    string name = "George";
    int age = 50;
    double gpa = 2.3;
    char tmp_char = 'A';
    bool isMale = false;

    if(isMale){
    cout << "There once was a man named " << name << endl;
    cout << "He was " << age << " years old. " << endl;
    }

    else{
    name = "Mike";
    cout << "He liked the name "<<name << endl;
    cout << "He did not like being "<< age << endl;
    cout << gpa << endl;
    cout << tmp_char << endl;

    }

    return 0;

}
