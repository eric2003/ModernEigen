#include <iostream>
#include <Eigen/Dense>

//Matrix-matrix and matrix-vector multiplication
//Matrix-matrix multiplication is again done with operator*. Since vectors are a special case of matrices,
//they are implicitly handled there too, so matrix-vector product is really just a special case of matrix-matrix product, and so is vector-vector outer product.
//Thus, all these cases are handled by just two operators:
//binary operator * as in a*b
//compound operator *= as in a*=b (this multiplies on the right: a*=b is equivalent to a = a*b)


int main( int argc, char **argv )
{
    Eigen::Matrix2d mat;
    mat << 1, 2,
        3, 4;
    Eigen::Vector2d u(-1,1), v(2,0);
    std::cout << "Here is mat*mat:\n" << mat*mat << std::endl;
    std::cout << "Here is mat*u:\n" << mat*u << std::endl;
    std::cout << "Here is u^T*mat:\n" << u.transpose()*mat << std::endl;
    std::cout << "Here is u^T*v:\n" << u.transpose()*v << std::endl;
    std::cout << "Here is u*v^T:\n" << u*v.transpose() << std::endl;
    std::cout << "Let's multiply mat by itself" << std::endl;
    mat = mat*mat;
    std::cout << "Now mat is mat:\n" << mat << std::endl;

    return 0;
}
