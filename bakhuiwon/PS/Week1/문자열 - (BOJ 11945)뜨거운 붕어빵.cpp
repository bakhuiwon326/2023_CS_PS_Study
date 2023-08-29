// 뜨거운 붕어빵

#include <iostream>

using namespace std;

int n, m;
int map[11][11];

void copyMap(int(*origin)[11], int(*tmp)[11]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { // 열만 뒤집기
            tmp[i][j] = origin[i][j];
        }
    }
}

int main() {

    // input
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &map[i][j]);
        }
    }

    // solve
    int tmp[11][11] = { 0, };

    copyMap(map, tmp);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { // 열만 뒤집기
            map[i][m - 1 - j] = tmp[i][j];
        }
    }
    
    // print
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { // 열만 뒤집기
            printf("%d", map[i][j]);
        }
        printf("\n");
    }

    return 0;

}