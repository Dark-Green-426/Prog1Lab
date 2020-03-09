#include "Houses.h"

Houses::Houses()
{
    this->room = 0;
    this->s = 0;
}

Houses::Houses(int room, float s) 
{
    if (room < 1) { 
        cout << "Невірно !!!" << endl; 
        this->room = 0;
        this->s = 0;
        return;
    }
    if (s < 1) {
        cout << "Невірно !!!" << endl;
        this->room = 0;
        this->s = 0;
        return;
    }
    this->room = room;
    this->s = s;

}

void Houses::print()
{
    cout << "Room:" << this->room << endl;
    cout << "S:" << this->s << endl;
}

