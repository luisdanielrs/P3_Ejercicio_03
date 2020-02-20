#include <iostream>
#include "punto.h"
#include "pentagono.h"

using namespace std;

int main()
{
    Pentagono miPentagono;
    miPentagono.punto1(-5, 2);
    miPentagono.punto2(1, -4);
    miPentagono.punto3(5, 1);
    miPentagono.punto4(3, 4);
    miPentagono.punto5(-2,6);

cout << "El area del Pentagono es: " << miPentagono.Area() << endl;





    return 0;
}
