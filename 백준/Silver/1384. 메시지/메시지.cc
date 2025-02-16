#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	// 원형으로 앉은 뒤 종이에 자기 이름을 작성
	// 긍정적인 내용과 부정적인 내용을 구별
	// 누가 누구에게 나쁜 말을 했는지
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
	int g = 1;
	while (1) {
		int n;
		cin >> n;
		if (n == 0)
			return 0;
		vector<string> name(n+1);
		vector<bool> Message[21];
		vector<pair<string, string>> res;
		int x = 0; // 부정적 개수
		for (int i = 0; i < n; i++) {
			cin >> name[i]; // 이름 입력
			for (int j = 0; j < n - 1; j++) {
				char tmp;
				cin >> tmp;
				if (tmp == 'P')
					Message[i].push_back(1); // 긍정적
				else {
					Message[i].push_back(0); // 부정적
					x++;
				}
			}
		}
		cout << "Group " << g << "\n";
		if (x == 0)
			cout << "Nobody was nasty\n"; // 부정적 메세지가 없을 때!
		else {
			// 각 편지 검사 시작
			for (int i = 0; i < n; i++) {
				for (int j = 1; j < n; j++) {
					if (!Message[i][j-1]) {
                        int idx = (i-j) % n;
                        if(idx < 0)
                            idx += n;
						res.push_back({ name[idx], name[i] });

						// Ann 4 3 2 1
						// Bob 0 4 3 2
						// Clive 1 0 4 3
						// Debby 2 1 0 4
						// Eunice 3 2 1 0
						//res.push_back({ name[n - (i + (j + 1)) % n], name[i] });
					}
				}
			}
			for (auto nam : res)
				cout << nam.first << " was nasty about " << nam.second << '\n';
			//for(auto)
		}
		cout << '\n';
		g++;
	}
}