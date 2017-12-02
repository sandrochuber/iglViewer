#include "IglInvoke.hpp"

void IglInvoke::readFile(std::string filename, int& vRows, int& vCols, int& fRows, int& fCols) {
    Eigen::MatrixXd V;
    Eigen::MatrixXi F;

    igl::readOFF(filename, V, F);

    vRows = V.rows();
    vCols = V.cols();

    fRows = F.rows();
    fCols = F.cols();
}

void IglInvoke::readMatrices(std::string filename, Eigen::MatrixXd& V, Eigen::MatrixXi& F) {
    igl::readOFF(filename, V, F);
}