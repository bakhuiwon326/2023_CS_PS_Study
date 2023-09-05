# String

# 문자열

- cpp에서는 string 헤더 사용해 string 데이터 타입에 문자열 저장 가능
- 문자열 자르기, 합치기
    - str.substr(pos,length);
    - str1 += str2;
    - str = str1 + str2;
- 문자열 파싱
    - str[i];
    - str.at(i);
- 문자열 찾기
    - str.find(str1);
    - str.find(str1,pos);
- 문자열 치환
    - str.replace(pos,length,str1);
- 문자열 부분 복사
    - str.substr(pos,length);

## 관련 문제

- [11945번: 뜨거운 붕어빵 (acmicpc.net)](https://www.acmicpc.net/problem/11945)

### 해설

- **목표**
    - 주어진 붕어빵 모양의 문자열을 **좌우 반전**하여 출력해야 합니다.
- **해결**
    - 각 행의 문자열을 배열로 입력 받습니다.
    - 이중 for문을 사용해 각 행의 인덱스(i)는 증가하는 형태로, 해당 행의 각 열의 인덱스(j)는 감소하는 형태를 만들고, 배열에서 i번째 행과 j번째 열에 해당하는 값 출력합니다.
    - 이렇게 하면 각 줄의 문자열이 좌우로 반전되게 됩니다!

**코드 동작 순서**

1. **`N`**과 **`M`**을 입력받습니다. 여기서 **`N`**은 붕어빵의 줄 수를, **`M`**은 각 줄의 문자 수를 나타냅니다.
2. **`N`**번 반복하여 붕어빵의 각 줄을 문자열로 입력받습니다.
3. 입력받은 붕어빵의 각 줄을 좌우 반전하여 출력합니다.

### 소스 코드

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, M;
	string fishShapedBun[10];
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> fishShapedBun[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = M - 1; j >= 0; j--) {
			cout << fishShapedBun[i][j];
		}
		cout << "\n";
	}
}
```