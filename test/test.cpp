#include <matrix_operations.hpp>
#define CATCH_CONFIG_MAIN
#include <catch.hpp>

#include <matrix_operations.hpp>
#define CATCH_CONFIG_MAIN
#include <catch.hpp>

std::vector<std::vector<double>> matrix_1 = {{1}};
std::vector<std::vector<double>> matrix_2 = {{1}, {2}};
std::vector<std::vector<double>> matrix_3 = {{1, 2}, {3, 4}};

std::vector<std::vector<double>> matrix_1_sol = {{1}};
std::vector<std::vector<double>> matrix_2_sol = {{1, 2}};
std::vector<std::vector<double>> matrix_3_sol = {{1, 3}, {2, 4}};

std::vector<std::vector<double>> matrix_2_1_sol = {{1}, {2}};

std::vector<std::vector<double>> matrix_3_3_sol = {{7, 10}, {15, 22}};

TEST_CASE("Matrix products are computed")
{
    REQUIRE(matrix_operations::matrix_multiplication(matrix_2, matrix_1) == matrix_2_1_sol);
    REQUIRE(matrix_operations::matrix_multiplication(matrix_3, matrix_3) == matrix_3_3_sol);
    REQUIRE_THROWS(matrix_operations::matrix_multiplication(matrix_1, matrix_3));
}

TEST_CASE("Matrix transposes are computed", "[matrix_transpose]")
{
    REQUIRE(matrix_operations::matrix_transpose(matrix_1) == matrix_1_sol);
    REQUIRE(matrix_operations::matrix_transpose(matrix_2) == matrix_2_sol);
    REQUIRE(matrix_operations::matrix_transpose(matrix_3) == matrix_3_sol);
}