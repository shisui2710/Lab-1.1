#include "header.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    char act;
    complex_number num_a, num_b, num_rez;

    cout << "������� 'X' ������� ������������ �����\n";
        num_a.x = sanity_check();
        if(num_a.x > 999999)
        {
            cout << "����������� ������� ������";
            return 0;
        }

    cout << "������� 'Y' ������� ������������ �����\n";
        num_a.y = sanity_check();
        if(num_a.y > 999999)
        {
            cout << "����������� ������� ������";
            return 0;
        }

    cout << "������� 'X' ������� ������������ �����\n";
        num_b.x = sanity_check();
        if(num_b.x > 999999)
        {
            cout << "����������� ������� ������";
            return 0;
        }

    cout << "������� 'Y' ������� ������������ �����\n";
        num_b.y = sanity_check();
        if(num_b.y > 999999)
        {
            cout << "����������� ������� ������";
            return 0;
        }

    cout << "����� �������� ��������� �������� ��� �������? (+ = ��������, - = ���������, / = �������, * = ���������)\n";
    cin >> act;

    switch(act){
    case '+':
        num_rez.x = sum_x(num_a.x, num_b.x);
        num_rez.y = sum_y(num_a.y, num_b.y);
        cout << num_rez.x << " " << num_rez.y << "i";
        break;
    case '-':
        num_rez.x = razn_x(num_a.x, num_b.x);
        num_rez.y = razn_y(num_a.y, num_b.y);
        cout << num_rez.x << " " << num_rez.y << "i";
        break;
    case '*':
        num_rez.x = pr_x(num_a.x, num_a.y, num_b.x, num_b.y);
        num_rez.y = pr_y(num_a.x, num_a.y, num_b.x, num_b.y);
        cout << num_rez.x << " " << num_rez.y << "i";
        break;
    case '/':
        num_rez.x = del_x(num_a.x, num_a.y, num_b.x, num_b.y);
        num_rez.y = del_y(num_a.x, num_a.y, num_b.x, num_b.y);
        cout << num_rez.x << " " << num_rez.y << "i";
        break;
    default:
        cout << "����������� ������� ������";
        break;
    }
}

