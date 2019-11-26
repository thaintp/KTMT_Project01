#include "QInt.h"
#include "Qfloat.h"


int main(int argc, char const* argv[])
{

	std::string a{
		"01111111111111111111111111111111111111111111111111111111111111111111111111111111111111010101111001110110111100110010000011111111"
	};
	std::string b{
		"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001001100110011001100110011000110"
	};
	std::string temp{
		"10000000000000000000000000010000000000001000000000000000000000000000000000000000000000000000000000000000000000000000000000000001" };
	std::string dec{ "193284531250891" };
	std::string hex{ "AFCA8FD366CB" };
	QInt qa(a);
	QInt qb(b);
	// QInt bin(dec);

	QInt qc = qa;
	// std::cout << "Output: " << QIntToBinString(qc);
	// std::cout << BinToDec("00000000000000000000000000000000000000000000000000000000000000000000000000000000000010000011011010110011010011101100100101110011") << "\n";

	// std::string testFloat{ "11000101000100101001001000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000" };
	string d = "011111111111111100000000000000000000100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
	Qfloat fa(d);

	// cout << FloatBinToDec(d);



	// std::string testDec("-1234.125");
	// Qfloat fb(testDec);

	//for (int i = -32; i < 33; ++i) {
		//std::cout << "2^" << i << " = " << pow_2_n(i) << "\n";
	//}

	std::cout << MultiplyNumberString("-198325324151.1235123", "00000.00001235") << "\n";


	return 0;
}