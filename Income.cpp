//
// Created by joker on 25.05.16.
//

#include "Income.h"

World::World(string _msg) :msg(_msg) {
}

string World::greet() {
    return msg;
}

boost::python::list World::simples(int n) {
    boost::python::list res;

    int *a = new int [n], i, j, k;
    memset(a, 0, sizeof(int) * n);
    for(i = 1; 3 * i + 1 < n; i++) {
        for(j = 1; (k = i + j + 2 * i * j) < n && j <= i; j++){
            a[k] = 1;
        }
    }

    res.append(2);
    for(i = 1; 2 * i + 1 < n; i++){
        if(a[i] == 0) {
            res.append(2 * i + 1);
        }
    }

    delete [] a;

    return res;
}

int World::simplesCount(int n) {
    int res = 1;

    int *a = new int [n], i, j, k;
    memset(a, 0, sizeof(int) * n);
    for(i = 1; 3 * i + 1 < n; i++) {
        for(j = 1; (k = i + j + 2 * i * j) < n && j <= i; j++){
            a[k] = 1;
        }
    }

    for(i = 1; 2 * i + 1 < n; i++){
        if(a[i] == 0) {
            ++res;
        }
    }

    delete [] a;

    return res;
}