#include <iostream>
using namespace std;

int main() {
 char a;
 cout << "Enter a character: ";
 cin >> a;
 cout << "ASCII Value of " << a << " is " << int(a);
 return 0;
}
// // #include <iostream>
// // #include <fstream>
// // #include <thread>

// // using namespace std;

// // void copyFile(const string& source, const string& destination) {
// //   ifstream input(source, ios::binary);
// //   ofstream output(destination, ios::binary);

// //   char buffer[1024];
// //   while (input.read(buffer, sizeof(buffer))) {
// //     output.write(buffer, input.gcount());
// //   }
// // }

// // int main() {
// //   string source = "source.txt";
// //   string destination = "destination.txt";

// //   int numThreads = 4;
// //   vector<thread> threads;

// //   for (int i = 0; i < numThreads; i++) {
// //     threads.push_back(thread(copyFile, source, destination));
// //   }

// //   for (auto& thread : threads) {
// //     thread.join();
// //   }

// //   cout << "File copied successfully!" << endl;

// //   return 0;
// // }
// #include<iostream>
// using namespace std;

// class Node {
// public:
// 	int data;
// 	Node* left;
// 	Node* right;
// };
// class BinaryTree
// {
// public:
// 	Node* root = NULL;
// 	Node* create(int item);
// 	Node* insertion(int value);
// 	void inOrderTrav(Node* root);
// 	void postOrderTrav(Node* root);
// 	void preOrderTrav(Node* root);
// };

// //Here we create the node of tree
// Node*  BinaryTree:: create(int item)
// {
// 	Node* newNode = new Node;
// 	newNode->data = item;
// 	newNode->left = newNode->right = NULL;
// 	return newNode;
// }
// //here we insert the smallest node in left side and the greates node right side of root node
// Node* BinaryTree::insertion(int value)
// {
// 	if (root == NULL)
// 		root = create(value);
// 	if (value <= root->data)
// 		root->left = insertion(value);
// 	else
// 		root->right = insertion(value);
// 	return root;
// }

// //Here we traverse the binary tree in Inorder 
// void BinaryTree::inOrderTrav(Node* root) {
// 	if (root == NULL)
// 		return;

// 	inOrderTrav(root->left);     //root->left
// 	cout << root->data<<" ";
// 	inOrderTrav(root->right);		//root->right
// }
// void BinaryTree::postOrderTrav(Node* root)
// {
// 	if (root == NULL)
// 		return;
// 	postOrderTrav(root->left);		//root->left
// 	postOrderTrav(root->right);		//root->right
// 	cout << " " << root->data << " ";
// }
// void BinaryTree::preOrderTrav(Node* root) {
// 	if (root == NULL)
// 		return;
// 	cout << root->data <<" ";
// 	preOrderTrav(root->left);
// 	preOrderTrav(root->right);
// }
// int main() {

//     BinaryTree objBinary;
	
// 	objBinary.insertion(40);
// 	objBinary.insertion(30);
// 	objBinary.insertion(50);
// 	objBinary.insertion(25);
// 	objBinary.insertion(35);
// 	objBinary.insertion(15);
// 	objBinary.insertion(28);
// 	objBinary.insertion(45);
// 	objBinary.insertion(60);
// 	objBinary.insertion(55);
// 	objBinary.insertion(70);

// 	cout << "The inorder traversal of the given binary tree is - ";
// 	objBinary.inOrderTrav(objBinary.root);
// 	cout <<endl<< "The postorder traversal of the given binary tree is - ";
// 	objBinary.postOrderTrav(objBinary.root);
// 	cout <<endl<< "The preorder traversal of the given binary tree is - ";
// 	objBinary.preOrderTrav(objBinary.root);
// 	return 0;
// }
// #include <iostream>
// using namespace std;
// // Node class for binary tree
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int value) {
//         data = value;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// // Binary Tree class
// class BinaryTree {
// private:
//     Node* root;

// public:
//     BinaryTree() {
//         root = nullptr;
//     }

//     Node* create(int item) {
//         Node* newNode = new Node(item);
//         return newNode;
//     }

//     Node* insertion(Node* root, int value) {
//         if (root == nullptr) {
//             root = create(value);
//             return root;
//         }

//         if (value <= root->data)
//             root->left = insertion(root->left, value);
//         else
//             root->right = insertion(root->right, value);

//         return root;
//     }

//     void insert(int value) {
//         root = insertion(root, value);
//     }

//     void inOrderTraversal(Node* root) {
//         if (root == nullptr)
//             return;

//         inOrderTraversal(root->left);
//         std::cout << root->data << " ";
//         inOrderTraversal(root->right);
//     }

//     void preOrderTraversal(Node* root) {
//         if (root == nullptr)
//             return;

//         std::cout << root->data << " ";
//         preOrderTraversal(root->left);
//         preOrderTraversal(root->right);
//     }

//     void postOrderTraversal(Node* root) {
//         if (root == nullptr)
//             return;

//         postOrderTraversal(root->left);
//         postOrderTraversal(root->right);
//         std::cout << root->data << " ";
//     }

//     void traverseInOrder() {
//         std::cout << "Inorder traversal: ";
//         inOrderTraversal(root);
//         std::cout << std::endl;
//     }

//     void traversePreOrder() {
//         std::cout << "Preorder traversal: ";
//         preOrderTraversal(root);
//         std::cout << std::endl;
//     }

//     void traversePostOrder() {
//         std::cout << "Postorder traversal: ";
//         postOrderTraversal(root);
//         std::cout << std::endl;
//     }
// };

// int main() {
//     BinaryTree tree;

//     tree.insert(40);
//     tree.insert(30);
//     tree.insert(50);
//     tree.insert(25);
//     tree.insert(35);
//     tree.insert(15);
//     tree.insert(28);
//     tree.insert(45);
//     tree.insert(60);
//     tree.insert(55);
//     tree.insert(70);

//     tree.traverseInOrder();
//     tree.traversePreOrder();
//     tree.traversePostOrder();

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int decodeToken(string token) {
//   int numWays = 0;

//   // Iterate over all possible groupings of the digits in the token.
//   for (int i = 0; i < token.length(); i++) {
//     for (int j = i; j < token.length(); j++) {
//       // Check if the current grouping is valid.
//       if (isdigit(token[i]) && isdigit(token[j])) {
//         // Convert the grouping to a string and then to a letter.
//         string letter = token.substr(i, j - i + 1);
//         int letterCode = stoi(letter);
//         char letterChar = letterCode + 'A' - 1;

//         // If the letter is valid, increment the number of ways.
//         if (letterChar >= 'A' && letterChar <= 'Z') {
//           numWays++;
//         }
//       }
//     }
//   }
//   return numWays;
// }

// int main() {
//   string token = "12";
//   cout << "The number of ways to decode " << token << " is " << decodeToken(token) << endl;

//   token = "226";
//   cout << "The number of ways to decode " << token << " is " << decodeToken(token) << endl;

//   return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int numDecodings(string s) {
//         int n = s.size();
//         vector<int> dp(n+1);
//         dp[n] = 1;
//         for(int i=n-1;i>=0;i--) {
//             if(s[i]=='0') dp[i]=0;
//             else {
//                 dp[i] = dp[i+1];
//                 if(i<n-1 && (s[i]=='1'||s[i]=='2'&&s[i+1]<'7')) dp[i]+=dp[i+2];
//             }
//         }
//         return s.empty()? 0 : dp[0];   
//     }
// };

// int main() {
//     Solution solution;
//     string input;
//     cout<<"Enter the Token: ";
//     cin >> input;
//     int result = solution.numDecodings(input);
//     cout <<"\"" << input << "\""<< " could be decoded as " << result << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>

// int numDecodings(const std::string& token) {
//     int n = token.length();
//     std::vector<int> dp(n + 1, 0);
//     dp[n] = 1;

//     // Dynamic programming bottom-up approach
//     for (int i = n - 1; i >= 0; i--) {
//         // Check if the current character is '0'
//         if (token[i] == '0') {
//             dp[i] = 0;
//         } else {
//             // Valid one-digit decoding
//             dp[i] = dp[i + 1];

//             // Valid two-digit decoding
//             if (i < n - 1 && (token[i] == '1' || (token[i] == '2' && token[i + 1] <= '6'))) {
//                 dp[i] += dp[i + 2];
//             }
//         }
//     }

//     return dp[0];
// }

// int main() {
//     std::string token = "12";
//     int ways = numDecodings(token);
//     std::cout << "Number of ways to decode " << token << ": " << ways << std::endl;

//     token = "226";
//     ways = numDecodings(token);
//     std::cout << "Number of ways to decode " << token << ": " << ways << std::endl;

//     token = "06";
//     ways = numDecodings(token);
//     std::cout << "Number of ways to decode " << token << ": " << ways << std::endl;

//     token = "78265";
//     ways = numDecodings(token);
//     std::cout << "Number of ways to decode " << token << ": " << ways << std::endl;

//     token = "13264530";
//     ways = numDecodings(token);
//     std::cout << "Number of ways to decode " << token << ": " << ways << std::endl;

//     return 0;
// }
