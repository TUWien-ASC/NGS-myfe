#include <comp.hpp>
#include <python_comp.hpp>

#include "myfespace.hpp"


PYBIND11_MODULE(myfe, m)
{
  cout << "Loading myfe library" << endl;

  ngcomp::ExportFESpace<ngcomp::MyFESpace>(m, "MyFESpace", true)
    .def("GetNVert", &ngcomp::MyFESpace::GetNVert, 
            "return number of vertices")
    ;
}    

