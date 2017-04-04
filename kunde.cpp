#include <iostream>
#include <stdio.h>
#include "kunde.h"
#include "sparkonto.h"
#include "girokonto.h"
using namespace std;

KUNDE::KUNDE()  //Konstruktor
{
    int iC;
    int iAuswahl;
    for(iC=0; iC<4; iC++) {
        cout << "Konto " << iC+1 << endl;
        cout << "\tSparkonto: 1" << endl;
        cout << "\tGirokonto: 2" << endl;
        cout << "\tAuswahl: ";
        cin >> iAuswahl;
        if(iAuswahl == 1) {
            pKonten[iC] = new SPARKONTO();
            cout << "Sparkonto erstellt!" << endl;
        }
        if(iAuswahl == 2) {
            pKonten[iC] = new GIROKONTO();
            cout << "Girokonto erstellt!" << endl;
        }
    }
}

KUNDE::~KUNDE() //Destruktor
{
    cout << "Kunde geloescht" << endl;
}

void KUNDE::setGuthaben(int iKonto, double dBetrag) {
    if(dynamic_cast<GIROKONTO*>(pKonten[iKonto])) {
        ((GIROKONTO*)pKonten[iKonto])->setKontostand(dBetrag);
    }
    if(dynamic_cast<SPARKONTO*>(pKonten[iKonto])) {
        ((SPARKONTO*)pKonten[iKonto])->setKontostand(dBetrag);
    }
}

double KUNDE::getGuthaben(int iKonto) {
    if(dynamic_cast<GIROKONTO*>(pKonten[iKonto])) {
        cout << ((GIROKONTO*)pKonten[iKonto])->getKontostand() << endl;
    }
    if(dynamic_cast<SPARKONTO*>(pKonten[iKonto])) {
        cout << ((SPARKONTO*)pKonten[iKonto])->getKontostand() << endl;
    }
}

