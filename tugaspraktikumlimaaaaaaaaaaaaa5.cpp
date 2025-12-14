#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

void main()
{
	int data[11] = { 12, 17,  10, 5, 15, 25, 11, 7, 25, 16,19 };

	vector<int> myvector(data, data + 11);

	auto cetakvector = [](const vector<int> vec, const string& judul)
		{
			cout << judul << endl;
			for (int val : vec)
			{
				cout << val << " | ";
			}
			cout << "\n================================================\n";
		};
	cetakvector(myvector, "isi vector awal:");

	//ASC (kecil ke besar)
	sort(myvector.begin(), myvector.end());
	cetakvector(myvector, "isi vector setelah sorting ASC:");

	//DESC (besar ke kecil)
	sort(myvector.begin(), myvector.end(), greater<int>());
	cetakvector(myvector, "isi vector setelah sorting DESC:");
}