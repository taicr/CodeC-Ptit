#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
	
    int n, m, cc = 0, cl = 0;
    scanf("%d%d", &n, &m);
    int a[n + 1][m + 1], b[n + 1][m + 1];
    int sum = 0, max = 0,max_col_sum=0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &a[i][j]);
        }
  
    }
      printf("Test %d:\n",k);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            sum += a[i][j];
        }
        if (sum > max) max = sum;
        sum = 0;
    }
    for (int i = 1; i <= n; i++) {
        sum = 0;
        for (int j = 1; j <= m; j++) {
            sum += a[i][j];
        }
        if (sum < max) {
            for (int j = 1; j <= m; j++) {
                b[cc][cl] = a[i][j];
                cl++;
            }
            cc++;
            cl = 0;
        }
    }
 int sum2 = 0, max2 = 0, gan1 = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < cc; j++) {
            sum2 += b[j][i];
        }
        if (sum2 > max2) {
            max2 = sum2;
            gan1 = i;
        }
        sum2 = 0;
    }

    for (int i = 0; i < cc; i++) {
        sum2 = 0;
        for (int j = 0; j < m; j++) {
            if (j != gan1) {
                sum2 += b[i][j];
                printf("%d ", b[i][j]);
            }
        }
        printf("\n");
    }

printf("\n");
}

}
