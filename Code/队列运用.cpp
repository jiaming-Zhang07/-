#include<cstdio>
#include<queue>
#include<map>
using namespace std;
int main() {
	int t, kase = 0;
	map<int, int>team;
	while (scanf("%d", &t) == 1 && t) {
		printf("Scenario #%d\n", ++kase);
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			int x;
			scanf("%d", &x);
			team[x] = i;
		}
		char c[10];
		queue<int>x, x2[1009];
		while (scanf("%s", c) == 1 && c[0] != 'S') {
			if (c[0] == 'D') {
				int m = x.front();
				printf("%d\n",m);
				x2[m].pop();
				if (x2[m].empty())x.pop();

			} else if (c[0] == 'E') {
				int v;
				scanf("%d", &v);
				int te = team[v];
				if (x2[te].empty()) {
					x.push(te);
				}
				x2[te].push(v);
			}
		}
		printf("\n");

	}
}
