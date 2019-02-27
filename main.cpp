/*	Project:    List of lists
	Name:       Darryl McCottrell
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1820 - Section 1
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>



using namespace std;

int main(int argc, char *argv[])
{
	// reading a inputfile
	cout << "Argc:  " << argc << endl;
	for (int index = 0; index < argc; index++)
		cout << "Index: " << index << " value: " << argv[index] << endl;

	if (argc < 2) {
		cerr << "Need to provide a file name" << endl;
		return 0;
	}
	ifstream infile(argv[1]);
	if(infile.is_open()){
		string line;
		while(getline(infile,line)) {
			cout << line << endl;
		}
		infile.close();
	}
	else {
		cerr << " Unable to provide a file" << endl;
	}
	
	string line;
	while(getline(cin,line)) {
		stringstream ss(line);
		do{
			int numbers;
			ss >> numbers;
			cout << "is: " << numbers << endl;
			// would the inner list begin here?


			
		} while(!ss.eof());
			{
				//would the outterlist begin here or outside the loop?
		}
	return 0;
}