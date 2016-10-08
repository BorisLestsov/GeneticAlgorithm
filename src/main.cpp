#include <iostream>
#include <fstream>

#include "Environment.h"
#include "Exception.h"

using namespace std;

#define MAX_GEN 5
#define POP_SIZE 50
#define SEED 1

int main(int argc, char* argv[]){
    if (argc != 2)
        throw Exception("No input file");
    ifstream f(argv[1]);
    if (f.bad())
        throw Exception("Could not open input file");

    uint size, n_items;
    vector<uint> items_value, items_weight;

    f >> size >> n_items;
    for (uint i = 0; i < n_items; ++i){
        uint value, weight;
        f >> value >> weight;
        items_value.push_back(value);
        items_weight.push_back(weight);
    }

    Environment MainEnv(n_items, items_value, items_weight, SEED);

    MainEnv.start_selection(MAX_GEN, POP_SIZE);

    cout << "Fittest: " << MainEnv.get_fittest().getFitness();

    return 0;
}