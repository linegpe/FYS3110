// C++ code to solve Oblig3 numerically
#include <iostream>
#include <cmath>
#include <fstream>
#include "armadillo"

using namespace std;
using namespace arma;

int main(){
	int N = 20; // Dimensions
	double g = 1;
	double V = 4;

	// Define Hamiltonian matrix:
	mat H = zeros<mat>(N,N);
	H(0,0) = -V;
	for (int i = 0 ; i < N ; i++){
		for (int j = 0 ; j < N ; j++){
			if (i == j +1 ){
				H(i,j) = -g;
			}
			if (i == j-1){
				H(i,j) = -g;
			}
			//cout << H(i,j) << endl;
		}
	}

	cout << "The eigenvalues of H are: " << endl;
	cout << eig_sym(H) << endl;

	ofstream myfile; 
	myfile.open("eigenvalues.txt");
	for (int i = 0; i  < N; i++){
		
	}
	
	return 0;
}