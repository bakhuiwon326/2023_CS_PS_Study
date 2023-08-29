#include <vector>
#include <set>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int length = nums.size();
    int select = length / 2; // ��� ������ �� �ִ���
    set<int> setset; // ������ ���(�ߺ�����)

    for (int i = 0; i < length; i++) {
        setset.insert(nums[i]);
    }

    // ������ �� �ִ� �������� ������ ������ �۴�? �ִ�� ������ �� �ִ� ������ ���� ����
    if (setset.size() <= select) answer = setset.size();
    else answer = select; // �ƴϸ� ������ �� �ִ� ����


    return answer;
}