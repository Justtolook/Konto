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
    int getBuchungen(void);         //gibt die Anzahl der Buchungen zur�ck
    virtual void setKontostand(double dBetrag); //�ndert den Kontostand
                                        //dBetrag: zu addierender Betrag
    void setLimit(double dLimitNeu);   //�ndert das Limit
    double getLimit();                   //gibt das Limit zur�ck
    void setKreditlimit(double dKreditlimitNeu);   //�ndert das Kreditlimit
    double getKreditlimit();                   //gibt das Kreditlimit zur�ck
private:
    void addBuchung(void);          //z�hlt die Anzahl der Buchungen
};
#endif /* GIROKONTO_H */
