#include <iostream>
using namespace std;


int calculation(){
	int r;                                                          //������ 
    int c;                                                          //��������
    int res;                                                        //���������
    cout << "Enter row (1 - 8)" << endl;
    if(cin >> r){                                                   //�������� �� ������ 
	cout << "Enter column (1 - 8)"<< endl;
	 if(cin >> c)
   {
   res = 2*(8-1) - max(r,c) + min(r,c) - max(r,8-c+1) + min(r,8-c+1);          //�������������� ������� ������� ��������� �����
   }  
   else{
   cout << "unapropriate number or symbol (1 - 8)" << endl;
}
}
else{ 
cout << "unapropriate number or symbol (1 - 8)" << endl;
}
	return res;
	
}


int main(int argc, char** argv) {
	
	 cout << "Bishop can take " << calculation() << " squares";
	 
	return 0;
}
