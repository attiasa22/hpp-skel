#include <iostream>
#include <vector>
#include <stdexcept>
using std::cout;

namespace matrix_operations {

inline std::vector<std::vector<double>> matrix_multiplication(std::vector<std::vector<double>> A, std::vector<std::vector<double>> B)
{

    unsigned long row_1 = A.size(), col_1 = A[0].size();
    unsigned long row_2 = B.size(), col_2 = B[0].size();

    if (col_1 != row_2)
    {
        throw std::invalid_argument("Matrices can not be multiplied due to incompatible shapes.");
    }

    std::vector<std::vector<double>> result(row_1, std::vector<double>(col_2, 0));

    for (unsigned int i = 0; i < row_1; i++)
    {
        for (unsigned int j = 0; j < col_2; j++)
        {
            result[i].at(j) = 0;

            for (unsigned int k = 0; k < row_2; k++)
            {
                result[i].at(j) += A[i].at(k) * B[k].at(j);
            }
        }
    }
    return result;
}

inline std::vector<std::vector<double>> matrix_transpose(std::vector<std::vector<double>> A)
{
    unsigned long M = A.size(), N = A[0].size();
    std::vector<std::vector<double>> transpose(N, std::vector<double>(M, 0));

    for (unsigned int j = 0; j < N; j++)
    {
        for (unsigned int i = 0; i < M; i++)
        {
            transpose[j].at(i) = A[i].at(j);
        }
    }
    return transpose;
}
} // namespace matrix_operations