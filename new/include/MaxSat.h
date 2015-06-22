#ifndef MAXSAT_H
#define MAXSAT_H

#include "CNF.h"

#include <set>
#include <vector>
#include <map>
#include <string>
using namespace std;

class MaxSATSolver {

private:
    CNF *cnf;
    char* solver_name;

public:

    // We assume the caller will modify the cnf object
    MaxSATSolver(CNF *formula, char* name);
    ~MaxSATSolver();

    /* Solve maxSAT and return a model. */
    bool solve(vector<int> &model, set<int> &softclauses);
    bool solve(vector<int> &model, set<int> &softclauses, string corefilename);
};

#endif
