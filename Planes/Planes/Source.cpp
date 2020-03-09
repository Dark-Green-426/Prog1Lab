
#include "Planes.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    Planes First;
    First.Set("Autugiro", 3.5, 1000);
    First.Print();
    return EXIT_SUCCESS;
}

