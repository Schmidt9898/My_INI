#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;


int main()
{
/*
	ofstream MyFile("filename.txt");

	// Write to the file
	MyFile << "Files can be tricky, but it is fun enough!";

	// Close the file
	MyFile.close();

*/

// Create a text string, which is used to output the text file
string line;

// Read from the text file
ifstream MyReadFile("example.ini");

// Use a while loop together with the getline() function to read the file line by line
while (std::getline(MyReadFile, line)) {
	// Output the text from the file

	if(line == "")
		{
			cout<<"---skip empty line---\n";
			continue;
		}
	if(line[0] == ';')
	{
		cout<<"comment: " << line <<"\n";
		continue;
	}
	if(line[0] == '[')
	{
		cout<<"---section start : " << line <<"\n";
		continue;
	}

	istringstream ss(line);
        while(!ss.eof())
        {
			string t;
			ss >> t;
            cout << t << "\n";
        }
}

// Close the file
MyReadFile.close();
}
