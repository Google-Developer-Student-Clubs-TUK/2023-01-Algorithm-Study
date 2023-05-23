a, b = map(int, input().split())
print(a//b)
print(a % b)

# C++ 방식
# 
# 푼사람 -> 백준 아이디 : shrudfhr0628

##include <stdio.h>
##include <string.h>
#int n, m, l, x[2020], y[2020], z[2020];
#char X[2020], Y[2020];
#int f(int t) {
#	for (int i = 0; i < m; i++)
#		if (x[i + t] > y[i])
#			return 1;
#		else if (x[i + t] < y[i]) {
#			for (int j = t; j--;)
#				if (x[j])
#					return 1;
#			return 0;
#		}
#}
#int main() {
#	scanf("%s %s", X, Y);
#	n = strlen(X), m = strlen(Y);
#	for (int i = 0; i < n; i++)
#		x[i] = X[i] - 48;
#	for (int i = 0; i < m; i++)
#		y[i] = Y[i] - 48;
#	for (int i = 0; i <= n - m; i++) {
#		while (f(i)) {
#			for (int j = 0; j < m; j++)
#				x[i + j] -= y[j];
#			for (int j = m; j--;)
#				if (x[i + j] < 0)
#					x[i + j] += 10, x[i + j - 1]--;
#			z[l]++;
#		}
#		if (z[l] + l)
#			l++;
#	}
#	for (int i = 0; i < l; i++)
#		printf("%d", z[i]);
#	printf("\n");
#	for (int i = 0; i < n; i++)
#		if (x[i]) {
#			for (int j = i; j < n; j++)
#				printf("%d", x[j]);
#			break;
#		}
#		else if (i == n - 1)
#			printf("0");
#}