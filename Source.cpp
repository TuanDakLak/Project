#include <iostream>
using namespace std;
struct ASM {
    char* taikhoan;
    char* matkhau;
};
struct Class
{
    const char* ten;
    Class* next;
};
struct student {
    int year;
    int no;
    int studentid;
    char firstname[20];
    char lastname[20];
    bool gender;
    Class cl;
    char* taikhoan;
    char* matkhau;
};
struct user {
    student st;
    ASM as;
};
struct year {
    char yeartime[10];
};
Class* createclass()
{
    Class* a = new Class();
    cout << "Nhap ten lop: " << endl;
    cin.ignore();
    cin.getline(a->ten, 10, '\n');
    a->next = NULL;
    return a;
}
void addclass(Class*& a)
{
    Class* tmp = createclass();

}
int main()
{
    year a;
    a.yeartime = "2020-2021";
    Class b = NULL;

    return 0;
}