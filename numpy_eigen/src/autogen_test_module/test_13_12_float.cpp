#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<float, 13, 12> test_float_13_12(const Eigen::Matrix<float, 13, 12> & M)
{
	return M;
}
void export_float_13_12()
{
	boost::python::def("test_float_13_12",test_float_13_12);
}

