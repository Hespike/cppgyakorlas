/* Sok különböző fajta patkány létezik, 
azonban a harmonikázó patkányok viszonylag ritkák. Készítsd el a Patkany struktúrát, 
amelyről az alábbi információkat tároljuk: a nevét (nev, szöveg) a színét (szin, szöveg) azt, hogy tud-e harmonikázni (tudHarmonikazni, logikai)
*/

#include <string>
#include <iostream>

using namespace std;

struct Patkany {
    char nev[15];
    char szin[15];
   bool tudHarmonikazni;
} ;
