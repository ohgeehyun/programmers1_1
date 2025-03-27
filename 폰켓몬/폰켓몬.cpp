// 프로그래머스 폰켓몬 문제
/*
    주어진 문제는 결과적으로 중복된 값이 있는 자료구조에서 중복을 없애고 데이터의 사이즈의 조건보다 크다면 조건에서 끝 끝나고 조건 보다 작을시에는 무조건 데이터의 사이즈를 따라기기 때문에
    중복을 허용하지않는 데이터구조를 사용해서 set 에 데이터를 넣고 값을 출력해주면 된다고 생각하고 문제 접근.
    
    set 
    삽입 (insert): O(log n)
    삭제 (erase): O(log n)
    검색 (find): O(log n)

    set의 시간복잡도인데 현재 문제의 경우 굳이 정렬이필요한 상황은 아니라 unordered_set(hash_set)을 사용하는게 더 좋았을 수도 있다고 생각함.
    unordered_set
    삽입 (insert): 평균 O(1), 최악 O(n)
    삭제 (erase): 평균 O(1), 최악 O(n)
    검색 (find): 평균 O(1), 최악 O(n)

*/

#include<iostream>
#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 1;
    set<int> deduplication(nums.begin(), nums.end());


    return min(deduplication.size(), nums.size() / 2);
}

int main()
{
    std::cout << "Hello World!\n";
}
