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
	cout << "Argc:  " << argc << endl; // checking argc for the right value
	for (int index = 0; index < argc; index++)
		cout << "Index: " << index << " value: " << argv[index] << endl;

	if (argc < 2) { 
		cerr << "Need to provide a file name" << endl;
		return 0;
	}
	ifstream infile(argv[1]); // getting the filename for argv[1], opening the file properly
	if(infile.is_open()){  // reading the input from filename
		string line;
		int sumOfInnerList = 0;
	
		list<int> *innerList = new list<int> ();
		list<list<int> *> outer_list;
		
		while(getline(infile,line)) {
					stringstream ss(line);
			int totalSum = 0;
		
	
		do{
			int numbers;
			ss >> numbers;
			totalSum += numbers; //totalsum = totalsum + numbers
			cout << "Number is: " << numbers << endl;
			 (*innerList).push_back(numbers);
			 sumOfInnerList++; 
			
		} while(!ss.eof());
			outer_list.push_back(innerList);
	}	

	 cout << "List Counter: " << sumOfInnerList << endl; 
			 cout << "Size of the Outer List: " << sumOfInnerList << endl;
	for(auto iter = outer_list.begin(); iter != outer_list.end(); ++iter ){
		list <int> listOfInts (*(*iter));
		cout << "List " << listOfInts << "has" << endl;
		// how would you find the position for that list of integers, 
		//so that "List _" comes out with an actual # for the __?
	} 
	for(auto iter = innerList->begin(); iter != innerList->end(); ++iter){
		sumOfInnerList = *iter + sumOfInnerList;
		cout << "elements and sums to " << *iter + sumOfInnerList << endl;
		
		
	}


	infile.close(); // Closing the inputfile

	}
	else {
		cerr << " Unable to provide a file" << endl;
	}
	
	
	return 0;
}