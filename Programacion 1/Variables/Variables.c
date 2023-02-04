#include <iostream>

using namespace std;

int main()
{
    //Funci�n: Este programa tiene como objetivo monstrar los diferentes tipos de variables en c++
    //Autor:  daguilae
    //Fecha de creaci�n: 01 ene 2023
    //Fecha de �ltima modificaci�n: 23 ene 2023
    int day = 03;
    int month = 11;
    int year = 1989;
    int decada=2020;

    cout << "Naci el: ";
    cout << day << endl;
    cout << "," << endl;
    cout << month << endl;
    cout << "," << endl;
    //cout << year << endl;

    year = -1990;
    cout << year << endl;

    bool isSleepy = true;
    bool isHungry = false;

    cout << "is Hungry? ";
    cout << isHungry << endl;

    isHungry = isSleepy;

    cout << isHungry << endl;


    float pi = 3.1416f;

    cout << "El area del circulo es: ";
    cout << pi << endl;

    char firstChar = 'h';
    char secondChar = 'o';
    char thirdChar = 'l';
    char fourthChar = 'a';

    cout << firstChar << secondChar << thirdChar << fourthChar << endl;

    return 0;
}
