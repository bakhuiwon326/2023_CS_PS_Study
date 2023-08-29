#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < scoville.size(); i++) pq.push(scoville[i]);

    while (!pq.empty()) {
        int one = pq.top();
        pq.pop();
        if (one >= K) break;
        else {
            if (!pq.empty()) {
                int two = pq.top();
                answer++;
                pq.pop();
                pq.push(one + 2 * two);
            }
            else {
                answer = -1;
                break;
            }
        }
    }

    return answer;
}