#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }
struct node 
{	int data;
	int max; };
node arr[10001]{};

int grape(int n) {
	int max = 0;
	arr[1].max = arr[1].data;
	//max = max > arr[1].max ? max : arr[1].max;
	arr[2].max = arr[1].max + arr[2].data;
	arr[2].max = arr[1].max > arr[2].max ? arr[1].max : arr[2].max;
	//max = max > arr[2].max ? max : arr[2].max;
	arr[3].max = arr[2].data >= arr[1].max ? arr[3].data + arr[2].data : arr[3].data + arr[1].max;
	arr[3].max = arr[2].max > arr[3].max ? arr[2].max : arr[3].max;
	//max = max > arr[3].max ? max : arr[3].max;
	for (int i = 4; i <= n; i++) {
		arr[i].max = arr[i - 1].data + arr[i - 3].max > arr[i - 2].max ? arr[i].data + arr[i - 1].data + arr[i - 3].max : arr[i].data + arr[i - 2].max;
		if (arr[i - 1].max > arr[i].max) arr[i].max = arr[i - 1].max;
	}
	return arr[n].max;
}
int main() {
	init();
	int n; cin >> n;
	for (int i = 1; i <= n; i++) cin >> arr[i].data;
	cout << grape(n);
}