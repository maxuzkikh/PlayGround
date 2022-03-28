// CPP program for the above approach
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

// Driver Code
int main()
{
	string text = "aabbccabadef";
	char* char_arr;
	char_arr = &text[0];
	int n = 0;

	for (int i = 0; i < text.length(); i++) {
			if (char_arr[i] == 'a' || char_arr[i] == 'a') {
				char_arr[i] = 'b';
				n++;
			}
	}

	cout << text << endl; 
	cout << n << endl;
	system("pause>0");
	return 0;
}
