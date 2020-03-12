#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
/* *!
* Print the table ’s header to the terminal ( std :: cout ).
* @param fields_ Reference to the list of header fields to be printed .

*/


void writeData (const std::vector<int> fields_) {
	std::ofstream myfile;
	myfile.open("invertido.txt");

	for(int i{0};i < fields_.size();i++){
		myfile << fields_[(fields_.size() - i - 1)] << " ";
	}
			myfile.close();


}
int main () {
	std::vector< int > fieldNames;
	std::string filter;
	std::cout << "Type . to finish" << std::endl ;

	while(1){
		std::cin >> filter;
		if(filter == "."){
			break;
		}
		fieldNames.push_back(std::stoi(filter));
	}

	writeData( fieldNames );
	return EXIT_SUCCESS ;
}