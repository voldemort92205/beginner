#include <iostream>
#include <cstdlib>
using namespace std;

class Polynomial {
	private:
		double *corre;
		int degree;
		double value;
	public :
		Polynomial();
		void set_degree();
		void set_degree(int n);
		void set_corre();
		void reset();
		//optional
		int get_degree ();
		void get_corre();
};
void Polynomial :: reset (){
	if (degree != -1){
		delete [] corre;
		corre = NULL;
		degree = -1;
		value = 0;
	}
}
Polynomial :: Polynomial (){
	corre = NULL;
	degree = -1;
	value = 0;
}
void Polynomial :: set_degree(){
	cout << "enter degree ( greater than 0 ): ";
	cin >> degree;
	if (degree < 0){
		cout << "degree error\n";
		degree = -1;
	}
}
void Polynomial :: set_degree (int n){
	if (n < 0){
		cout << "error degree \n";
		degree = -1;
	}
	else{
		degree = n;
	}
}
void Polynomial :: set_corre(){
	//corre = NULL;
	if (degree != -1){
		corre = new double [degree+1];
		for (int i = degree; i >= 0; i --){
			cin >> *(corre + i);
		}
//			cin >> degree
	}
}

int Polynomial :: get_degree(){

	return degree;
}
void Polynomial :: get_corre() {
	for (int i = degree; i >= 0; i --){
		cout << *(corre+i) << " ";
	}
	cout << endl;
}

int main (int argc, char **argv){
	Polynomial poly1;
	poly1.set_degree(3);
	//cout << poly1.get_degree() << endl;
	poly1.set_corre();

	return 0;
}
