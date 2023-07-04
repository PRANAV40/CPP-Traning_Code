#include <iostream>
#include "string.h"
using namespace std;

class Student
{
    int noOfSubject; // How many subject student take
    int *rollNo;     // Dynamically allocated memory.
    string name;
    float markss;
    float *marks;  // 60, 70,66, 70
    char *result; // Result is good
public:
    Student();
    Student(int subjects);
    Student(const char *str);
    Student(int rollNos, string name, float mark, char res);
    Student &operator=(const Student &t);
    Student(const Student &objstudent);
    ~Student();
    char *getValue();
    void setValue(int subjects, float mark);
    float getValue(int subjects);
    void update();
    void display();
};

Student::Student() // Default Constructor Difinition
{
    noOfSubject = 0;
    rollNo = new int; // Dynamically allocated memory.
    *rollNo = 0;
    name = " ";
    markss = 0;
    marks = new float[];
    result = new char;
}

Student::Student(int subjects)
{
    noOfSubject = subjects;
    rollNo = new int; // Dynamically allocated memory.
    *rollNo = 0;
    name = "....";
    markss = 0;
    result = new char;
}

Student::Student(const char *str)
{
    int noOfSubjects = strlen(str) + 1;
    result = new char[noOfSubjects];
    strcpy(result, str);
}

Student::Student(int rollNos, string names, float mark, char res)
{
    noOfSubject = 0;
    rollNo = new int;
    *rollNo = rollNos; // Dynamically allocated memory.
    name = names;
    markss = mark;
    result = new char;
    *result = res;
}
Student::Student(const Student &objstudent)
{
    cout << "Copy constructor called " << endl;
    noOfSubject = objstudent.noOfSubject;
    rollNo = new int; // Dynamically allocated memory.
    *rollNo = *(objstudent.rollNo);
    name = objstudent.name;
    markss = objstudent.markss;
    result = new char;
    *result = *(objstudent.result);
}
Student &Student::operator=(const Student &t)
{
    cout << "Assignment operator called " << endl;
    noOfSubject = t.noOfSubject;
    rollNo = new int; // Dynamically allocated memory.
    *rollNo = *(t.rollNo);
    name = t.name;
    markss = t.markss;
    result = new char;
    *result = *(t.result);
    return *this; // return the current class object.
}

Student::~Student()
{
    delete rollNo;
    cout << "free rollNo" << endl;
    // delete[] marks;
    // cout << "Free float" << endl;
    delete[] result;
    cout << "Free char" << endl;
    display();
}

/*char* Student::getValue() {
    return result;
}
void Student::setValue(int subjects, float mark) {
    if (subjects >= 0 && subjects < noOfSubject) {
        marks[subjects] = mark;
    }
}

float Student:: getValue(int subjects) {
    if (subjects >= 0 && subjects < noOfSubject) {
        return marks[subjects];
    }
    return 0.0f; //Return a default value if index is out of bounds
}*/
void Student::update()
{
    noOfSubject = noOfSubject + 1;
    *rollNo = *rollNo + 1;
    markss = markss + 1;
    name = "Raj";
}

void Student::display()
{
    cout << "Student take total subject is "
        << noOfSubject << " , roll No of student is "
        << *rollNo << " , the name of student is "
        << name << " the number of student in a subject "
        << markss << " the final result is " << *result << endl;
}

int main()
{
    Student objShallow(111, "Rituu", 78.9, 'P');
    objShallow.display();

    Student objShallow1(objShallow); // Copy constructor called implicit
    objShallow1.display();
    // The below created object is a example of Shollow copy
    Student objShallow3 = objShallow; // calls the copy constructor
    objShallow3.display();            // then copy is made through user defined COPY CONSTRUCTOR
    cout << endl;

    Student objShallow4;      // Implicit Copy assignment operator
    objShallow4 = objShallow; // calls the assignment operator.
    objShallow4.display();    // When copying the data of object after initialization then the
    cout << endl;             // copy is done through DEFAULT ASSIGNMENT OPERATOR

    cout << "The shallow copy is working here:" << endl;
    objShallow.update();
    objShallow.display();
    cout << endl;

    cout << "The deep copy is working here:" << endl;
    objShallow1.display();
    cout << endl;

    /*int n;
    std::cout << "Enter the number of subject: ";
    std::cin >> n;

    Student array(n);

    for (int i = 0; i < n; i++)
    {
        float value;
        std::cout << "Enter the number of each subject: " << i << ": ";
        std::cin >> value;
        array.setValue(i, value);
    }

    std::cout << "Number of each subject: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Number in subject " << i << ":";
        std::cout << " " << array.getValue(i) << endl;
    }
    std::cout << std::endl;

    // The destructor will automatically be called when the 'array' object goes out of scope

    const char *str = "You are Pass";
    Student pointer(str);

    std::cout << "The final result is: " << pointer.getValue() << std::endl;

    // The destructor will automatically be called when the 'pointer' object goes out of scope*/
    return 0;
}