#include <iostream>
using namespace std;
int main() //asin(wt)
{
	double a, w, t, dt, num, anal;

	//differentiation
	cout << "a와 w를 입력하세요: " << endl;
	cin >> a >> w;
	cout << "t값과 dt값을 입력하세요: " << endl;
	cin >> t >> dt;
	anal = a * w * cos(w * t);
	num = a * ((sin(w * (t + dt)) - sin(w * t)) / dt);
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << abs(num - anal) / anal * 100 << "%\n";

	//integration
	double c,d;
	int N;
	cout << "적분구간 a b와 N를 차례로 입력하세요: " << endl;
	cin >> c >> d >> N;
	anal = -(a / w) * (cos(w * d) - cos(w * c));
	dt = (d - c) / N;
	num = 0;
	for (int i = 0; i < N; i++) {
		num += a * sin(w * (c + dt * i)) * dt;
	}
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << abs(num - anal) / anal * 100 << "%\n";

	return 0;
}