#include <iostream>
using namespace std;
struct HardDisk {
	int p, w, r, c;
};
int main() {
	// your code goes here
	int n, h;
	cin >> n >> h;
	HardDisk arrHardDisk[h];
	int p, w, r, c;
	for (int i = 0; i < h; i++) {
		cin >> p >> w >> r >> c;
		arrHardDisk[i].p = p;
		arrHardDisk[i].w = w;
		arrHardDisk[i].r = r;
		arrHardDisk[i].c = c;
	}
	int penalty;
	cin >> penalty;
	while (n--) {
	    cout << "g" << endl;
	    fflush(stdout);
	    int type;
	    cin >> type;
	    int clientId;
	    if (type == 0) {
		int q;
		cin >> clientId >> q;
		cout << "p s " << -1 << " " << -1 << endl;
	    } else if (type == 1) {
	    	int p;
	    	cin >> clientId >> p;
	    	cout << "p i " << -1 << " " << -1 << endl;
	    } else {
	    	int hid;
	    	cin >> hid;
	    }
	    if (type != 2)
	    	fflush(stdout);
	}
	cout << "end" << endl;
	return 0;
}
Comments
