#include <iostream>
#include <stdio.h>
#include "konto.h"
#include <math.h>

using namespace std;

KONTO::KONTO()  //Konstruktor
{
    dKontostand=0;
}

KONTO::~KONTO()
{
    cout << "Konto geloescht" << endl;
}

double KONTO::getKontostand(void)
{
    return(dKontostand);
}

void KONTO::setKontostand(double dBetrag)
{
    dKontostand=dKontostand+dBetrag;
}
