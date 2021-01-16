#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char *argv[])
{
    std::ifstream f;
    const char *filename = argv[1];
    f.open(filename, std::ifstream::in);
    if (!f.good())
        throw std::string("Non posso aprire il file dati");

    int line = 1;
    char c = f.get();
    std::cout << line << ": ";
    while (f.good())
    {
        std::cout << c;
        if (c == '\n')
        {
            line++;
            std::cout << line << ": ";
        }
        c = f.get();
    }
}
