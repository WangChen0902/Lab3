#include <iostream>
#include <vector>
#include <fstream>
#include <map>
#include <string>

using namespace std;

const string SRC = "D:\\WCs\\Lab3\\Lab3\\input.txt";
const string SAVE = "D:\\WCs\\Lab3\\Lab3\\output.txt";

//二分搜索算法，默认dic是按字典序排列的有序数组
int bSearch(string array[], int low, int high, string target)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (array[mid]>target)
			high = mid - 1;
		else if (array[mid]<target)
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}

int main()
{
	//从文本中读取数据
	int n, m;
	ifstream inf(SRC);
	inf >> n;
	string dic[128];
	string text[128];
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

	map<string, int> textMap;
	for (int i = 0; i < m; i++) {
		textMap.insert(pair<string,int>(text[i],0));
	}
	//对dic二分搜索text中的单词
	map<string, int>::iterator it = textMap.begin();
	for (int i = 0; i < m;i++) {
		int flag = bSearch(dic, 0, n - 1, text[i]);
		if (flag == -1) {
			textMap.find(text[i])->second++;
		}
	}
	
	int max = 0;
	for (it; it != textMap.end(); it++) {
		if (it->second > max) {
			max = it->second;
		}
	}
	//cout << max << endl;
	ofstream save(SAVE);
	save << max;
    return 0;
}

