#include <iostream>
#include <fstream>

#include "Environment.h"

using namespace std;

#define MAX_GEN 10
#define POP_SIZE 500
#define SEED 0

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

    Environment MainEnv(size, items_value, items_weight, SEED);

    MainEnv.start(MAX_GEN, POP_SIZE);

    Indiv fittest = MainEnv.get_fittest();
    cout << fittest << endl;

    return 0;
}