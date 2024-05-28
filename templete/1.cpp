#include <iostream>

using namespace std;


/*void sort1(int a[], int len) {
	cout << sizeof(a) << sizeof(a[0]) << endl;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}

void sort2(int a[]) {
	swap(a[0], a[1]);
}

int main() {
	int a[10] = {7, 6, 5, 4, 3, 2, 1};
	sort1(a, sizeof(a) / sizeof(a[0]));
	//sort1(a);
	for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++) {
		cout << a[i];
	}
}
 // #endregion */


int str(int a,int b)
{
    return a+b;
}
float str(float a,float b)
{
    return a+b;
}

int main()
{
    float a=10.0,b=10.0;
    cout<<str(a,b);
}