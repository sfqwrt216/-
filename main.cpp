#include <iostream>
using namespace std;
#include "WorkerManager.h"

int main()
{


	WorkerManager wm;
	int choice = 0;

	while (1)
	{
		wm.Show_Menu();
		cout << "请输入您的选择:" << endl;
		cin >> choice;

		switch (choice)
		{
			case 0: //退出系统
				wm.exitSystem();
				break;
			case 1: //添加职工
				break;
			case 2: //显示职工
				break;
			case 3: //删除职工
				break;
			case 4: //修改职工
				break;
			case 5: //查找职工
				break;
			case 6: //排序职工
				break;
			case 7: //清空文件
				break;
			default:
				system("cls");
				break;
		}

	}




}