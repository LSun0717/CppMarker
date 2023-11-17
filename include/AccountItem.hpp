#ifndef ACCOUNTITEM_HPP
#define ACCOUNTITEM_HPP

#include <string>
#include <vector>
#include "AccountItem.hpp"

using namespace std;

#define INCOME "收入"
#define EXPAND "支出"
#define FILEPATH "./data/AccountBook.txt"

struct AccountItem
{
    string itemType;
    int amount;
    string detail;
};

// 文件中加载数据
void loadDataFromFile(vector<AccountItem>& items);

// 更新账单
void update(vector<AccountItem>& items);

// 查询账单
void query(vector<AccountItem>& items);

#endif