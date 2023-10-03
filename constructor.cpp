#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, char s, int c, char *n)
    {
        roll = r;
        section = s;
        cls = c;
        strcpy(name, n);
    }
};
int main()
{
    // 23 no line a "Rahim Uddin" na diye tar upore nicher line ta dile kono warning asbena.
    // char name[100] = "Rahim Ullah";
    Student rahim(29, 'B', 7, "Rahim Udiin");
    Student karim(55, 'D', 9, "Karim Uddin");

    cout << rahim.roll << endl;
    cout << rahim.section << endl;
    cout << rahim.cls << endl;
    cout << karim.name << endl;

    return 0;
}
