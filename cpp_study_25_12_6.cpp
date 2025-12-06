#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include"workerManager.h"

//#include"worker.h"
//#include"employee.h"
//#include"manager.h"
//#include"boss.h"
//
//
//void test()
//{
//	worker* worker = NULL;
//	worker = new employee(1, "张三", 1);
//	worker->showinfo();
//	delete worker;
//	worker = NULL;
//}




int main()
{
	
	workerManager wm;
	int choice = 0;
	while (true)
	{
		wm.show_menu();
		cout << "请输入你的选择:" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://退出系统
			wm.systemexit();
			break;
		case 1://添加职工
			wm.add_emp();
			break;
		case 2://显示职工
			break;
		case 3://删除职工
			break;
		case 4://修改职工
			break;
		case 5://查找职工
			break;
		case 6://编号排序
			break;
		case 7://清空文档
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;
}