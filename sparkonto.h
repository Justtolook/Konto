#ifndef SPARKONTO_H
#define SPARKONTO_H
#include "konto.h"

class SPARKONTO : public KONTO
{
private:
    static const double adZinssatz[5];

public:
    virtual void setKontostand(double);     //Kontostand erhöhen/verringern
    double getZinssatz(void);       //Zinssatz zurückgeben
    void addInterest(void);         //Zinsen gutschreiben
};
#endif // SPARKONTO_H
