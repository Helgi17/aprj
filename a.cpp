#include <fstream>
#include <iostream>
#include <string>
#include <map>


using namespace std;

int scan(string str) {
	int pos = 0;
	while (pos<str.size()) {
		char ch = str.c_str()[pos];
		switch (ch) {
			case '(':
			case ')':
			case '.':
			case ';':
			case '=':
			case '-':
			case '+':
			case ':':
			case '%':
			case '{':
			case '}':
			case ' ': cout<<pos<<endl;
				break; 
		}
		pos++;
	}
}

int main(int argc, char** argv)
{
	string filename("a.txt");
	if (argc>1) filename = string(argv[1]);
	string str;	
	ifstream ifs(filename.c_str());
	while (!ifs.eof()) {
		getline(ifs, str);
		scan(str);
		cout<<"string: "<<str<<endl;
	}
	return 0;
}
