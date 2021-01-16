#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{

    std::ifstream f;
    const char *b = argv[1];
    f.open(b, std::ifstream::in);
    if (!f.good())
        throw std::string("Non posso aprire il file dati");
    char c = f.get();
    int graffa = 0;
    while (f.good())
    {

        if (c == '{')
            graffa++;
        if (c == '}')
            graffa--;
        if (c == '\n')

        {
            char d = f.get();
            if (d == 32)
            {
                while (d == 32)
                    d = f.get();
            }

            if (d == '}')
            {
                graffa--;
                std::cout << c;
                for (int i = 0; i < graffa; i++)

                    std::cout << "    ";
                std::cout << d;
            }
            else if (d == '{')
            {
                std::cout << c;
                graffa++;
                std::cout << d;
            }

            else
            {
                std::cout << c;
                for (int i = 0; i < graffa; i++)
                    std::cout << "    ";

                std::cout << d;
            }
        }
        else
            std::cout << c;

        c = f.get();
    }
}