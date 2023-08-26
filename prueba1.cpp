#include <iostream>

using namespace std;

const double PTS_EUR = 166.386;
const double EUR_POUND = 0.86;

void pesetasaEuros (){
// pts/€ calculator
double euros, pts;
cout << "Introduzca la cantidad de pesetas: ";
cin >> pts;
euros = pts / PTS_EUR;
cout << pts << " pesetas equivalen a " << euros << " euros" << endl;
}

void eurosaLibras(){
//€/pounds calculator
double pounds, euros;
cout << "Introduzca la cantidad de euros para pasar a libras";
cin >> euros;
pounds = euros * EUR_POUND;
cout << euros << "euros son " << pounds << " libras" << endl;
}

void librasaeuros(){
//€/pounds calculator
double pounds, euros;
cout << "Introduzca la cantidad de libras para pasar a euros";
cin >> pounds;
euros = pounds / EUR_POUND;
cout << pounds << "libras son " << euros << " euros" << endl;
}


int main()
{
librasaeuros();

}






