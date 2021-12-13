#include "include/matrix_operations.hpp"
#include <iostream>
#include <vector>
int main(){

    std::vector<std::vector<double>> solution = matrix_operations::matrix_multiplication({{5.5,0.1024},{1.04,-2}},{{100,54345},{109742,-444}});
    cout << "Solution \n";
    for (unsigned int i =0; i < solution.size(); i++){
        for (unsigned int j =0; j < solution[i].size(); j++){
             cout << solution[i][j] << " ";
        }
         cout << "\n";
    }

    std::vector<std::vector<double>> solution_t = matrix_operations::matrix_transpose(solution);
    cout << "Transpose of Solution \n";
    for (unsigned int i =0; i < solution_t.size(); i++){
        for (unsigned int j =0; j < solution_t[i].size(); j++){
             cout << solution_t[i][j] << " ";
        }
         cout << "\n";
    }

    return 1;

}

