# NGS-myfe


Installation:

* Install
   - a recent C++ compiler (msvc, gcc, clang, Apple-clang)
   - CMake
   - git
   - recommended: vs-code, with GitLens and CMake extensions

* Install a recent NGSolve (version 6.2.2402-post16 from March 20 or newer), install via
    
      pip install --upgrade --pre ngsolve  

* Install NGS-myfe from github. You may first git-fork the repo:

      git clone https://github.com/TUWien-ASC/NGS-myfe.git
      cd NGS-myfe
      mkdir build
      cd build
      cmake ..
      make -j4 install

* Building with Visual Studio Code

  * Install Visual Studio Code. 
  * Install a compiler, fow Windows see https://code.visualstudio.com/docs/cpp/config-msvc
  * Install VS-Code extensions: GitLens, CMake Tools

  * Now, clone the project TUWien-ASC/NGS-myfe from github

   ![clone](pictures/step1-clone.png)  



  **recommended:** all steps can be performed within vs-code. Set build target to *install*.
  
  **NUM-PDE students:** have a look into whatsapp, Mar 29
  
* Try notebooks from https://jschoeberl.github.io/iFEM/FEM/myFiniteElement.html

