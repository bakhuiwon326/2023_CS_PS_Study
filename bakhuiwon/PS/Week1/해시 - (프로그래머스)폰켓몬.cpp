#include <vector>
#include <set>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int length = nums.size();
    int select = length / 2; // 몇마리 선택할 수 있는지
    set<int> setset; // 종류만 담기(중복없이)

    for (int i = 0; i < length; i++) {
        setset.insert(nums[i]);
    }

    // 선택할 수 있는 개수보다 종류의 개수가 작다? 최대로 선택할 수 있는 개수는 종류 개수
    if (setset.size() <= select) answer = setset.size();
    else answer = select; // 아니면 선택할 수 있는 개수


    return answer;
}