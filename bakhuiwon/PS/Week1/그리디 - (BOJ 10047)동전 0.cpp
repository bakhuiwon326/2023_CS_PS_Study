// 뜨거운 붕어빵

#include <iostream>

using namespace std;

int n, k, sum;
int arr[10];

int main() {

    scanf("%d %d", &n, &k); // 동전 종류 n개, 타겟 값 k

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 가치가 높은 동전부터
    for (int i = n - 1; i >= 0; i--) {
        sum += k / arr[i];
        k %= arr[i];
    }

    printf("%d",  sum);

    return 0;

}