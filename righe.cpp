#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::ifstream f;
    std::string filename = "test.txt";
    f.open(filename, std::ifstream::in);
    if (!f.good())
        throw std::string("Non posso aprire il file dati");

    std::string testo;
    int line = 1;
    char c = f.get();
    std::cout << line << ": ";
    while (f.good())
    {
        std::cout << c;
        if (c == 10)
        {
            line++;
            std::cout << line << ": ";
        }
        c = f.get();
    }
}
