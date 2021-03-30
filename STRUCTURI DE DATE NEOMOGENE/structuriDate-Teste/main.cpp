//Variabila s memorează simultan următoarele date despre fiecare dintre cele 20 de specii de animale
//dintr-o rezervație: un cod, reprezentând specia, numărul de exemplare din specia respectivă și vârstele
//acestora. În rezervație sunt maximum 10 exemplare din fiecare specie. Știind că expresiile C/C++ de
//mai jos au ca valori numere naturale și reprezintă codul și numărul de exemplare din prima specie,
//respectiv vârsta celui de al 4-lea exemplar din această specie, scrieți definiția unei structuri cu eticheta
//specie, care permite memorarea datelor despre o specie, și declarați corespunzător variabila s.
//s[0].cod s[0].nrExemplare s[0].varsta[3]

#include <iostream>
using namespace std;

struct specie
{
    int cod, nrExemplare, varsta[10];

} s[20];

int main()
{

    return 0;
}

//Variabila fig memorează date specifice unui cerc: coordonatele reale (abscisa și ordonata), în planul
//xOy, ale centrului cercului, precum şi lungimea razei acestuia. Știind că expresiile C/C++ de mai jos au
//ca valori numere reale reprezentând datele specifice ale cercului, scrieți definiția unei structuri cu
//eticheta cerc, care permite memorarea datelor precizate, și declarați corespunzător variabila fig.

#include <iostream>
using namespace std;

struct cerc
{
    struct
    {
        double x,y;
    } centru;
    double raza
} fig

int main()
{

    return 0;
}


//Variabila p memorează date despre un poliedru regulat: numărul de vârfuri, lungimea muchiei și două
//unghiuri specifice (dintre o față și o muchie, respectiv dintre două fețe). Știind că expresiile C/C++ de
//mai jos au ca valori un număr natural reprezentând numărul de vârfuri ale poliedrului, și numerele reale
//reprezentând lungimea muchiei, respectiv cele două unghiuri specifice, scrieți definiția unei structuri cu
//eticheta poliedru, care permite memorarea datelor precizate, și declarați corespunzător variabila p

struct poliedru {
    int NrVarfuri;
    double Muchie;
    struct {
    double FataMuchie,FataFata;
    }Unghi;
}p;

//Variabila s memorează simultan numărul de soluții complexe ale unei ecuații (număr natural din
//intervalul [2,102)) și soluțiile propriu-zise (partea reală și partea imaginară, numere reale). Știind că
//expresiile C/C++ de mai jos au ca valori numărul de soluții ale unui ecuații, partea reală, respectiv
//partea imaginară a primei sale soluții, scrieți definiția unei structuri cu eticheta ecuatie, care permite
//memorarea datelor despre soluțiile unei ecuații, și declarați corespunzător variabila s


struct ecuatie {
int numar;
struct{
double pre,pim;
}
solutie[100];
}s;



//Fiecare dintre variabilele A și B, declarate alăturat, memorează coordonatele
//(x abscisa, iar y ordonata) câte unui punct în sistemul de coordonate xOy. Indicați
//o expresie C/C++ care are valoarea 1 dacă și numai dacă segmentul cu
//extremitățile în punctele corespunzătoare variabilelor A și B intersectează axa Oy a
//sistemului de coordonate

struct punct {
int x,y;}A,B;
R: a. A.x*B.x<=0


//Variabila c memorează simultan numărul de cărți dintr-o bibliotecă (număr natural din intervalul
//[3,102)) și date despre fiecare carte (titlu și autor, șiruri de cel mult 20 de caractere). Expresiile C/C++
//de mai jos au ca valori numărul de cărți, titlul și numele autorului celei de a treia cărți. Scrieți definiția
//unei structuri cu eticheta biblio, care permite memorarea datelor despre o bibliotecă, și declarați
//corespunzător variabila c

struct biblio {
    int numar;
struct{
    char titlu[20],autor[20];
}carte[100];
}c;


//Variabila e este declarată alăturat. Indicați o instrucțiune de
//atribuire corectă din punctul de vedere sintactic.

struct elev
{ int cod;
char initiala;
 struct
 { int nota1,nota2;
 }note;
}e;

c. e.cod=e.initiala-’A’;


//Variabila s memorează simultan următoarele date despre fiecare dintre cele 20 de spectacole din
//cadrul unei stagiuni: un cod, numărul de actori și vârstele acestora. La un spectacol sunt maximum 10
//actori. Expresiile C/C++ de mai jos au ca valori numere naturale și reprezintă codul primului spectacol,
//numărul de actori care joacă în acest spectacol, respectiv vârsta celui de al 5-lea astfel de actor. Scrieți
//definiția unei structuri cu eticheta spectacol, care permite memorarea datelor despre un spectacol, și
//declarați corespunzător variabila s.


struct spectacol {
int cod, nrActori,varsta[10];
}s[20];


//Variabila s memorează date specifice despre o seră: numărul de specii de flori (număr natural din
//intervalul [3,102)) și date despre fiecare specie (denumire științifică și denumire populară, șiruri de cel
//mult 20 de caractere). Expresiile C/C++ de mai jos au ca valori numărul de specii de flori, denumirea
//științifică, respectiv denumirea populară a celei de a patra specii. Scrieți definiția unei structuri cu
//eticheta sera, care permite memorarea datelor despre o seră, și declarați corespunzător variabila s.


struct sera{
    int numar;
    struct{char denumireStiintifica[20],denumirePopulara[20];
          }specie[100];
}s;


//Variabila f memorează simultan următoarele date despre fiecare dintre cele 20 de specii de flori dintr-o
//florărie: un cod, reprezentând specia, numărul de varietăți ale speciei respective și numărul de
//exemplare din fiecare dintre acestea. În florărie sunt maximum 10 varietăți din fiecare specie. Știind că
//expresiile C/C++ de mai jos au ca valori numere naturale și reprezintă codul și numărul de varietăți ale
//primei specii, respectiv numărul de exemplare din cea de a 4-a varietate din această specie, scrieți
//definiția unei structuri cu eticheta flori, care permite memorarea datelor despre o specie de flori, și
//declarați corespunzător variabila f.

struct flori{
    int cod, nrVarietati, nrExemplare[10];
}f[20];


//Variabila c memorează raza și coordonatele (abscisa și ordonata), în planul xOy, ale centrului unui
//cerc. Știind că expresiile C/C++ de mai jos au valori reale, reprezentând raza, respectiv coordonatele
//centrului cercului, scrieți definiția unei structuri cu eticheta cerc, care permite memorarea datelor
//precizate, și declarați corespunzător variabila c.

struct cerc {
    struct{
    double x,y;}cerc;
    double raza;
}c;

//Variabila r memorează simultan următoarele date despre fiecare dintre cele 20 de rase de porumbei
//dintr-o volieră: un cod, reprezentând rasa, numărul de exemplare din rasa respectivă și vârstele
//acestora. În volieră sunt maximum 10 exemplare din fiecare rasă. Știind că expresiile C/C++ de mai jos
//au ca valori numere naturale și reprezintă codul și numărul de exemplare din prima rasă, respectiv
//vârsta celui de al 4-lea exemplar din această rasă, scrieți definiția unei structuri cu eticheta rasa, care
//permite memorarea datelor despre o rasă de porumbei, și declarați corespunzător variabila r


struct rasa{
int cod,nrExemplare,varsta[10];
}r[20];

//Fiecare dintre variabilele A și B, declarate alăturat, memorează coordonatele
//pozitive (x abscisa, iar y ordonata) ale câte unui punct în sistemul de coordonate
//xOy, extremități ale unui segment. Indicați o expresie C/C++ care are valoarea 1
//dacă și numai dacă cel puțin una dintre extremitățile segmentului precizat este în
//originea sistemului de coordonate xOy.

struct punct
{ int x,y;
} A,B;
a. (A.x+A.y)*(B.x+B.y)==0


//Variabila ob memorează simultan următoarele date despre un obiectiv turistic din evidența unei agenții: un
//cod și o perioadă din an în care se recomandă să fie vizitat, formată din zile consecutive, între două date
//(ziua și luna de început, respectiv ziua și luna finală). Expresiile C/C++ de mai jos au ca valori numere
//naturale și reprezintă codul obiectivului, ziua și luna de început, respectiv ziua și luna finală a perioadei
//recomandate pentru vizitarea acestui obiectiv. Scrieți definiția unei structuri cu eticheta obiectiv, care
//permite memorarea datelor despre un obiectiv turistic, și declarați corespunzător variabila ob.


struct obiectiv{
int cod;
struct{
int zi,luna;
}dataInceput,dataFinal;
}ob;
















