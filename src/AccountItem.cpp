#include <iostream>
#include "AccountItem.hpp"
#include <fstream>

using namespace std;

void loadDataFromFile(vector<AccountItem>& items)
{
    ifstream input(FILEPATH);
    
    AccountItem item;
    while (input >> item.itemType >> item.amount >> item.detail)
    {
        items.push_back(item);
    }
    input.close();
}

// 更新账单
void update(vector<AccountItem>& items)
{
    cout << "更新收支中" << endl;
}

// 查询账单
void query(vector<AccountItem>& items)
{
    cout << "查询账单中" << endl;
}