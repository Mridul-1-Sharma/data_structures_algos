#include<iostream>
using namespace std;

// convert uppercase and lowercase without using toUpper and toLower
// we can use the ascii values to convert them
// for example, A is 65 in acsii value, so plus 32 is 97 and 97 is a in ascii
string check_Upper_Lower(string& str);

int main()
{
	string test = "How are You. toDaY, it IS a Good daY. I hope you can do wELL in HacktOberFest";

	cout << test << endl;
}

string check_Upper_Lower(string& str)
{
	int size = str.size();

	for (int i = 0; i < size; i++)
	{
		int ascii = (int)str[i];
			if (ascii >= 65 && ascii <= 90)
				str[i] = static_cast<char>(ascii + 32);
			
			if (ascii >= 97 && ascii <= 122)
				str[i] = static_cast<char>(ascii + 32);
	}

	return str;
}