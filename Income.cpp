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
        for(j = 1; (k = i + j + 2 * i * j) < n && j <= i; j++) {
            a[k] = 1;
        }
    }

    for(i = 1; 2 * i + 1 < n; i++) {
        if(a[i] == 0) {
            ++res;
        }
    }

    delete [] a;

    return res;
}

void World::function(int n, boost::python::object &obj) {
    PyObject *oj = obj.ptr();
    if(PyFunction_Check(oj) || PyMethod_Check(oj)) {
        int res = simplesCount(n);

        float *a = new float[4];
        float *b = new float[4];
        for(int i = 0; i < 4; ++i) {
            a[i] = 9;
            b[i] = 4;
        }

        mulvec(a, b);
        for(int i = 0; i < 4; ++i) {
            std::cout << a[i] << std::endl;
        }


        std::cout << "endl" << std::endl;
        std::cout << adding(-1, 11) << std::endl;
        std::cout << multy(2, 11) << std::endl;
        std::cout << maxofthree(-1, 11, 18) << std::endl;

        delete [] a;
        delete [] b;

        boost::python::call<void, int>(oj, res);
    }
}
