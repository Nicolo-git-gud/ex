#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::ifstream f;
    std::string filename = "test.txt";
    f.open(filename,std::ifstream::in);
     if (!f.good()) 
     throw std::string("Non posso aprire il file dati");
    
     std::string testo;
    int line = 1;
    while (getline(f,testo)) { 
     
        std::cout  <<line << " : " << testo << std::endl;
        line++;
    }

}

