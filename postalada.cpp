/* Készítsük el a Postalada struktúrát, amelyről az alábbi adatokat tároljuk: a postaláda színét (szin) a postaládában lévő leveleket (levelek). */

#include <iostream>
#include <string>

using namespace std;

struct Level {
    char felado[100];
    char cimzett[100];
    int datum;
};

struct Postalada {
    char szin[100];
    Level levelek[100];
};
