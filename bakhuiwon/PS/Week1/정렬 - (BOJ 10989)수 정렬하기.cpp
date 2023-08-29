// 뜨거운 붕어빵

#include <iostream>
#include <vector>
#include <algorithm>
#include <memory.h>

using namespace std;

int n; // 1~1000만.
int num[10001];// 개수를 체크. n이 1000만이면 4byte(int) * 1000만 = 40MB다. 메모리 초과됨


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