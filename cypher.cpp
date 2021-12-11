#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;



int main()
{

    std::cout << "This is cypher.cpp type a letter you would like to decypher:";
    for (int i = 0; i <=1000000; i++){

    string x;
    cin >> x;

    if(x == "a"){
        std::cout << "=e\n";

    }
    if(x == "c"){
        std::cout << "=i\n";

            }
    if(x == "d"){
        std::cout << "=t\n";

            }
    if(x == "e"){
        std::cout << "=j\n";

            }
    if(x == "f"){
        std::cout << "=c\n";

            }
    if(x == "g"){
        std::cout << "=k\n";

            }
    if(x == "h"){
        std::cout << "=r\n";

            }
    if(x == "i"){
        std::cout << "=x\n";

            }
    if(x == "l"){
        std::cout << "=y\n";

            }
    if(x == "m"){
        std::cout << "=z\n";

            }
    if(x == "n"){
        std::cout << "=a\n";

            }
    if(x == "r"){
        std::cout << "=b\n";

            }
    if(x == "s"){
        std::cout << "=p\n";

            }
    if(x == "u"){
        std::cout << "=u\n";

            }
    if(x == "z"){
        std::cout << "=d\n";

            }
    std::cout << "next letter";
    }

    return 0;
}
