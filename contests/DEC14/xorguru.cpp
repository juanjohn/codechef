#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
const int MAXN=100000+10;

int A[MAXN];
int N,K;

int main() {
  int T; scanf("%d", &T);
  int max;
  while (T--) {
    scanf("%d", &N);
    scanf("%d",&K);
    A[0]=K;
    for (int i=1; i<=N; i++) {
      scanf("%d", &A[i]);
      A[i]^=A[i-1];
    }
    long long ret=0;
    for (int i=0, p=1; i<30; i++, p<<=1) {
      int c=0;
      for (int j=0; j<=N; j++) {
	if (A[j]&p) c++;
      }
      ret=(long long)c*(N-c+1)*p;
      if(ret>max)
	max=ret;
    }
    printf("%lld\n", max);
  }
  return 0;
}
