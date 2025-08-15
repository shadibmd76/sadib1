
#include <iostream>
using namespace std;

class Example {
public:
    int a;
    int b;

    Example add(Example Ea, Example Eb)
    {
        Example Ec,Et;
        Et.a = Ea.a;
        Ea.a = Eb.a;
        Eb.a = Et.a;

        Et.b = Ea.b;
        Ea.b = Eb.b;
        Eb.b = Et.b;

        Ec.a = Ea.a + Eb.a;
        Ec.b = Ea.b - Eb.b;
        return Ec;
    }
};
int main()
{
    Example E1, E2, E3;

    E1.a = 50;
    E2.a = 100;
    E3.a = 0;


    E1.b = 2 * E1.a;
    E2.b = 2 * E2.a;
    E3.b = 2 * E3.a;





    cout << "Initial values: "<< endl
         << "Value of object 1: " << E1.a <<" and " << E1.b << endl
         << "Value of object 2: " << E2.a <<" and " << E2.b << endl
         << "Value of object 3: " << E3.a <<" and "  << E3.b << endl
         << endl;

    E3 = E3.add(E1, E2);


    cout << "New values: "<< endl
         << "Value of object 1: " << E1.a <<" and " << E1.b << endl
         << "Value of object 2: " << E2.a <<" and " << E2.b << endl
         << "Value of object 3: " << E3.a <<" and " << E3.b<< endl
         << endl;

    return 0;
}
