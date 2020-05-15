#include "queue.h"

int main()
{
	Queue<int> Q;
	bool q = 0;
	int mode;
	while (!q) {
		system("cls");
		cout << "Size : " << Q.Size() << "\nFirst : " << Q.First() << "; Last : " << Q.Last() << endl;
		cout << "1)Add element\n2)Remove element\n3)Clear\n4)Quit\nChoose action : "; cin >> mode;
		switch (mode) {
		case 1:
			int x;
			cout << "Enter element : "; cin >> x;
			Q.push_back(x);
			break;
		case 2:
			Q.pop_front();
			break;
		case 3:
			Q.clear();
			break;
		case 4:
			q = true;
			break;
		}
	}
	return 0;
}

