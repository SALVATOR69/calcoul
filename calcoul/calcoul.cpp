#include <iostream>

using namespace std;

double add(double num1, double num2) {
	return num1 + num2;

}
double sub(double num1, double num2) {
	return num1 - num2;

}
double multip(double num1, double num2) {
	return num1 * num2;

}
double divd(double num1, double num2) {
	return num1 / num2;
}



int main() {

	printf("|------------------------------------------------------|\n");
	printf("|                                                      |\n");
	printf("| This is a Binumeral calculator \"DON'T STOP MEWING\"   |\n");
	printf("|                                                      |\n");
	printf("|------------------------------------------------------|\n");
	printf("\n");
	printf("\n");

	double a, b, c{};
	char opp;
	printf("PLZ enter the value of num1: ");
	cin >> a;
	printf("PLZ enter the value of num2: ");
	cin >> b;
	printf("Choose what oppetation: ");
	cin >> opp;


	switch (opp)
	{
	case '+':
		c = add(a, b);
		break;
	case '-':
		c = sub(a, b);
		break;
	case '*':
		c = multip(a, b);
		break;
	case '/':
		if (b != 0) {
			c = divd(a, b);
		}
		else
			printf("NIgga u can't divide by 0!\n");
		break;
	default:
		printf("IvalidOpperatorError plz stfu\n");
		break;
	}
	
	
	printf("\n");
	printf("\n");


	cout << "|----------------\n" ;
	cout << "| The result is: " << c<< "\n";
	cout << "|----------------\n" ;
	return 0;
}