#include <iostream>
#include <Eigen/Dense>

//Of course, in many cases, for example when checking dynamic sizes, 
//the check cannot be performed at compile time. Eigen then uses runtime assertions. 
//This means that the program will abort with an error message when executing an illegal operation
//if it is run in "debug mode", and it will probably crash if assertions are turned off.

int main( int argc, char **argv )
{
    Eigen::MatrixXf m(3,3);
    Eigen::VectorXf v(4);
    v = m * v; // Run-time assertion failure here: "invalid matrix product"

    return 0;
}
