#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<int> q;

    // 입력 받기
    int num_commands;
    cin >> num_commands;

    // 명령어 처리
    for (int i = 0; i < num_commands; i++) {
        string command;
        cin >> command;

        if (command == "push") {
            int value;
            cin >> value;
            q.push(value);
        } else if (command == "pop") {
            if (!q.empty()) {
                cout << q.front() << endl;
                q.pop();
            } else {
                cout << -1 << endl;
            }
        } else if (command == "size") {
            cout << q.size() << endl;
        } else if (command == "empty") {
            cout << q.empty() << endl;
        } else if (command == "front") {
            if (!q.empty()) {
                cout << q.front() << endl;
            } else {
                cout << -1 << endl;
            }
        } else if (command == "back") {
            if (!q.empty()) {
                cout << q.back() << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
