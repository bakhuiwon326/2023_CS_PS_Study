// �߰ſ� �ؾ

#include <iostream>
#include <vector>
#include <algorithm>
#include <memory.h>

using namespace std;

int n; // 1~1000��.
int num[10001];// ������ üũ. n�� 1000���̸� 4byte(int) * 1000�� = 40MB��. �޸� �ʰ���


int main() {

    scanf("%d", &n);

    int input;
    for (int i = 0; i < n; i++) {
        scanf("%d", &input);
        num[input]++;
    }

    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < num[i]; j++) {
            printf("%d\n", i);
       }
    }

    return 0;

}