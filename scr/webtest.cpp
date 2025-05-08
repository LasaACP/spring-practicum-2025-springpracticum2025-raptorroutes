#include <iostream>
#include <string>

int main(int argc, char* argv[]){
    if (argc!=2){
        return 1;
    }
    std::string inp = argv[1];
    std::cout << inp;
    return 0;
}