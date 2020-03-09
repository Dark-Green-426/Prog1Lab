#include "Houses.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    Houses House1(-100,100);
    House1.print();
    system("pause");
    return EXIT_SUCCESS;
}