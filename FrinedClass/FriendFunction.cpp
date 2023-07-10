#include "FriendFunction.h"


// friend function definition
void friendFunction(baseFriendFunc& objFriend)
{
	cout << "The value of Private Variable = "
		<< objFriend.private_variable << endl;
	cout << "The value of Protected Variable = "
		<< objFriend.protected_variable;
}