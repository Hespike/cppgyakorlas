/*A harcosok harcolnak egymással. 
Készítsd el a gyoztes függvényt, amely paraméterben 2 harcos pointert vár, 
és visszaadja közülük azt, amelyik megnyeri a harcot. 
A harc lefolyása nagyon egyszerű: a két harcos egyszerre megtámadja egymást, azaz csökkentik az ellenfél életerejét a saját sebzésükkel.
Ehhez használd a tamad metódust. A harc akkor ér véget, 
amikor valamelyikük életereje 0 alá csökken. Ilyenkor az nyer, akinek több életereje maradt. Döntetlen esetén nullpointert adj vissza.*/

class Harcos {
   int eletero;
   int sebzes;

public:
   Harcos(int eletero, int sebzes) {
       this->eletero = eletero;
       this->sebzes = sebzes;
   }

   int get_eletero() const {
       return eletero;
   }

   int get_sebzes() const {
       return sebzes;
   }

   virtual void tamad(Harcos& kit) {
       kit.eletero -= sebzes;
   }

   bool el() {
       return eletero > 0;
   }

};

Harcos* gyoztes(Harcos* h1, Harcos* h2){
 while (h1->el() && h2->el()) {
     h1->tamad(*h2);
     h2->tamad(*h1);
 }

 if (h1->get_eletero() > h2->get_eletero() ){
         return h1;
     } else if (h2->get_eletero() > h1->get_eletero()){
         return h2;
     } else if(h1-> get_eletero() < 0 && h2-> get_eletero() < 0)  {
         return nullptr;
 }
};
/*
class Harcos {
   int eletero;
   int sebzes;
public:
   Harcos(int eletero, int sebzes) {
       this->eletero = eletero;
       this->sebzes = sebzes;
   }
   int get_eletero() const {
       return eletero;
   }
   int get_sebzes() const {
       return sebzes;
   }
   virtual void tamad(Harcos& kit) {
       kit.eletero -= sebzes;
   }
   bool el() {
       return eletero > 0;
   }
};
Harcos* gyoztes(Harcos* h1, Harcos* h2) {
   while (h1->el() && h2->el()) {
       h1->tamad(*h2);
       h2->tamad(*h1);
   }
   return h1->get_eletero() > h2->get_eletero() ? h1 : h1->get_eletero() < h2->get_eletero() ? h2 : nullptr;
}
*/
