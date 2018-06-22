#include <initializer_list>
#include <iostream>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <vector>

#include <pybind11/pybind11.h>
#include <functional>
#include <stl_binders.hpp>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_std_stl_vector(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B0_[std::vector<int>] ";
	// std::vector file:bits/stl_vector.h line:216
	binder::vector_binder<int,std::allocator<int>>(M("std"), "int", "std_allocator_int_t");

}
