all:
	g++ main.cpp -o main -O3 -Wall -std=c++14 -march=native -I /home/ilyaraz/intel/mkl/include -L /home/ilyaraz/intel/mkl/lib/intel64_lin/ -lmkl_core -lmkl_rt
