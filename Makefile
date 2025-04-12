HDF5=/usr/include/hdf5/
#========================================= FFTW directory ==============================================#
FFTW=/usr/lib64/
#============================== Message Passing Interface include files =================================#
HDF5_INCLUDE = -I$(HDF5)/serial/

test:           vlpl3d.o 
		nvcc -o test vlpl3d.o

vlpl3d.o:
		nvcc -c vlpl3d.cpp


clean:
		rm *.o test
