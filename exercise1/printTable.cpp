#include <iostream>
#include <iomanip>
#include <vector>
/* *!
* Print the table ’s header to the terminal ( std :: cout ).
* @param fields_ Reference to the list of header fields to be printed .

*/
void printBoder(const std::vector<std::string> &fields_){
		for(short i{0};i<fields_.size();++i){
			std::cout <<"+";
			for(short j {0}; j < fields_[i].length();++j){
				std::cout << "-";
			}
		}
		std::cout <<"+" << std::endl;

}

void printHeaderBody(const std::vector<std::string> &fields_){
		for(short i{0};i<fields_.size();++i){
			std::cout << "|" << fields_[i];
		}
		std::cout << "|" << std::endl;
}

void printHeader ( const std::vector<std::string> &fields_) {

	printBoder(fields_);
	printHeaderBody(fields_);
	printBoder(fields_);

}
	
int main () {
	std::vector < std :: string > fieldNames = { " ITEM " , " QUANTIDADE " , " VALOR UNITARIO " };
	printHeader ( fieldNames ); // Imprimir cabecalho da tabela .
	return EXIT_SUCCESS ;
}