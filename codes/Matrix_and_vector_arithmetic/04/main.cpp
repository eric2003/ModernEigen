#include <iostream>
#include <Eigen/Dense>

//As for basic arithmetic operators, transpose() and adjoint() simply return a proxy object without doing
//the actual transposition. If you do b = a.transpose(), then the transpose is evaluated
//at the same time as the result is written into b. However, there is a complication here. 
//If you do a = a.transpose(), then Eigen starts writing the result into a before the evaluation of the transpose is finished.
//Therefore, the instruction a = a.transpose() does not replace a with its transpose, as one would expect:


int main( int argc, char **argv )
{
    Eigen::Matrix2i a; a << 1, 2, 3, 4;
    std::cout << "Here is the matrix a:\n" << a << std::endl;

    Eigen::Matrix2i b = a.transpose();
    std::cout << "Here is the matrix b:\n" << b << std::endl;

    a = a.transpose(); // !!! do NOT do this !!!
    std::cout << "and the result of the aliasing effect:\n" << a << std::endl;

    return 0;
}
