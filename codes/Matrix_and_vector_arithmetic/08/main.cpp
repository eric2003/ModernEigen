#include <iostream>
#include <Eigen/Dense>

//Basic arithmetic reduction operations
//Eigen also provides some reduction operations to reduce a given matrix or vector to a single value such as the sum 
//(computed by sum()), product (prod()), or the maximum (maxCoeff()) and minimum (minCoeff()) of all its coefficients.

int main( int argc, char **argv )
{
    Eigen::Matrix2d mat;
    mat << 1, 2,
        3, 4;
    std::cout << "Here is mat.sum():       " << mat.sum()       << std::endl;
    std::cout << "Here is mat.prod():      " << mat.prod()      << std::endl;
    std::cout << "Here is mat.mean():      " << mat.mean()      << std::endl;
    std::cout << "Here is mat.minCoeff():  " << mat.minCoeff()  << std::endl;
    std::cout << "Here is mat.maxCoeff():  " << mat.maxCoeff()  << std::endl;
    std::cout << "Here is mat.trace():     " << mat.trace()     << std::endl;

    return 0;
}
