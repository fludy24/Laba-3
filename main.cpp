#include <iostream>
#include <vector>

class TMatr {
private:
    std::vector<std::vector<int>> matrix;
    int rows;
    int cols;

public:
    TMatr(int rows, int cols) : rows(rows), cols(cols) {
        matrix.resize(rows, std::vector<int>(cols, 0));
    }

    void printSubMatrix(int rowStart, int colStart, int rowEnd, int colEnd) {
        for (int i = rowStart; i <= rowEnd; ++i) {
            for (int j = colStart; j <= colEnd; ++j) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    void printMatrix() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    void resizeMatrix(int newRows, int newCols) {
        rows = newRows;
        cols = newCols;
        matrix.resize(rows, std::vector<int>(cols, 0));
    }
};

int main() {
    TMatr matr(3, 3);
    matr.printMatrix();

    matr.resizeMatrix(4, 4);
    matr.printMatrix();
    matr.printSubMatrix(1, 1, 2, 2);

    return 0;
}
