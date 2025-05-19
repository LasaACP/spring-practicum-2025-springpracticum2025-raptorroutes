#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    if (argc==3){
        std::string inp1 = argv[1];
        std::string inp2 = argv[2];
        cout << inp1 << inp2;
    } else{
        return 1;
    }
    return 0;
}