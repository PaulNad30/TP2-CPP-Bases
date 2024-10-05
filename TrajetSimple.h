#if ! defined ( TRAJETSIMPLE_H )
#define TRAJETSIMPLE_H

#include "Trajet.h"

enum transport {AUTO, BUS, TRAIN, AVION, BATEAU};

class TrajetSimple : public Trajet
{

public:
    TrajetSimple(char* prov, char* dest, transport moyen);
    virtual void Afficher() const;
    virtual char* GetProvenance() const;
    virtual char* GetDestination() const;
protected:
    char* provenance;
    char* destination;
    transport moyenTransport;
};

#endif // TRAJETSIMPLE_H
