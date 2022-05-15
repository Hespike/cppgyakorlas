/* Ha az utcán sétálunk, akkor viszonylag nagy eséllyel szembe jöhet velünk egy intervallum. Most is ez történt. 
A találkozás örömére 2 feladatod van: Készítsd el a hossz metódust az Intervallum osztályban, 
ami visszaadja az intervallum hosszát Készítsd el az intervallum_krealas függvényt, amely egy 2D-s tömböt,
illetve annak méretét várja paraméterben és egy intervallumokból álló tömböt ad vissza. 
A tömb minden sora 2 elemet tartalmaz (0. és 1.), ezek alapján minden sorból hozz létre 1-1 intervallumot,
és tedd be őket egymás után az intervallumokat tároló tömbbe! A függvényed ezt a tömböt adja vissza! */

class Intervallum {
   double also{};
   double felso{};

public:
   Intervallum() {}

   Intervallum(double also, double felso){
       if (also > felso) {
           double tmp = also;
           also = felso;
           felso = tmp;
       }

       this->also = also;
       this->felso = felso;
   }

   double get_also() {
       return also;
   }

   double get_felso() {
       return felso;
   }

   double hossz(){
       return felso - also;
   }

};

Intervallum* intervallum_krealas(double tomb[][2], int meret) {
   Intervallum* intervallumok = new Intervallum[meret];
   for(int i = 0; i < meret; i++){
       intervallumok[i] = Intervallum(tomb[i][0],tomb[i][1]);
   }

   return intervallumok;
}
