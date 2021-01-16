#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{

    std::ifstream f,s;
    const char *a = argv[1];
    const char *b = argv[2];
    f.open(a, std::ifstream::in);
    s.open(b, std::ifstream::in);
    if (!f.good() || !s.good())
        throw std::string("Non posso aprire il file dati");
    char c = f.get();
    char d = s.get();
    bool e = true;
    while (f.good() || s.good())
    {
        if( !(f.good() && s.good())){
        e = false;
        break;
        }
        if( (f.good() && !s.good())){
        e = false;
        break;
        }

        if (d == c){
            c = f.get();
            d = s.get();
        }
        else{
        e = false;
        break;
        }        
    }
std::cout << "I file aperti sono uguali? " << std::boolalpha << e;
}