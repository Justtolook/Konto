#include <iostream>
#include <stdio.h>
#include "sparkonto.h"
#include <math.h>

using namespace std;
const double SPARKONTO::adZinssatz[5]={0.25, 0.6, 0.7, 0.8, 0.9};

void SPARKONTO::setKontostand(double dBetrag)  //Kontostand um Betrag Geld erhöhen/verringern
{

    if(getKontostand() + dBetrag < 0) cout << "Error: negativer Betrag" << endl;   //Es wird versucht mehr Geld abzuheben als vorhanden ist
    else KONTO::setKontostand(dBetrag);}

double SPARKONTO::getZinssatz(void) //entsprechenden Zinssazt zurück geben
{
    double dKontostand = KONTO::getKontostand();
    if(dKontostand>=1 && dKontostand <=1000) return(adZinssatz[0]);
    if(dKontostand>1000 && dKontostand <=50000) return(adZinssatz[1]);
    if(dKontostand>50000 && dKontostand <=125000) return(adZinssatz[2]);
    if(dKontostand>125000 && dKontostand <=250000) return(adZinssatz[3]);
    if(dKontostand>250000) return(adZinssatz[4]);
}

void SPARKONTO::addInterest(void)   //Zinsen gutschreiben
{
    KONTO::setKontostand(getKontostand()*getZinssatz()/100);
}




