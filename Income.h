#include <iostream>
#include <vector>

#include <boost/python.hpp>
#include <boost/scoped_ptr.hpp>
#include <boost/python/list.hpp>
#include <boost/python/call.hpp>

#include <bitset>

using namespace std;
using namespace boost::python;

struct World {
    string msg;
    World(string _msg);
    string greet();
    boost::python::list simples(int n);
    int simplesCount(int n);
    void function(boost::python::object &obj);
};

BOOST_PYTHON_MODULE(libbp)
{
    class_<World>("World", init<string>())
        .def("greet", &World::greet)
        .def("simples", &World::simples)
        .def("simplesCount", &World::simplesCount)
        .def("function", &World::function)
    ;
};
