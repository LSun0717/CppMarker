#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#define INCOME "收入"
#define EXPAND "支出"
#define FILEPATH "./data/AccountBook.txt"

using namespace std;

// 通用功能性函数声明

// 显示主菜单
void showMainMenu();

// 显示账户菜单
void showAccountMenu();

// 显示查询菜单
void showQueryMenu();

// 读取键盘选择
char readMenuSelection();

// 读取退出确认
char readQuitConfirm();