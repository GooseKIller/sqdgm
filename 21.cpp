#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    const int si = 100;
    int b, arr[si][si];
    int n = 15, m = 5, c = 1, e = 1, life = 30, place = 0;
    for (int p = 0; p < 15; p++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (j == 0) {
                    arr[i][j] = c;
                }
                else if (j == m - 1) {
                    arr[i][j] = c;
                }
                else if (j == 2) {
                    arr[i][j] = c;
                }
                else if (e % 2 == 0) {
                    arr[i][j] = 0;
                    e++;
                }
                else {
                    arr[i][j] = 1;
                    e++;
                }
            }c++;
        }//making map
	int a = rand() % 2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << setw(2) << arr[i][j] << " ";
            }cout << endl;
        }
        if (life >= 1 && place!=n) {
            cin >> b;
        }
        else {
            cout << a << endl;
        }
        if (b == a) {
            place += 1;
            cout << place << ":place" << " " << life << ":survivers" << endl;
        }//menu
        else {
            life -= 1;
            cout << place << ":place" << " " << life << ":survivers" << endl;
        }c = 1;
    }
    if (life >= 1 && place==n) {
        cout << "win";//game results
    }
    else  if (life == 0 && place<n){
        cout << "lose";
    }
    return 0;
}
