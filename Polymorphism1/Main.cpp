#include "Polymorphism.h"

int main() 
{
	Student obj_Student(1001, "ABC");
	obj_Student.display();
	cout << endl;

	//Copy constructor
	Student obj_Student_Copy(obj_Student);
	obj_Student_Copy.display();
	cout << endl;

	//Operator operloading
	cout << "Assignement Operator operloading" << endl;
	Student obj_Student_Opr;
	obj_Student_Opr = obj_Student;
	obj_Student_Opr.display();
	cout << endl;

	//Increment operator 
	cout << "Increment operator overloading" << endl;
	Student obj_Stud_IO;
	int num = 5;
	cout << "Orignal value: " << num << endl;
	++num;
	cout << "Prefix After increment: " << num << endl;
	num++;
	cout<< "Postfix After increment: " << num << endl;
	cout << endl;
	//Function Overloading
	cout << "Function Overloading" << endl;
	Student obj_Stud;
	cout << obj_Stud.subMarks("Kumar", " Rituraj") << endl;
	obj_Stud.subMarks(78, 87);
	obj_Stud.subMarks(84.12f, 69);
	obj_Stud.subMarks(83.12f, 72.32f);
	cout << endl; 

	// Method overriding
	//Student obj_Stud;
	cout << "Method overriding" << endl;
	obj_Stud.showDetails();
	Exam obj_Exam;
	obj_Exam.showDetails();
	cout<<endl; 
	
	//Virtual Function
	/*cout << "Virtual Function" << endl;
	Student* ptr;
	Exam obj_Exam_V;
	ptr = &obj_Exam_V;
	ptr->showDetails(); 
	//delete ptr;


	//Virtual Destructor
	cout << endl << "Virtual Destructor" << endl;
	Student* bptr = new Exam;		// Upcasting
	delete bptr;
	cout << endl;

	//Pure virtual function
	cout << "Pure virtual function" << endl;
	School* obj_bptr_PV;
	Student obj_Student_PV;		   //Student class object
	obj_bptr_PV = &obj_Student_PV;
	obj_bptr_PV->showData();   
	Exam obj_Exam_PV;			//Exam class object
	obj_bptr_PV = &obj_Exam_PV;
	obj_bptr_PV->showData();
	cout << endl;*/

    //Public, Private and Protected Inheritance main function
	Exam obj_Exam_PPP;
	cout << "Public, Private and Protected Inheritance main function" << endl;
	cout << "Public member for given class is: " << obj_Exam_PPP.getPublic() << endl;
	cout << "Private member are not accesable" <<
		" in the derived class because the base "
		<<"class is privates / protected " /* << obj_Exam_PPP.getPrivate()*/<< endl;
	cout << "Protected member for given class is: " << obj_Exam_PPP.getProtected() << endl;
	return 0;
}