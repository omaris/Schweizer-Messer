// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_03_08_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, 3, 8 > >::register_converter();
}

