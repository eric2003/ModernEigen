#include <iostream>
#include <Eigen/Dense>

//Addition and subtraction
//The left hand side and right hand side must, of course, have the same numbers of rows and of columns. They must also have the same Scalar type, as Eigen doesn't do automatic type promotion. The operators at hand here are:
//
//binary operator + as in a+b
//binary operator - as in a-b
//unary operator - as in -a
//compound operator += as in a+=b
//compound operator -= as in a-=b

int main( int argc, char **argv )
{
    Eigen::Matrix2d a;
    a << 1, 2,
        3, 4;
    Eigen::MatrixXd b(2,2);
    b << 2, 3,
        1, 4;
    std::cout << "a + b =\n" << a + b << std::endl;
    std::cout << "a - b =\n" << a - b << std::endl;
    std::cout << "Doing a += b;" << std::endl;
    a += b;
    std::cout << "Now a =\n" << a << std::endl;
    Eigen::Vector3d v(1,2,3);
    Eigen::Vector3d w(1,0,0);
    std::cout << "-v + w - v =\n" << -v + w - v << std::endl;

    return 0;
}
