#include "prototype.h"

int main(){

Cube cube;

std::string key = "1:u:u:r:d";
std::string line = "MasrnreAgaryan";


std::cout << cube.StartEncoding(line,key) << std::endl << std::endl;
// std::cout << cube.StartEncoding(cube.get_coded_line(),cube.get_key_for_decryption()) << std::endl << std::endl;


    return 0;
}