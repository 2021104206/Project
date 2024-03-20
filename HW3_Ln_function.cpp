#include <iostream>
using namespace std;
void main() {
	double a, b, t, dt, cal, anal;
	// function y = ln ( at + b)
	cout << "The function is y=ln(at+b)" << endl;
	//differentiation
	cout << "Insert value of a & b" << endl;
	cin >> a >> b;
	cout << "Insert the value of t & dt" << endl;
	cin >> t >> dt;
	anal = a / (a * t + b);
	cal = log((a * (t + dt) + b) / (a * t + b)) / dt;
	cout << "Calculated value is " << cal << "\nAnalyzed value is " << anal << "\nApproximation error is " << abs((anal - cal) / anal * 100) << "%" << endl;
	//integration
	double ax, bx;
	int n;
	cout << "\nInsert the value of ax & bx & n" << endl;
	cin >> ax >> bx >> n;
	anal = ((1 / a) * (a * bx + b) * log(a * bx + b) - bx) - ((1 / a) * (a * ax + b) * log(a * ax + b) - ax);
	dt = (bx - ax) / n;
	cal = 0;
	for (int i = 0; i < n; i++) {
		cal += log((a * (ax + dt * i) + b)) * dt;
	}
	cout << "Calculated value is " << cal << "\nAnalyzed value is " << anal << "\nApproximation error is " << abs((anal - cal) / anal * 100) << "%" << endl;
}