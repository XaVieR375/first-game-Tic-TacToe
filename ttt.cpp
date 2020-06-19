#include <iostream>
#include <vector>
using namespace std;

void display(vector<string> positions)
{
	vector<string> symbols2 = { "                   \n", "1","2","3","4","5","6","7","8","9", "   ", "  |  ", "   \n", " _____|_____|______\n", "      |     |      \n", "   " };
	symbols2[1] = positions[1];
	symbols2[2] = positions[2];
	symbols2[3] = positions[3];
	symbols2[4] = positions[4];
	symbols2[5] = positions[5];
	symbols2[6] = positions[6];
	symbols2[7] = positions[7];
	symbols2[8] = positions[8];
	symbols2[9] = positions[9];
	cout << symbols2[0] << symbols2[10] << symbols2[1] << symbols2[11] << symbols2[2] << symbols2[11] << symbols2[3] << symbols2[12];
	cout << symbols2[13] << symbols2[14];
	cout << symbols2[10] << symbols2[4] << symbols2[11] << symbols2[5] << symbols2[11] << symbols2[6] << symbols2[12];
	cout << symbols2[13] << symbols2[14];
	cout << symbols2[10] << symbols2[7] << symbols2[11] << symbols2[8] << symbols2[11] << symbols2[9] << symbols2[12] << symbols2[0];
	//OR, same as below
	// display's 9 elements is equivelent to the 9 console outputs below:
	//cout << "                   \n"; //1, 0
	//cout << "   1  |  2  |  3   \n"; //2, 10,1,2,3,12
	//cout << " _____|_____|______\n"; //3, 13
	//cout << "      |     |      \n"; //4, 14
	//cout << "   4  |  5  |  6   \n"; //5, 10,4,5,6,12
	//cout << " _____|_____|______\n"; //6, 13
	//cout << "      |     |      \n"; //7, 14
	//cout << "   7  |  8  |  9   \n"; //8, 10,7,8,9,12
	//cout << "                   \n"; //9, 0*/
}
