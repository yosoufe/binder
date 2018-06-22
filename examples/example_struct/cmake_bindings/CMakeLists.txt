project(test_struct)
include_directories(/home/danpf/git/binder/examples/example_struct/cmake_bindings/../../../source)
include_directories(/home/danpf/git/binder/examples/example_struct/cmake_bindings/../include)
include_directories(/home/danpf/git/binder/examples/example_struct/cmake_bindings/../../../build/pybind11/include)
include_directories(/home/danpf/miniconda3/envs/py3/include/python3.6m)
set_property(GLOBAL PROPERTY POSITION_INDEPENDENT_CODE ON)
add_definitions(-DNDEBUG)
add_library(test_struct SHARED
	test_struct.cpp
	test_struct/test_struct.cpp
)
set_target_properties(test_struct PROPERTIES PREFIX "")
set_target_properties(test_struct PROPERTIES SUFFIX ".so")
