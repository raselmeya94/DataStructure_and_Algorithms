#include <bits/stdc++.h>
using namespace std;
/*`cin.peek()` is a function in C++ that returns the next character in the input stream without removing it from the input stream.
This function can be used to inspect the next character in the input stream, for example, to check if it is a newline character.
*/
int main()
{
	vector<int> array;	// array define
	int sz;	/// input value from File
	while (cin >> sz)	/// continously get input
	{
		array.push_back(sz);	// push_back into the array 
		if (cin.peek() == '\n')	// cin.peek()
		{
			cout << "The elements of the array are: " << endl;
			for (int val: array)
			{
				cout << val << " ";
			}

			cout << endl << endl;
			array.clear();	// array clear for new upcoming array
		}
	}
}
