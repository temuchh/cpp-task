#include <iostream>
#include <string>
using namespace std;

int main() {
    for (int i = 0; i <= 999999; i++) {
        string ticket = to_string(i);
        while (ticket.length() < 6) ticket = "0" + ticket;

        int sum1 = (ticket[0]-'0') + (ticket[1]-'0') + (ticket[2]-'0');
        int sum2 = (ticket[3]-'0') + (ticket[4]-'0') + (ticket[5]-'0');

        if (sum1 == sum2)
            cout << ticket << endl;
    }
    return 0;
}
