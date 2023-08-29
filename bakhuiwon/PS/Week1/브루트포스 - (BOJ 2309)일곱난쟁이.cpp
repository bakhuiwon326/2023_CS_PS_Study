//#include <iostream>
//#include <memory.h>
//#include <vector>
//
//using namespace std;
//
//struct Atom {
//    int r, c;
//    int mass;
//    int speed;
//    int dir;
//    Atom(int r, int c, int mass, int speed, int dir) : r(r), c(c), mass(mass), speed(speed), dir(dir) {}
//};
//
//vector<Atom> map[51][51];
//vector<Atom> tmp_map[51][51];
//int n, m, k;
//int x, y, mm, s, d;
//int dr[8] = {-1,-1,0,1,1,1,0,-1};
//int dc[8] = {0,1,1,1,0,-1,-1,-1};
//
//
//void init() {
//    initMap();
//    isComplete.clear();
//    atom.clear();
//}
//
//void input() {
//    scanf("%d %d %d", &n, &m, &k);
//    for (int i = 0; i < m; i++) {
//        scanf("%d %d %d %d %d", &x, &y, &mm, &s, &d);
//        map[x][y].push_back(Atom(x, y, mm, s, d));
//    }
//}
//
//void initMap(vector<Atom> (*initMap)[51]) {
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            initMap[i][j].clear();
//        }
//    }
//}
//
//void moveAtom() {
//    // tmp_map 초기화
//    initMap(tmp_map);
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (map[i][j].size() == 0) continue;
//            for (int k = 0; k < map[i][j].size(); k++) {
//                int r = map[i][j][k].r;
//                int c = map[i][j][k].c;
//                int speed = map[i][j][k].speed;
//                int dir = map[i][j][k].dir;
//                int nr = (r + dr[dir] * speed + n * speed) % n + 1;
//                int nc = (c + dc[dir] * speed + n * speed) % n + 1;
//                map[i][j][k].r = nr;
//                map[i][j][k].c = nc;
//                tmp_map[nr][nc].push_back(map[i][j][k]);
//            }
//        }
//    }
//    map = initMap;
//}
//
//void AddAndDivideAtom(int r, int c) {
//    int sum_mass = 0;
//    int sum_speed = 0;
//    int cnt_udlr = 0; // 상하좌우 개수 세기
//    int cnt_cross = 0;
//    // 합친다.
//    for (int k = 0; k < map[r][c].size(); k++) {
//        sum_mass += map[r][c][k].mass;
//        sum_speed += map[r][c][k].speed;
//        // 상하좌우
//        if (map[r][c][k].dir % 2 == 0) cnt_udlr++;
//        else cnt_cross++;
//    }
//    int next_mass = sum_mass / 5;
//    int next_speed = sum_speed / map[r][c].size();
//    int next_dir = cnt_udlr == map[r][c].size() || cnt_cross == map[r][c].size() ? 0 : 1; // 2씩 더하면됨.
//    // 4개로 나눈다.
//    map[r][c].clear();
//    for (int i = 0; i < 4; i++) {
//        map[r][c].push_back(Atom(r, c, next_mass, next_speed, next_dir));
//        next_dir += 2;
//    }
//
//}
//
//int getTotalMass() {
//    int sum = 0;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (map[i][j] == 0) continue;
//            for (int k = 0; k < map[i][j].size(); k++) {
//                sum += map[i][j][k].mass;
//            }
//        }
//    }
//    return sum;
//}
//
//int main() {
//    printf("냐");
//    init();
//    printf("쀼");
//    input();
//    printf("뀨");
//    
//    while (k--) {
//        moveAtom();
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n; j++) {
//                if (map[i][j].size() < 2) continue;
//                AddAndDivideAtom(i, j); // (i,j) 위치의 원자들을 합치고 분할한다.
//            }
//        }
//    }
//
//    scanf("%d", getTotalMass());
//
//    return 0;
//
//}