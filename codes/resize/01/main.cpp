#include <iostream>
#include <Eigen/Dense>

//Resizing
//The current size of a matrix can be retrieved by rows(), cols() and size().
//These methods return the number of rows, the number of columns and the number of coefficients, respectively.
//Resizing a dynamic-size matrix is done by the resize() method.

int main( int argc, char **argv )
{
    Eigen::MatrixXd m(2,5);
    m.resize(4,3);
    std::cout << "The matrix m is of size "
        << m.rows() << "x" << m.cols() << std::endl;
    std::cout << "It has " << m.size() << " coefficients" << std::endl;
    Eigen::VectorXd v(2);
    v.resize(5);
    std::cout << "The vector v is of size " << v.size() << std::endl;
    std::cout << "As a matrix, v is of size "
        << v.rows() << "x" << v.cols() << std::endl;

    return 0;
}
