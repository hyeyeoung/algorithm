#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
    for (int i = 0;i<size(a);i++) ans+= a[i];
    
	return ans;
}
