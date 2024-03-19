#include <comp.hpp>
#include <python_comp.hpp>

#include "myfespace.hpp"


PYBIND11_MODULE(libmyfe, m)
{
  cout << "Loading libmyfe library" << endl;

  ngcomp::ExportFESpace<ngcomp::MyFESpace>(m, "MyFESpace", true)
    .def("GetNVert", &ngcomp::MyFESpace::GetNVert, 
            "return number of vertices")
    ;
}    

