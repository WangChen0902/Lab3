#include <iostream>
#include <vector>
#include <fstream>
#include <map>
#include <string>

using namespace std;

const string SRC = "D:\\WCs\\Lab3\\Lab3\\input.txt";

int main()
{
	//从文本中读取数据
	int n, m;
	ifstream inf(SRC);
	inf >> n;
	string dic[128];
	string text[128];
	//cout << n << endl;
	for (int i = 0; i < n; i++) {
		inf >> dic[i];
		//cout << dic[i] << endl;
	}
	inf >> m;
	for (int j = 0; j < m; j++) {
		inf >> text[j];
		//cout << text[j] << endl;
	}
	inf.close();

    return 0;
}

