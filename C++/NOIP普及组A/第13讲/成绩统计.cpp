#include <iostream>
#include <algorithm>
using namespace std;

struct student{
	string name;
	double chinese, math, total;
};

bool compare(student a, student b){
	return a.total > b.total;
}

int main(){
	student stu[105];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> stu[i].name >> stu[i].chinese >> stu[i].math;
		stu[i].total = stu[i].chinese + stu[i].math;
	}
	sort(stu, stu + n, compare);
	for (int i = 0; i < n; i++){
		cout << stu[i].name << " " << stu[i].chinese << " " << stu[i].math << " " << stu[i].total << endl;
	}
	return 0;
}
