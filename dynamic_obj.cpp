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
    char name[100] = "Rahim Ullah";
    // Student rahim(5,'A',11, name);
    Student *rahim = new Student(5, 'A', 11, name);

    cout << rahim->name << endl;

    return 0;
}
