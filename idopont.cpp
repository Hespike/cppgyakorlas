/* Az idopont függvény kiírja a paraméterben kapott értékek alapján időpontot. 
Bizonyos esetekben nem szeretnénk megadni egyes értékeket. Oldd meg, 
hogy lehessen az alábbi formákban is meghívni a függvényt: ev, honap, nap, ora, perc, masodperc. ev, honap, nap, ora, perc. A másodperc legyen 0. ev, honap, nap, ora.
A perc és másodperc legyen 0. ev, honap, nap. Az óra, perc és másodperc legyen 0. ev, honap. 
A nap legyen 1, a többi 0. ev. A hónap és nap legyen 1, a többi 0. paraméter nélkül. Ekkor az év legyen 1970, a többi a fent látható módon legyen inicializálva.*/

#include <iostream>

using namespace std;

void idopont(int ev = 1970, int honap = 1, int nap = 1, int ora = 0, int perc = 0, int masodperc = 0) {
   cout << ev << "." << honap << "." << nap << ". " << ora << ":" << perc << ":" << masodperc;
}
