#include <iostream>
#include <stdio.h>
#include "girokonto.h"
#include <math.h>

using namespace std;

GIROKONTO::GIROKONTO()                  //Standartkonstruktor
{
    iBuchungen = 0;
    dLimit = 1000.0;
    dKreditlimit = -200.0;
}

GIROKONTO::GIROKONTO(double dBetrag)    //Konstruktor: legt Anfangsbetrag fest
{
    KONTO::setKontostand(dBetrag);
    iBuchungen = 0;
    dLimit = 1000.0;
    dKreditlimit = -200.0;
}

int GIROKONTO::getBuchungen(void) // gibt die Anzahl der Buchungen zur�ck
{
    return(iBuchungen);
}

void GIROKONTO::setKontostand(double dBetrag) {  // �ndert den Kontostand
                                                // dBetrag: zu addierender Betrag
    if((getKontostand()+dBetrag)>getKreditlimit())
    {
        if(dBetrag<0) {
            if(-(dBetrag) <= dLimit) {
                KONTO::setKontostand(dBetrag);
                addBuchung();
            }
            else cout << "Auszahlungsbetrag ist zu hoch!" << endl;
        }
        else {
            if(dBetrag<=dLimit) {
                KONTO::setKontostand(dBetrag);
                addBuchung();
            }
            else cout << "Einzahlungsbetrag ist zu hoch!" << endl;
        }
    }
    else cout << "Kreditlimit w�rde �berschritten werden!" << endl;
}

void GIROKONTO::addBuchung(void) {// z�hlt die Anzahl der Buchungen
    iBuchungen ++;
}

void GIROKONTO::setLimit(double dLimitNeu) { //�ndert das Limit zu dLimitNeu
    dLimit = dLimitNeu;
}

double GIROKONTO::getLimit(void) {   //gibt das Limit zur�ck
    return dLimit;
}

void GIROKONTO::setKreditlimit(double dKreditlimitNeu) { //�ndert das Kreditlimit zu dKreditlimitNeu
    dKreditlimit = dKreditlimitNeu;
}

double GIROKONTO::getKreditlimit(void) {   //gibt das Kreditlimit zur�ck
    return dKreditlimit;
}
