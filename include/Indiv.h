#ifndef GEN_INDIV_H
#define GEN_INDIV_H

#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;

typedef vector<bool> Chromosome;

class Indiv {

    Chromosome chromosome;
    uint fitness;

public:
    Indiv();
    Indiv(const vector<bool>& v);
    Indiv(const initializer_list<bool>& list);
    Indiv(const Indiv& indiv_p);

    bool get_gen(uint i) const;

    uint getFitness() const;
    void setFitness(uint fitness);
};


#endif //GEN_INDIV_H
