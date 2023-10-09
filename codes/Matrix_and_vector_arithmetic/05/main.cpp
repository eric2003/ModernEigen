#include <iostream>
#include <Eigen/Dense>

//This is the so-called aliasing issue. In "debug mode", i.e., 
//when assertions have not been disabled, such common pitfalls are automatically detected.
//For in-place transposition, as for instance in a = a.transpose(), simply use the transposeInPlace() function:


int main( int argc, char **argv )
{
    Eigen::MatrixXf a(2,3); a << 1, 2, 3, 4, 5, 6;
    std::cout << "Here is the initial matrix a:\n" << a << std::endl;

    a.transposeInPlace();
    std::cout << "and after being transposed:\n" << a << std::endl;

    return 0;
}
