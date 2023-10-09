#include <iostream>
#include <Eigen/Dense>

//Validity of operations
//Eigen checks the validity of the operations that you perform. When possible,
//it checks them at compile time, producing compilation errors. 
//These error messages can be long and ugly, but Eigen writes the important message in
//UPPERCASE_LETTERS_SO_IT_STANDS_OUT. For example:

int main( int argc, char **argv )
{
    Eigen::Matrix3f m;
    Eigen::Vector4f v;
    v = m*v;      // Compile-time error: YOU_MIXED_MATRICES_OF_DIFFERENT_SIZES

    return 0;
}
