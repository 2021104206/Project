#include <iostream>      // for cout
using namespace std;    // for the names used by C++
int main() {
    float a, b, x, dx, num, ana1;
    cout << "a b ? =";
    cin >> a >> b;
    cout << " x dx ? =";
    cin >> x >> dx;
    ana1 = -a * b * sin(b * x);
    num = a * (cos(b * (x + dx)) - cos(b * x)) / dx;
    cout << "num = " << num << "  ana1 = " << ana1 << endl;
    cout << "error = " << abs((num - ana1) / ana1 * 100) << "%"<<endl;
    float A, B;
    int N;
    cout << "A B N ? =";
    cin >> A >> B >> N;
    ana1 = a*(sin(b * B) - sin(b * A)) / b;
    dx = (B - A) / N;
    num = 0;
    for (int i = 0; i < N; i++) {
        num += a * cos(b * (A + dx * i)) * dx;
    }
    cout << "num = " << num << "ana1 = " << ana1 << endl;
    cout << "error = " << abs((num - ana1) / ana1 * 100) << "%";
}