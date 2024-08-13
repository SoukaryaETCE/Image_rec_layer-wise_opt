#pragma once 
#define K2C_MAX_NDIM 5
struct k2c_tensor
{
    /** Pointer to array of tensor values flattened in row major order. */
    // float * array;

    /** Rank of the tensor (number of dimensions). */
    size_t ndim;

    /** Number of elements in the tensor. */
    size_t numel;

    /** Array, size of the tensor in each dimension. */
    size_t shape[K2C_MAX_NDIM];
};

typedef struct k2c_tensor k2c_tensor;

struct k2c_tensor2
{
    /** Pointer to array of tensor values flattened in row major order. */
    float array[128];

    /** Rank of the tensor (number of dimensions). */
    size_t ndim;

    /** Number of elements in the tensor. */
    size_t numel;

    /** Array, size of the tensor in each dimension. */
    size_t shape[K2C_MAX_NDIM];
};
typedef struct k2c_tensor2 k2c_tensor2;
void recogniser(k2c_tensor2* dense_7_input_input, k2c_tensor2* dense_12_output); 
void recogniser_initialize(); 
void recogniser_terminate(); 
