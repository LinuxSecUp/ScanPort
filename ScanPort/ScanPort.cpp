#include <iostream>
#include <string>
#include <windows.h>
// ���������� ������������ ����
using std::cout;
using std::cin;
using std::endl;
using std::string;

// ������� ������� ���������

int main()
{
    // ������� ���������� ��������
    // int jump, summa;
    // ������� ���������  ����������
    string name;
    // ������� ���������� ����������
    char symbol;
    // ����������� �����������
    setlocale(LC_ALL, "Russian");
    do {
        cout << "����� ���������� � ��������� \"LinuxScanPort\"" << endl;
        // ������� ������� �������
        cout << "������� �������������: \n";
        cout << "1 - ��������� ��� ����������, � ��������� ������ ����� ���� ��������..\n";
        cout << "2 - ����� ������� ������� �������������� �� ���� ��� ������� ��..\n";
        cout << "3 - ��� ���������� ������ ���� ������ ������� ���� �������� ���� 8008..\n";
        cout << "4 - �������� ��� ����������� ���� LinuxMint.com\n";
        cout << "5 - ��� ����� �� ������������ �������� ��������� ������.\n";
        cout << "6 - ������ ��������� 2.005.1.\n";
        Sleep(5100);
        cout << "7 - ����������� � ��������� �������? \n";
        cout << "y - �� " << endl;
        cout << "n - ��� " << endl;
        cin >> symbol;
        // ������� ������� ��� ������������
        // ���� ����������� �� ��������� ������ �������...
        switch (symbol) {
        case ('Y'):
            cout << "�� ����������� � ���������������� �����������..." << endl;
            Sleep(1300);
            cout << "����� ���� ���������� �������..." << endl;
            Sleep(4800);
            cout << "�������� ����������...";
            Sleep(4100);
            cout << "\t\t\t\t Ok...\n";
            cout << "���������� ����-�����...";
            Sleep(7300);
            cout << "\t\t\t Ok...\n";
            cout << "�������� ������� ����������...";
            Sleep(5370);
            cout << "\t\t\t Ok...\n";
            cout << "�������� ������� ����������...";
            Sleep(4800);
            cout << "\t\t\t Ok...\n";
            cout << "���������� �������� �����...";
            Sleep(16500);
            cout << "\t\t\t Ok...\n";
            cout << "����������� � ����� 8008...";
            Sleep(21000);
            cout << "\t\t\t Ok...\n";
            cout << "����������� � ����� 1008...";
            Sleep(21000);
            cout << "\t\t\t Ok...\n";
            cout << "����� ���� ������� ����������...";
            Sleep(36000);
            cout << "\t\t Ok...\n";
            cout << "������������� ������� ����������...";
            Sleep(26000);
            cout << "\t\t Ok...\n";
            cout << "������������� ������� ����������...";
            Sleep(16000);
            cout << "\t\t Ok...\n";
            cout << "����������� ������� ����������...";
            Sleep(56000);
            cout << "\t\t Ok...\n";
            cout << "��������� ������� ����������...";
            Sleep(26000);
            cout << "\t\t\t Ok...\n";
            cout << "�������� ������� ����������...";
            Sleep(29000);
            cout << "\t\t\t Ok...\n";
            cout << "��������� ������ ������� ������...";
            Sleep(59000);
            cout << "\t\t Ok...\n";
            cout << "��������� ����� ������...";
            Sleep(19000);
            cout << "\t\t\t Ok...\n";
            cout << "��������� ��������...";
            Sleep(12000);
            cout << "\t\t\t\t Ok...\n";
            cout << "��������� �������� Host-Port...";
            Sleep(12700);
            cout << "\t\t\t Ok...\n";
            cout << "��������� ������� ������������...";
            Sleep(61000);
            cout << "\t\t Ok...\n";
            cout << "������������ ������� �� ���-���...";
            Sleep(81000);
            cout << "\t\t Ok...\n";
            cout << "���������� ����� ������������...";
            Sleep(60700);
            cout << "\t\t Ok...\n";
            cout << "���������� ������� ������ ������...";
            Sleep(15700);
            cout << "\t\t Ok...\n";
            cout << "��������� ���������� Linux...";
            Sleep(41700);
            cout << "\t\t\t Ok...\n";
            cout << "C����������� ������� ������";
            Sleep(30000);
            cout << "\t\t\t Ok...\n";
            Sleep(5000);
            cout << "���� ������� ��������� �������� �� �������\n������� ����-����� �������..." << endl;
            Sleep(150000);
            break;

        default:
            cout << "�� ����� �� ���������!" << endl;
        }
    } while (symbol != 'N');
    system("Pause > nul");
    return 0;
}
