#include <iostream>
#include <string>


int main(int argc, char* argv[]){

	if (argc < 2){
		std::cerr << "USAGE: " << argv[0] << " <inputfile> " << "\n";
		return -1;
	}
	std::string arg = argv[1];

	if (arg == "-v" || arg == "--version"){
		std::cout << "Chofee version 0.0.0 \n";
		return 0;
	}
	

	return 0;
}
