// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_01_13_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 1, 13 > >::register_converter();
}

