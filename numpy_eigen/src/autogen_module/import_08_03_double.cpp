// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_08_03_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 8, 3 > >::register_converter();
}

