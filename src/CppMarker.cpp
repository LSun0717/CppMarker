#include <iostream>
#include "AccountItem.hpp"
#include "Menu.hpp"
#include "Operation.hpp"

using namespace std;

int main() 
{
    vector<AccountItem> items = {};
    loadDataFromFile(items);

    bool quit = false;
    while (!quit) 
    {
        // 显示主菜单
        showMainMenu();
        // 读取键盘选择
        char key = readMenuSelection(3);

        switch (key)
        {
        case '1' : // 记账
            showAccountMenu();
            update(items);
            break;
        case '2' : // 查询
            showQueryMenu();
            query(items);
            break;
        case '3' : // 退出
            cout << "\n确认退出？（Y/N）: ";
            if (readQuitConfirm() == 'Y') 
            {
                quit = true;
            }
            break;
        default:
            break;
        }
    }
    return 0;
}