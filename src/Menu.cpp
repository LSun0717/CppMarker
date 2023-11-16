#include "Menu.h"

// 显示主菜单
void showMainMenu() 
{
    system("cls");

    cout << "-------------------------------------------------------" << endl;
	cout << "|==============   欢迎使用CppMarker   =================|" << endl;
	cout << "|                                                     |" << endl;
	cout << "|***************    1 记  账      ********************|" << endl;
	cout << "|***************    2 查  询      ********************|" << endl;
	cout << "|***************    3 退  出      ********************|" << endl;
	cout << "|_____________________________________________________|" << endl;

	cout << "\n请选择(1 - 3)：";
}

// 显示账户菜单
void showAccountMenu() 
{
    cout << "-------------------------------------------------------" << endl;
	cout << "|=================  选择记账种类   ====================|" << endl;
	cout << "|                                                     |" << endl;
	cout << "|***************    1 收  入      ********************|" << endl;
	cout << "|***************    2 支  出      ********************|" << endl;
	cout << "|***************    3 返回主菜单  ********************|" << endl;
	cout << "|_____________________________________________________|" << endl;

	cout << "\n请选择(1 - 3)：";

}

// 显示查询菜单
void showQueryMenu() 
{
    cout << "-------------------------------------------------------" << endl;
	cout << "|=================    选择查询条件    =================|" << endl;
	cout << "|                                                     |" << endl;
	cout << "|***************    1 总  计     ********************|" << endl;
	cout << "|***************    2 收  入      ********************|" << endl;
	cout << "|***************    3 支  出      ********************|" << endl;
	cout << "|***************    4 返回主菜单      ********************|" << endl;
	cout << "|_____________________________________________________|" << endl;

	cout << "\n请选择(1 - 4)：";
}