// �߰ſ� �ؾ

#include <iostream>

using namespace std;

int n, k, sum;
int arr[10];

int main() {

    scanf("%d %d", &n, &k); // ���� ���� n��, Ÿ�� �� k

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // ��ġ�� ���� ��������
    for (int i = n - 1; i >= 0; i--) {
        sum += k / arr[i];
        k %= arr[i];
    }

    printf("%d",  sum);

    return 0;

}