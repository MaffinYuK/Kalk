//файл program.cpp
#include <iostream>
#include "funcstup.h"
#include "funcsym.h"
using namespace std;
int i; double f,d;

int main()
{
    cout << "Vvedite pervoe chislo: ";
    cin >> f;
    cout << "Vvedite vtoroe chislo: ";
    cin >> d;
    cout << "Viberi deistvie: \n";
    cout << "1.Izmenit slozhi\n";
    cout << "2.Izmenit vichti\n";
    cout << "3.Izmenit ymnoizhi\n";
    cout << "4.Izmenit deli\n";
    cout << "Luboe chislo visti quit\n";
    cin >> i;
    system("cls");
    cout << "Deistvie:\n";
switch(i)
{
case 1:{cout <<f<<"+"<<d<<"=";
    cout << MySum(f, d) << endl;
    break;
    }
case 2:{cout <<f<<"-"<<d<<"=";
    cout << MySub(f, d) << endl;
    break;
    }
case 3:{cout <<f<<"*"<<d<<"=";
    cout << MyMul(f, d) << endl;
    break;
    }
case 4:{cout <<f<<"/"<<d<<"=";
    cout << MyDiv(f, d) << endl;
    break;
    }
default:{cout << "Spasi bo" << endl;
    break;
    }
}
system("pause");
return 0;
}

