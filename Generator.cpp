#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));

    int n;

    while(true)
    {
        cout << "Unesite ukupan broj pitanja: ";
        cin >> n;

        if(n == -1)
            break;

        if(n < 3)
        {
            cout << "Najmanji broj pitanja je 3." << endl;
            continue;
        }

        cout << rand() % (n/3) + 1 << ", "
             << rand() % (n/3) + (n/3) + 1 << ", "
             << rand() % (n/3) + (2*n/3) + 1 << endl;
    }

    return 0;
}