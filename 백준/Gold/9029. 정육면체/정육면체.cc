#include <bits/stdc++.h>
using namespace std;
const int INF = 1987654321;

int T, W, L, H;
int dp[222][222][222];

int Cut(int w, int l, int h) {
	if (w == l && l == h) return 1;
	if (w == 1 || l == 1 || h == 1) return w * l * h;

	int& ret = dp[w][l][h];
	if (ret != -1) return ret;

	int cut_w = INF; // w 에 수직
	int cut_l = INF; // l 에 수직
	int cut_h = INF; // h 에 수직
	for (int i = 1; i < w / 2 + 1; ++i)
		cut_w = min(cut_w, Cut(i, l, h) + Cut(w - i, l, h));
	for (int i = 1; i < l / 2 + 1; ++i)
		cut_l = min(cut_l, Cut(w, i, h) + Cut(w, l - i, h));
	for (int i = 1; i < h / 2 + 1; ++i)
		cut_h = min(cut_h, Cut(w, l, i) + Cut(w, l, h - i));

	ret = min({ cut_w, cut_l, cut_h });
	dp[w][l][h] = ret;
	dp[w][h][l] = ret;
	dp[l][w][h] = ret;
	dp[l][h][w] = ret;
	dp[h][w][l] = ret;
	dp[h][l][w] = ret;

	return ret;
}

int main() {ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

memset(dp, -1, sizeof(dp));
cin >> T;
while (T--) {
	cin >> W >> L >> H;
	cout << Cut(W, L, H) << '\n';
}

return 0;
}