#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<float, 7, 10> test_float_07_10(const Eigen::Matrix<float, 7, 10> & M)
{
	return M;
}
void export_float_07_10()
{
	boost::python::def("test_float_07_10",test_float_07_10);
}

