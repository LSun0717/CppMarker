#include "common.h"

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