#ifndef GEN_ENVIROMENT_H
#define GEN_ENVIROMENT_H

#include <vector>

#include "Indiv.h"

using namespace std;

class Environment {

    uint MAX_WEIGHT;
    const vector<int> items_value;
    const vector<int> items_weight;

    vector<Indiv> indivs;

public:
    Environment(uint knapsack_size, const vector<int>& values,  const vector<int>& weights);

    void start_selection(uint max_gen, uint max_indivs);
    Indiv get_fittest();

    void calculate_fitness();
    void calculate_fitness(const Indiv a);

};

#endif //GEN_ENVIROMENT_H
