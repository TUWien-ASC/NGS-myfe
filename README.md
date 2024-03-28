# NGS-myfe


Installation:

* Install
   - a recent C++ compiler
   - CMake
   - git
   - recommended: vs-code, with CMake and git extensions

* Install a recent NGSolve (version 6.2.2402-post16 from March 20 or newer), install via
    
      pip install --upgrade --pre ngsolve  

* Install NGS-myfe from github. You may first git-fork the repo:

      git clone https://github.com/TUWien-ASC/NGS-myfe.git
      cd NGS-myfe
      mkdir build
      cd build
      cmake ..
      make -j4 install

  all steps can be performed within vs-code. Set build target to *install*.
  
* Try notebooks from https://jschoeberl.github.io/iFEM/FEM/myFiniteElement.html

