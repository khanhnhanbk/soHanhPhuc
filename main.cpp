#include <iostream>

using namespace std;

int main(){
    int numberN;
    cout << "input n: ";
    cin >> numberN;
    int dem = 0;
    int copyNum = numberN;
    int sumNum = 0;
    while (copyNum > 0) {
        dem++;
        sumNum += copyNum % 10;
        copyNum /= 10;
    }

    copyNum = numberN;
    int sum2 = 0;
    if (dem % 2 == 0) {
        for (int i = 0; i < dem / 2; i++){
            sum2 += copyNum % 10;
            copyNum /= 10;
        }
    }
    if (sum2 * 2 == sumNum) cout << "true";
    else cout << "flase";
    return 0;
}
