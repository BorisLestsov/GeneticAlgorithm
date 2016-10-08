#ifndef GEN_ENVIROMENT_H
#define GEN_ENVIROMENT_H

#include <vector>

#include "Indiv.h"
#include "Exception.h"
#include <ctime>

using namespace std;

class Environment {

    uint seed;
    uint knapsack_max_weigth;
    const vector<uint> items_value;
    const vector<uint> items_weight;

    vector<Indiv> indivs;
    vector<Indiv> parents_pool;

    uint pop_size;
    uint chromosome_size;
    uint generation;   // Generation

    ulong tot_fit;

    // Private methods
    Chromosome generate_random_chromosome();
    void calculate_fitness();
    uint calculate_indiv_fitness(const Indiv& a); //always non negative

    void perform_selection();
    void perform_crossover();
    void perform_mutation();

    uint roulette_select();
public:
    Environment(uint knapsack_size, const vector<uint>& values,  const vector<uint>& weights, uint seed = 0);

    void start_selection(uint max_gen, uint max_indivs);
    const Indiv& get_fittest();

};

#endif //GEN_ENVIROMENT_H
