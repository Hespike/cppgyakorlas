/* Amelyik fájl már nem kell, azt kitöröljük. 
Most nem fájlokat fogunk törölni, hanem szövegekből betűket. Oldd meg, hogy a -= operátor segítségével egy szövegből ki tudjunk vonni egy karaktert,
aminek hatására a szövegből az összes olyan karakter törlődik! pl.: string s = "macska"; s -= 'a'; cout << s;
Ebben az esetben a programnak a "mcsk" szöveget kell kiírnia. */

#include <iostream>
#include <string>

using namespace std;

void operator-=(string& szoveg, char betu){
   int pozicio;
   while ((pozicio = szoveg.find(betu)) != string::npos) {
       szoveg.erase(pozicio,1);
   }
}
/*
#include <iostream>
#include <string>
using namespace std;
void operator-=(string& a, char b) {
   int pos;
   while ((pos = a.find(b)) != string::npos) {
       a.erase(pos, 1);
   }
}
*/
