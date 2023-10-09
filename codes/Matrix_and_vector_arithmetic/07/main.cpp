#include <iostream>
#include <Eigen/Dense>

//Dot product and cross product
//For dot product and cross product, you need the dot() and cross() methods.
//Of course, the dot product can also be obtained as a 1x1 matrix as u.adjoint()*v.

int main( int argc, char **argv )
{
    Eigen::Vector3d v(1,2,3);
    Eigen::Vector3d w(0,1,2);

    std::cout << "Dot product: " << v.dot(w) << std::endl;
    double dp = v.adjoint()*w; // automatic conversion of the inner product to a scalar
    std::cout << "Dot product via a matrix product: " << dp << std::endl;
    std::cout << "Cross product:\n" << v.cross(w) << std::endl;

    return 0;
}
