#include <comp.hpp>
#include <python_comp.hpp>

#include "myfespace.hpp"

extern "C" void mymodule(py::object & res) {
  cout << "called mymodule" << endl;
  // import ngsolve such that python base classes are defined    
  auto ngs = py::module::import("ngsolve");    

  static py::module::module_def def;    
  py::module m = py::module::create_extension_module("", "", &def);    
    
  //   ExportMyFESpace(m);

  ngcomp::ExportFESpace<ngcomp::MyFESpace>(m, "MyFESpace", true)
    .def("GetNVert", &ngcomp::MyFESpace::GetNVert, 
            "return number of vertices")
    ;
  
  res = m;    
}    

