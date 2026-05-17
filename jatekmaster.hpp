#ifndef JATEKMASTER_HPP
#define JATEKMASTER_HPP

class JatekMester {
public:
    static const int SOROK = 15;
    static const int OSZLOPOK = 15;

    JatekMester();

    int getCella(int sor, int oszlop) const;
    int getAktualisJatekos() const;
    int getNyertes() const;
    bool vege() const;
    bool lepesKiserlet(int sor, int oszlop);
    bool nyertE(int jatekos) const;
    bool teleE() const;
    void reset();

private:
    bool ellenorizVonal(int sor, int oszlop, int ds, int do_, int jatekos) const;

    int _tabla[SOROK][OSZLOPOK];
    int _aktJatekos;
    int _nyertes;
    bool _dontetlen;
};

#endif
