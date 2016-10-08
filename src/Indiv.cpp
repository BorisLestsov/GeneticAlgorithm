#include <iomanip>
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

Indiv::Indiv(const Indiv& indiv_p):
    chromosome(indiv_p.chromosome),
    fitness(indiv_p.fitness)
{}

uint Indiv::getFitness() const {
    return fitness;
}

void Indiv::setFitness(uint fitness) {
    Indiv::fitness = fitness;
}

bool Indiv::get_gen(uint i) const {
    return chromosome[i];
}

void Indiv::mutate() {
    uint ind = rand() * (uint) chromosome.size() / RAND_MAX;
    chromosome[ind] = !chromosome[ind];
}

ostream &operator<<(ostream &o, const Indiv& indiv) {
    o << "Fitness: " << indiv.fitness << endl;
    for (uint i = 0; i < indiv.chromosome.size(); ++i)
        o << setw(2) << indiv.chromosome[i];
    return o;
}
