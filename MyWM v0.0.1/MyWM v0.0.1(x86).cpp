#include <iostream>
#include <Windows.h>
#include <ctime>
#include <string>

using namespace std;

int name_n;

string hui_mie_void(string a[6]) {
	srand(time(NULL));
	return a[rand() % 6];
}

bool Zhan_dou(int high_1, int high_2) {
	srand(time(NULL));
	short a = rand() % 5;
	if (high_1 > high_2) {
		if (a == 0) return false;
		else if (a != 0) return true;
	} else if (high_2 > high_1) {
		if(a == 0) return true;
		else if (a != 0) return false;
	} else {
		if (a == 0 || a == 1 || a == 2) return false;
		else return true;
	}
}

int main() {
	// ��Ϸ��ʼ��
	srand(time(NULL));
	cout << "========== ������չģ���� ==========" << endl;
	cout << "�汾��v0.0.1" << endl << "�����봴��������������";
	cin >> name_n;
	string names[name_n];
	float sleep = 2400;
	string hui_mie[6] = {
		"˫�����",
		"��������",
		"�������",
		"�Ϻ�",
		"����",
		"��˺��"
	};
	string WM_shijian[17] = {
		"���� �����˼�����ը��������չ����", " ��",
		"���� �� ", " �л����ˣ�������չ���� ",
		" ���� ", "���� �������ֻ�����",
		" ռ�� ",
		" ʧ��",
		" �ɹ�",
		"���� �ɳ�����", "���� ��ʼս��",
		"�� ",
		" ��ͼ���� ",
		"����������Ȼѡ����ǰ������������Ͽɣ������ﵽ�� ", 
		"��������", 
		"�����", "������"
	};
	string WM_GN[4] = {
		"1/100���ٺ���", 
		"1/10���ٺ���", 
		"���ٺ���", 
		"�ڰ�ɭ�ִ��"
	};
	string WM_shidai[8] = {
		"Զ��ʱ��", 
		"ʯ��ʱ��", 
		"��ͭʱ��", 
		"����ʱ��", 
		"����ʱ��", 
		"����ʱ��", 
		"ԭ��ʱ��", 
		"��Ϣʱ��"
	};

	for (int i = 0; i < name_n; i++) {
		cin >> names[i];
	}

	bool yn = false;
	int ijk = 0;

	cout << endl << "�Ƿ�����";
	cin >> yn;

	//��Ϸ������
	int high[name_n];
	bool siwang[name_n];
	int WM__SD[name_n];

	for (int i = 0; i < name_n; i++) {
		high[i] = 0;
		siwang[i] = false;
		WM__SD[i] = 0;
	}

	int fang = -1;
	int di = -1;
	
	long long p = 0;
	short baoliu_fang = -1;
	short baoliu_di = -1;
	bool lianxv_qinglue = false;
	
	cout << "������һƬ�ڰ��е�����..." << endl;
	Sleep(sleep);
	system("cls");
	cout << "*===============---������ʷ---===============*" << endl;
	
	if (yn) sleep /= 24;

	while (true) {
		ijk++;
		
		baoliu_di = rand() % name_n;

		int chou_WM = rand() % name_n;
		int WM_SJ_fasheng = rand() % 8;
		int sc__WM_num = 0;
		int sc_WM_I = 0;
		short jg_year = rand() % 25 + 5;
		
		string shengcun = "";
		bool two_bixv = false;
		for(int i = 0; i < name_n; i++) {
			if (siwang[i] == false) {
				sc__WM_num++;
				shengcun = names[i];
				sc_WM_I = i;
			}
		}
		if(sc__WM_num == 0) break;
		if(sc__WM_num == 1) {
			if (high[sc_WM_I] <= 95)
				two_bixv = true;
			else {
				cout << shengcun << WM_shijian[13] << high[sc_WM_I] << WM_shijian[1];
				break;
			}
		}

		if (two_bixv) {
			if (siwang[chou_WM] == true) continue;
			high[chou_WM] += rand() % 35 + 5;
			cout << "��Ԫ " << p << " �꣬";
			cout << names[chou_WM] << WM_shijian[0] << " " << high[chou_WM] << WM_shijian[1] << endl;
			Sleep(sleep);
			continue;
		}

		if (WM_SJ_fasheng == 0) {
			lianxv_qinglue = false;
			if (siwang[chou_WM] == true) continue;
			if (ijk <= 2 * name_n) continue;
			cout << "��Ԫ " << p << " �꣬";
			cout << names[chou_WM] << WM_shijian[2] << hui_mie_void(hui_mie) <<
			     WM_shijian[3] << high[chou_WM] << WM_shijian[1] << endl;
			siwang[chou_WM] = true;
		} else if (WM_SJ_fasheng == 1 || WM_SJ_fasheng == 5) {
			lianxv_qinglue = false;
			if (siwang[chou_WM] == true) continue;
			if (WM__SD[chou_WM] >= 7) continue;
			high[chou_WM] += rand() % 11 + 10;
			cout << "��Ԫ " << p << " �꣬";
			cout << names[chou_WM] << WM_shijian[0] << WM_shidai[WM__SD[chou_WM] + 1] << endl;
			if (high[chou_WM] >= 0 && high[chou_WM] < 8) WM__SD[chou_WM] = 0;
			else if (high[chou_WM] >= 8 && high[chou_WM] < 13) WM__SD[chou_WM] = 1;
			else if (high[chou_WM] >= 13 && high[chou_WM] < 15) WM__SD[chou_WM] = 2;
			else if (high[chou_WM] >= 15 && high[chou_WM] < 40) WM__SD[chou_WM] = 3;
			else if (high[chou_WM] >= 40 && high[chou_WM] < 55) WM__SD[chou_WM] = 4;
			else if (high[chou_WM] >= 55 && high[chou_WM] < 70) WM__SD[chou_WM] = 5;
			else if (high[chou_WM] >= 70 && high[chou_WM] < 100) WM__SD[chou_WM] = 6;
			else if (high[chou_WM] >= 100) WM__SD[chou_WM] = 7;
		} else if (WM_SJ_fasheng == 2) {
			lianxv_qinglue = false;
			if (siwang[chou_WM] == true) continue;
			int chou_WM2;
			chou_WM2 = rand() % name_n;
			if (names[chou_WM] == names[chou_WM2]) continue;
			fang = chou_WM2;
			di = chou_WM;
			cout << "��Ԫ " << p << " �꣬";
			cout << names[chou_WM] << WM_shijian[9] << WM_shijian[11] << names[chou_WM2] <<
			     WM_shijian[10] << endl;
		} else if (WM_SJ_fasheng == 4) {
			lianxv_qinglue = false;
			if (siwang[chou_WM] == true) continue;
			if (fang == -1 || di == -1) continue;
			int gail = rand() % 20;
			int h = rand() % 3;
			if ((siwang[baoliu_di] == true || siwang[baoliu_fang] == true || baoliu_di == -1 || baoliu_fang == -1) && h != 0) continue;
			cout << "��Ԫ " << p << " �꣬";
			if (h == 0) {
				if (gail == 10) {
					cout << names[di] << WM_shijian[4] << names[fang] << WM_shijian[5] << endl;
					siwang[di] = true;
				} else {
					cout << names[fang] << WM_shijian[4] << names[di] << WM_shijian[5] << endl;
					siwang[fang] = true;
				}
			} else {
				cout << names[baoliu_fang] << WM_shijian[4] << names[baoliu_di] << WM_shijian[5] << endl;
				siwang[baoliu_fang] = true;
			}
			

			di = -1;
			fang = -1;
		} else if (WM_SJ_fasheng == 3 || WM_SJ_fasheng == 6) {
			if (lianxv_qinglue == false) lianxv_qinglue = true;
			else continue;
			if (siwang[chou_WM] == true) continue;
			int chou_WM2;
			chou_WM2 = rand() % name_n;
			if (names[chou_WM] == names[chou_WM2]) continue;
			if (siwang[chou_WM2] == true) continue;
			cout << "��Ԫ " << p << " �꣬";
			cout << names[chou_WM] << "����" << WM_shijian[12] << names[chou_WM2] << endl;
			Sleep(sleep / 2);
			cout << "��Ԫ " << p << " �꣬";
			baoliu_fang = chou_WM2;
			baoliu_di = chou_WM;
			if (Zhan_dou(high[chou_WM], high[chou_WM2])) {
				cout << names[baoliu_di] << "����" << WM_shijian[6] << names[baoliu_fang] << WM_shijian[8] << endl;
				siwang[baoliu_fang] == true;
				high[baoliu_di] += 25;
			}
			else{
				cout << names[baoliu_di] << "����" << WM_shijian[6] << names[baoliu_fang] <<
					 " " << WM_shijian[7] << "������ȫ����㲥�� " << names[baoliu_fang] << " " << WM_shijian[14] << endl;
			}
		} else if (WM_SJ_fasheng == 7) {
			if (siwang[chou_WM] == true) continue;
			string gongneng = WM_GN[rand() % 4];
			cout << "��Ԫ " << p << " �꣬";
			cout << names[chou_WM] << "���� " << WM_shijian[15] << gongneng << WM_shijian[16] << endl;
			high[chou_WM] += 20; 
		}
		
		p += jg_year;

		Sleep(sleep);

	}

	string input_end;

	cin >> input_end;

	return 0;
}