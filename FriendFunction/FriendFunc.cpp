#include "FriendFunc.h"

void Friends::setData(int ids) {
	id = ids;
}
int Friends::getData() {
	return id;
}
void Friends :: setDataS(string Enames) {
	Ename = Enames;
}
void Friends::getDataS() {
	cout << "The name of employee is " << Ename << endl;
}
void Friends::findData(int ids, string Enames) {
	id = ids;
	Ename = Enames;
}
void Friends::display() {
	cout << "The id of Employee is " << id << endl;
	cout << "The name of Employee is " << Ename << endl;
}

Friends friendFunc(Friends o1, Friends o2) {
	Friends o3;
	o3.findData((o1.id), (o2.Ename));
	return o3;
}

int main() {
	Friends objFriend,objFriend1;
	int idN = 1001;
	objFriend.setData(idN);
	cout << "The id of employee is: " << objFriend.getData() << endl;
	objFriend.setDataS("Kumar");
	objFriend.getDataS();
	objFriend.findData(idN, "Ritu");
	objFriend.display();
	objFriend1.findData(idN, "Raj");
	objFriend1.display();

	return 0;
}