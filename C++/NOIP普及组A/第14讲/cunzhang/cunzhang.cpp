#include <iostream>
#include <algorithm>
using namespace std;

struct Sheep {
    int id;
    string name;
    int votes;
};

bool compare(const Sheep& sheep1, const Sheep& sheep2) {
    if (sheep1.votes == sheep2.votes) {
        return sheep1.id < sheep2.id;
    }
    return sheep1.votes > sheep2.votes;
}

int main() {
    freopen("cunzhang.in", "r", stdin);
    freopen("cunzhang.out", "w", stdout);

    int n;
    cin >> n;
    int votes[n];
    for (int i = 0; i < n; i++) {
        cin >> votes[i];
    }

    Sheep candidates[3] = {
        {1, "喜羊羊", 0},
        {2, "懒羊羊", 0},
        {3, "美羊羊", 0}
    };

    for (int vote : votes) {
        for (int i = 0; i < 3; i++) {
            if (candidates[i].id == vote) {
                candidates[i].votes++;
                break;
            }
        }
    }

    sort(candidates, candidates + 3, compare);

    for (int i = 0; i < 3; i++) {
        cout << candidates[i].id << " " << candidates[i].name << " " << candidates[i].votes << endl;
    }

    fclose(stdin);
    fclose(stdout);
    return 0;
}
