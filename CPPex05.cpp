#include <iostream>
using namespace std;
//#include "getVolumeSurface.h"

struct BOX {	//���̒�`
	double x;	//��
	double y;	//����
	double z;	//���s
	double volume;	//�̐�
	double surface; //�\�ʐ�
};

void getVolumeSurface(BOX* box) {
	box->volume = box->x * box->y * box->z;
	box->surface = 2 * (box->x * box->y + box->x * box->z + box->y * box->z);
	return;
}
int main()
{
	const int BoxCount = 3;
	BOX boxes[BoxCount];
	for (int i = 0; i < BoxCount; i++) {
		cout << "������́F";
		cin >> boxes[i].x;
		cout << "��������́F";
		cin >> boxes[i].y;
		cout << "���s����́F";
		cin >> boxes[i].z;
		getVolumeSurface(&boxes[i]);
		cout << "�̐ς�" << boxes[i].volume << endl;
		cout << "�\�ʐς�" << boxes[i].surface << endl;
	}
	return 0;
}