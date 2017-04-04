#ifndef GIROKONTO_H
#define GIROKONTO_H
#include "konto.h"

class GIROKONTO : public KONTO
{
    //Attribute
private:
    int iBuchungen;
    double dLimit;
    double dKreditlimit;

    //Methoden
public:
    GIROKONTO();                    //Standartkonstruktor
    GIROKONTO(double dAnfang);      //Konstruktor: legt Anfangsbetrag fest
    int getBuchungen(void);         //gibt die Anzahl der Buchungen zurück
    virtual void setKontostand(double dBetrag); //ändert den Kontostand
                                        //dBetrag: zu addierender Betrag
    void setLimit(double dLimitNeu);   //ändert das Limit
    double getLimit();                   //gibt das Limit zurück
    void setKreditlimit(double dKreditlimitNeu);   //ändert das Kreditlimit
    double getKreditlimit();                   //gibt das Kreditlimit zurück
private:
    void addBuchung(void);          //zählt die Anzahl der Buchungen
};
#endif /* GIROKONTO_H */
