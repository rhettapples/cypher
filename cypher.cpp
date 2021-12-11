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

    if(x == "e"){
        std::cout << "=a\n";

    }
    if(x == "i"){
        std::cout << "=c\n";

            }
    if(x == "t"){
        std::cout << "=d\n";

            }
    if(x == "j"){
        std::cout << "=e\n";

            }
    if(x == "c"){
        std::cout << "=f\n";

            }
    if(x == "k"){
        std::cout << "=g\n";

            }
    if(x == "r"){
        std::cout << "=h\n";

            }
    if(x == "x"){
        std::cout << "=i\n";

            }
    if(x == "y"){
        std::cout << "=l\n";

            }
    if(x == "z"){
        std::cout << "=m\n";

            }
    if(x == "a"){
        std::cout << "=n\n";

            }
    if(x == "b"){
        std::cout << "=r\n";

            }
    if(x == "p"){
        std::cout << "=s\n";

            }
    if(x == "u"){
        std::cout << "=u\n";

            }
    if(x == "d"){
        std::cout << "=z\n";

            }
    if(x == "q"){
        std::cout << "=v\n";
    }
    std::cout << "next letter";
    }

    return 0;
}
