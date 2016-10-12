#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
const int maxPokusu=5;
int vyplnenePismeno (char, string, string&);

int main ()
{
string nazev;
char zadanePismeno;
int spatneOdpovedi=0;
string slovo;
string slova[] =
{
"programovani",
"konstanta",
"sibenice",
};

srand(time(NULL));
int n=rand()% 3;
slovo=slova[n];


string nezname(slovo.length(),'*');

cout << "\n\nVitejte ve hre Sibenice";
cout << "\n\nKazde pismeno hledaneho slova je zobrazeno hvezdickou";
cout << "\n\nMate " << maxPokusu << " pokusu.";
cout << "\n---------------------------------------------------------";

while (spatneOdpovedi < maxPokusu)
{
cout << "\n\n" << nezname;
cout << "\n\nHadej pismeno: ";
cin >> zadanePismeno;

if (vyplnenePismeno(zadanePismeno, slovo, nezname)==0)
{
    cout << endl << "Toto pismeno zde neni!" << endl;
spatneOdpovedi++;
int zbyvajiciPokusy = maxPokusu - spatneOdpovedi;
if (zbyvajiciPokusy == 0){

    cout << "+-------+" << endl;
    cout << "|       |" << endl;
    cout << "|       O" << endl;
    cout << "|      /|\\" << endl;
    cout << "|      / \\" << endl;
    cout << "|          " << endl;
    cout << "===========" << endl;

    cout << "\nSmula, byl jsi povesen!" << endl;
    cout << "Slovo bylo: " << slovo << endl;
}
else if (zbyvajiciPokusy == 1){

    cout << "+-------+  " << endl;
    cout << "|       |  " << endl;
    cout << "|       O  " << endl;
    cout << "|      /|\\" << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "===========" << endl;

}
else if (zbyvajiciPokusy == 2){

    cout << "+-------+  " << endl;
    cout << "|       |  " << endl;
    cout << "|       O  " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "===========" << endl;

}
else if (zbyvajiciPokusy == 3){

    cout << "+-------+  " << endl;
    cout << "|       |  " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "|          " << endl;
    cout << "===========" << endl;

}
else if (zbyvajiciPokusy == 4){


    cout << "           " << endl;
    cout << "           " << endl;
    cout << "           " << endl;
    cout << "           " << endl;
    cout << "           " << endl;
    cout << "           " << endl;
    cout << "===========" << endl;

}
}
else
{
cout << endl << "Uhodl jsi pismeno!" << endl;
}

cout << "Mate " << maxPokusu - spatneOdpovedi;
cout << " pokusu." << endl;


if (slovo==nezname)
{
cout << slovo << endl;
cout << "Gratuluji, vyhral jsi!";
break;
}
}

if (spatneOdpovedi == maxPokusu){

    cout << "\nProhral jsi!" << endl;
    cout << "Slovo bylo: " << slovo << endl;
}
cin.ignore();
cin.get();
return 0;
}


int vyplnenePismeno (char hadat, string tajneSlovo, string &hadaneSlovo)
{
int i;
int nalezeno=0;
int delka=tajneSlovo.length();
for (i = 0; i< delka; i++)
{

if (hadat == hadaneSlovo[i])
return 0;

if (hadat == tajneSlovo[i])
{
hadaneSlovo[i] = hadat;
nalezeno++;
}
}
return nalezeno;
}
