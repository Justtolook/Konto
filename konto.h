#ifndef KONTO_H
#define KONTO_H

class KONTO
{
private:
    double dKontostand;
public:
    KONTO();    //Konstruktor
    ~KONTO();   //Destruktor
    double getKontostand(void); //gibt den Kontostand zurück
    virtual void setKontostand(double)=0; //Kontostand erhöhen/verringern
};
#endif // KONTO_H
