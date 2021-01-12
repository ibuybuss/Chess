#include <iostream>
using namespace std;





int main(int argc, char** argv) {
	int r;
    int c;
    int sum;
    cout << "Enter row (1 - 8)" << endl;
	cin >> r;
	cout << "Enter column (1 - 8)"<< endl;
	cin >> c;  
   sum = 2*(8-1) - max(r,c) + min(r,c) - max(r,8-c+1) + min(r,8-c+1);
	 cout << sum;
	 
	return 0;
}
