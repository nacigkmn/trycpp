#include <iostream>

using namespace std;

class Student
{
private:
    double gpa;

public:
    string name;
    string major;

    Student(string aName, string aMajor)
    {
        name = aName;
        major = aMajor;
    }

    void setGpa(double aGpa)
    {
        if (aGpa < 0.0 || aGpa > 4.0)
        {
            cout << "Invalid GPA value. GPA should be between 0.0 and 4.0." << endl;
            gpa = 0.0; // Default value if invalid
        }
        else
        {
            gpa = aGpa;
        }
    }

    double getGpa()
    {
        return gpa;
    }

    string getAcademicStatus()
    {
        if (gpa >= 2.0)
        {
            return "Successful: Your GPA is sufficient.";
        }
        else
        {
            return "Failed: Your GPA is below the required threshold.";
        }
    }

    bool hasHonors()
    {
        if (gpa >= 3.5)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    Student student1("Jim", "Business");
    Student student2("Pam", "Art");

    student1.setGpa(3.7);
    student2.setGpa(1.5);

     // Output GPA and Academic Status
    cout << "Student 1: " << student1.name << " (" << student1.major << ")" << endl;
    cout << "GPA: " << student1.getGpa() << endl;
    cout << "Status: " << student1.getAcademicStatus() << endl;
    cout << "Honors: " << (student1.hasHonors() ? "Yes" : "No") << endl;

    cout << endl;

    cout << "Student 2: " << student2.name << " (" << student2.major << ")" << endl;
    cout << "GPA: " << student2.getGpa() << endl;
    cout << "Status: " << student2.getAcademicStatus() << endl;
    cout << "Honors: " << (student2.hasHonors() ? "Yes" : "No") << endl;

    return 0;
}