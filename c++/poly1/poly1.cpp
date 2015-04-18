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

		//optional
		int get_degree ();
};

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
	corre = NULL;
}

int Polynomial :: get_degree(){

	return degree;
}

int main (){
	Polynomial poly1;
	poly1.set_degree(3);
	cout << poly1.get_degree() << endl;
	return 0;
}
