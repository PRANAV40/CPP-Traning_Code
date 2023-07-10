#include "FriendClass.h"
#include "FriendFunction.h"
#include "MemberFriendFunc.h"

void derivedFriendClass::display(baseFriendClass& objFriendClass)
{
	cout << "The value of Private Variable = "
		<< objFriendClass.private_variable << endl;
	cout << "The value of Protected Variable = "
		<< objFriendClass.protected_variable << endl;
}

int main() 
{
	baseFriendClass objBase;
	derivedFriendClass objDerived;
	objDerived.display(objBase);

	baseFriendFunc objFriend;
	friendFunction(objFriend);
	return 0;
}