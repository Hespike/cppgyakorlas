/*Készítsd el az Ember osztályt. Egy emberről az alábbiakat tároljuk: nevét (nev), amely bárki számára szabadon elérhető kor (kor), 
amely szintén bárki számára elérhető vagyonát (vagyon), amely megmondja hány Ft-ja van az illetőnek. 
Ez csak az osztály és a gyerekosztályok számára legyen látható bankkártya számát (bankkartya_szam, szöveg),
amely csak az osztályból legyen elérhető lakcímét (lakcim), amely az osztályból és a gyerekosztályokból elérhető nemét (nem, egész szám), 
amely publikus betegségeinek nevét (betegsegek, legfeljebb 100 elemet tárolni képes tömb), 
amelyekről csak az ember tud. */

#include <string>

using namespace std;

class Ember{
public:
   string nev;
   unsigned int kor;
   int nem;
protected:
   int vagyon;
   string lakcim;
private:
   string bankkartya_szam;
   string betegsegek[100];
};
