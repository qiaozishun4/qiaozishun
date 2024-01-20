#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

struct Student {
    string name;
    int chinese;
    int math;
    int english;
};

int main() {
    freopen("jige.in", "r", stdin);
	freopen("jige.out", "w", stdout);
	
	int n;
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].chinese >> students[i].math >> students[i].english;
    }

    for (const auto& student : students) {
        if (student.chinese >= 60 && student.math >= 60 && student.english >= 60) {
            cout << student.name << " " << student.chinese << " " << student.math << " " << student.english << endl;
        }
    }
	
	fclose(stdin);
	fclose(stdout);
    return 0;
}
