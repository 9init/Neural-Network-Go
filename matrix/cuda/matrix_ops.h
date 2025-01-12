#ifndef MATRIX_OPS_H
#define MATRIX_OPS_H

#ifdef __cplusplus
extern "C" {
#endif

// Declare C wrapper functions for CUDA kernels
void cudaMatrixAdd(double* d_A, double* d_B, double* d_C, int rows, int cols);
void cudaMatrixMul(double* d_A, double* d_B, double* d_C, int rowsA, int colsA, int colsB);

// TODO: Implement the following functions
void cudaMatrixHadamard(float* A, float* B, float* C, int rows, int cols);
void cudaMatrixScalarMul(float* A, float scalar, float* C, int rows, int cols);

// Declare function to set debug flag
void setDebugFlag(int flag);

#ifdef __cplusplus
}
#endif

#endif // MATRIX_OPS_H