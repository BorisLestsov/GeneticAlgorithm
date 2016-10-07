
#include "Environment.h"

Environment::Environment(uint knapsack_size, const vector<int> &values, const vector<int> &weights):
        MAX_WEIGHT(knapsack_size),
        items_value(values),
        items_weight(weights)
{
    // TODO: initialize indivs
}

Indiv Environment::get_fittest() {
    return Indiv();
}

void Environment::calculate_fitness() {

}

void Environment::calculate_fitness(const Indiv a) {

}

void Environment::start_selection(uint max_gen, uint max_indivs) {

}