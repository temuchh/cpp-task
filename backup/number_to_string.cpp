#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cout << "Введіть число: ";
    cin >> num;

    string strNum = to_string(num);
    cout << "Число у вигляді рядка: " << strNum << endl;

    return 0;
}
