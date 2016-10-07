#include "Indiv.h"

Indiv::Indiv():
    chromosome()
{}

Indiv::Indiv(const vector<bool>& v):
    chromosome(v)
{}

Indiv::Indiv(const initializer_list<bool>& list):
    chromosome(list)
{}

Indiv::Indiv(const Indiv& indiv_p)
{}

double Indiv::getFitness() const {
    return fitness;
}

void Indiv::setFitness(uint fitness) {
    Indiv::fitness = fitness;
}
