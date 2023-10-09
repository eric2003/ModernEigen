#include <iostream>
#include <Eigen/Dense>

//Scalar multiplication and division
//Multiplication and division by a scalar is very simple too. The operators at hand here are:
//
//binary operator * as in matrix*scalar
//binary operator * as in scalar*matrix
//binary operator / as in matrix/scalar
//compound operator *= as in matrix*=scalar
//compound operator /= as in matrix/=scalar

int main( int argc, char **argv )
{
    Eigen::Matrix2d a;
    a << 1, 2,
        3, 4;
    Eigen::Vector3d v(1,2,3);
    std::cout << "a * 2.5 =\n" << a * 2.5 << std::endl;
    std::cout << "0.1 * v =\n" << 0.1 * v << std::endl;
    std::cout << "Doing v *= 2;" << std::endl;
    v *= 2;
    std::cout << "Now v =\n" << v << std::endl;

    return 0;
}
