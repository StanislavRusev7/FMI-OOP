#include "Matrix.h"
#include <iostream>

Matrix::Matrix(int rows, int cols) {

	this->rows = rows;
	this->cols = cols;

	data = new int* [rows];
	for (int i = 0; i < rows; i++) {
		data[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			data[i][j] = 0;
		}
	}
}

Matrix::~Matrix() {
	destroy();
}

Matrix::Matrix(const Matrix& other) {
	copy(other);
}

Matrix& Matrix::operator=(const Matrix& other) {
	if (this != &other) {
		destroy();
		copy(other);
	}
	return *this;
}

Matrix::Matrix(Matrix&& other) {
	rows = other.rows;
	cols = other.cols;
	data = other.data;

	other.rows = 0;
	other.cols = 0;
	other.data = nullptr;
}

Matrix& Matrix::operator=(Matrix&& other) {
	if (this != &other) {
		destroy();
		rows = other.rows;
		cols = other.cols;
		data = other.data;

		other.rows = 0;
		other.cols = 0;
		other.data = nullptr;
	}
	return *this;
}

int& Matrix::operator()(int row, int col) const {
	if (row < 0 || col < 0 || row >= this->rows || col >= this->cols) {
		throw std::exception("Invalid indexes");
	}
	return data[row][col];
}

Matrix Matrix::operator+(const Matrix& other) const {
	Matrix result(rows, cols);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			result(i, j) = data[i][j] + other(i, j);
		}
	}

	return result;
}

bool Matrix::operator==(const Matrix& other) const {
	try {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				if (data[i][j] != other(i, j)) {
					return false;
				}
			}
		}
		return true;

	}
	catch (const std::exception&) {
		return false;
	}
}

void Matrix::copy(const Matrix& other) {
	destroy();
	this->rows = other.rows;
	this->cols = other.cols;

	data = new int*[rows];
	for (int i = 0; i < rows; i++) {
		data[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			data[i][j] = other.data[i][j];
		}
	}
}

void Matrix::destroy() {
	for (int i = 0; i < rows; i++) {
		delete[] data[i];
	}

	delete[] data;
}

Matrix transpose(const Matrix& matrix)
{
	Matrix result(matrix.cols, matrix.rows);
	for (int i = 0; i < matrix.rows; i++) {
		for (int j = 0; j < matrix.cols; j++) {
			result(j, i) = matrix(i, j);
		}
	}
	return result;
}

void print(const Matrix& matrix) {
	for (int i = 0; i < matrix.rows; i++) {
		for (int j = 0; j < matrix.cols; j++) {
			std::cout << matrix.data[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
