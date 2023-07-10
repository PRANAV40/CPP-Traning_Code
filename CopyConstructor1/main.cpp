#include "CopyConstructor.h"

int main() 
{
	//Student objShallow = Student(111, "Rituu", 78.9);		// Explicit  call of Constructoro
	//Object of Student class 
	Student obj_Student(111, "Rituu");
	obj_Student.display();
	
	Student obj_Student1(obj_Student);	       // Copy constructor called implicit
	obj_Student1.display();
	cout << endl;
											 //The below created object is a example of Shollow copy
	Student obj_Student3 = obj_Student;		//calls the copy constructor 
	obj_Student3.display();				   // then copy is made through user defined COPY CONSTRUCTOR
	cout << endl;
								
	Student objShallow4;	              //Implicit Copy assignment operator
	objShallow4 = obj_Student;	         // calls the assignment operator.
	objShallow4.display();				// When copying the data of object after initialization then the
	cout << endl;					   // copy is done through DEFAULT ASSIGNMENT OPERATOR

	cout << "The shallow copy is working here:" << endl;
	obj_Student.updateStud();
	obj_Student.display();
	cout << endl;

	cout << "The deep copy is working here:" << endl;
	obj_Student1.display();
	cout << endl;

	cout << "From here inheritance executed" << endl;
	//Single Inheritance obj
	cout << "Single Inheritance" << endl;
	//Object of Exam class for desfault constructor
	Exam obj_Exams;
	obj_Exams.updateStud();   //Student class
	obj_Exams.display();
	obj_Exams.showMarks(89.7);		//Exam class
	obj_Exams.showResult();
	cout << endl;

	//Constructor with parameter
	cout << "Constructor with parameter " << endl;
	//Object of Exam class for parameterised constructor
	Exam objExam1(90);
	cout << endl;

	//Student Class object pointer
	cout << "Student Class object pointer" << endl;
	Student* base_class_pointer = new Exam;
	base_class_pointer->var_base = 34;
	base_class_pointer->showValue();
	base_class_pointer->var_base = 3400;
	base_class_pointer->showValue();
	delete base_class_pointer;
	cout << endl;

	//Exam class object pointer
	cout << "Exam class object pointer" << endl;
	Exam* derived_class_pointer = new Exam(68);
	derived_class_pointer->var_base = 9448;
	derived_class_pointer->var_derived = 98;
	derived_class_pointer->showValue();
	delete derived_class_pointer;
	cout << endl;

	//Multilevel Inheritance obj
	cout << "Multilevel Inheritance" << endl;
	//Object of Left Exam class 
	leftExam objLeftExam;
	objLeftExam.updateStud();	    //Student class
	objLeftExam.display(); 
	objLeftExam.showMarks(88.9);   //Exam class 
	objLeftExam.showResult();
	objLeftExam.examLeft(34);		//leftExam class
	objLeftExam.showleftStd();
	cout << endl;

	//Multiple Inheritance obj
	cout << "Multiple Inheritance" << endl;
	//Object of Position in class 
	positionInClass obj_position_In_Class;
	obj_position_In_Class.updateStud();		//Student Class
	obj_position_In_Class.display();
	obj_position_In_Class.studentInclass(120);
	obj_position_In_Class.showNoOfStudent();
	//obj_position_In_Class.showMarks(90.0);   //Exam class
	//obj_position_In_Class.showResult();
	obj_position_In_Class.classPosition(3);   //positionInClass class
	obj_position_In_Class.showPosition();
	cout << endl;

	//Hybrid Inheritance
	cout << "Hybrid Inheritance" << endl;
	//Object of Number of Fail student class
	noOfFailStud obj_noOfFailStud;
	obj_noOfFailStud.studentInclass(120);  //noOfStud
	obj_noOfFailStud.showNoOfStudent();
	obj_noOfFailStud.updateStud();		//Student class
	obj_noOfFailStud.display();
	obj_noOfFailStud.showMarks(89);	//Exam class
	obj_noOfFailStud.showResult();
	obj_noOfFailStud.noOfFailStudentfun(23);   //noOfFailStud
	obj_noOfFailStud.showNoOfFailStud();
	cout << endl;
	
	//Hierarchical Inheritance
	cout << "Hierarchical Inheritance" << endl;
	//Object of Each student class
	Exam obj_Exam_Hier;
	obj_Exam_Hier.showMarks(87.89);
	obj_Exam_Hier.showResult();


	//Object of Fav Student class 
	favStudent obj_favStudent;
	obj_favStudent.updateStud();
	obj_favStudent.display();
	cout << endl;

	cout << "From here the float pointer array and char pointer is executed" << endl;
	int noOfSubject;
	cout << "Enter the number of subjects taken by the student: ";
	cin >> noOfSubject;

	Student obj_Student_Pointer(noOfSubject);
	for (int i = 0; i < noOfSubject; i++) {
		float marks;
		cout << "Enter the marks of subject" << i << ":";
		cin >> marks;
		obj_Student_Pointer.setValue(i, marks);
	}

	cout << "All subject marks: ";
	for (int i = 0; i < noOfSubject; i++) 
	{
		cout << obj_Student_Pointer.getValue(i) << " ";
	}
	cout << endl;

	const char* str = "You are Pass";
	Student pointer(str);
	cout << "The final result is: " << pointer.getValue() << endl;
	cout << endl;

	return 0;
}