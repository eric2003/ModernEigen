#include <iostream>
#include <Eigen/Dense>

//The trace of a matrix, as returned by the function trace(), is the sum of the diagonal coefficients 
//and can also be computed as efficiently using a.diagonal().sum(), as we will see later on.
//There also exist variants of the minCoeff and maxCoeff functions returning the coordinates
//of the respective coefficient via the arguments:

int main( int argc, char **argv )
{
    Eigen::Matrix3f m =  Eigen::Matrix3f::Random();
    std::ptrdiff_t i, j;
    float minOfM = m.minCoeff(&i,&j);
    std::cout << "Here is the matrix m:\n" << m << std::endl;
    std::cout << "Its minimum coefficient (" << minOfM 
        << ") is at position (" << i << "," << j << ")\n\n";

    Eigen::RowVector4i v = Eigen::RowVector4i::Random();
    int maxOfV = v.maxCoeff(&i);
    std::cout << "Here is the vector v: " << v << std::endl;
    std::cout << "Its maximum coefficient (" << maxOfV 
        << ") is at position " << i << std::endl;

    return 0;
}
