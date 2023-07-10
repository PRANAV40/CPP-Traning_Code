#include "FloatCharPointer.h"

Student::Student(const char* str)
{
	int noOfSubjects = strlen(str) + 1;
	result = new char[noOfSubjects];
	strcpy(result, str);
}
Student::~Student()
{
	delete[] marks;
	cout << "Free float" << endl;
	delete[] result;
	cout << "Free char" << endl;
}
const char* Student::getValue() const
{
	return result;
}
Student::Student(int n)
{
	noOfSubject = n;
	marks = new float[noOfSubject];
}
void Student:: setValue(int index, float value)
{
	if (index >= 0 && index < noOfSubject)
	{
		marks[index] = value;
	}
}
float Student:: getValue(int index)
{
	if (index >= 0 && index < noOfSubject)
	{
		return marks[index];
	}
	return 0.0f; // Return a default value if index is out of bounds
}
int main()
{
	int n;
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

	const char* str = "You are Pass";
	Student pointer(str);

	std::cout << "The final result is: " << pointer.getValue() << std::endl;

	// The destructor will automatically be called when the 'pointer' object goes out of scope
	return 0;
}