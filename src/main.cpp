#include <iostream>
#include <fstream>

#include "Environment.h"
#include "Exception.h"

using namespace std;

#define MAX_GEN 50

int main(int argc, char* argv[]){
    if (argc != 2)
        throw Exception("No input file");
    ifstream f(argv[1]);
    if (f.bad())
        throw Exception("Could not open input file");

    uint size, n_items;
    vector<int> items_value, items_weight;

    f >> size >> n_items;
    for (uint i = 0; i < n_items; ++i){
        int value, weight;
        f >> value >> weight;
        items_value.push_back(value);
        items_weight.push_back(weight);
    }

    Environment MainEnv(n_items, items_value, items_weight);

    MainEnv.start_selection(50, 50);

    cout << "Fittest: " << MainEnv.get_fittest().getFitness();

    return 0;
}