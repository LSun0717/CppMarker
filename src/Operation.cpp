#include <fstream>
#include <iostream>
#include "AccountItem.h"
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

char readMenuSelection(int options)
{
    string str;
    getline(cin, str);
    while (true)
    {
        if (str.size() != 1 || str[0] - '0' <= 0 || str[0] - '0' > options) 
        {
            cout << "输入错误，请重新选择: ";
        } else
        {
            break;
        }        
    }
    return str[0];
}

char readQuitConfirm()
{
    string str;
    getline(cin, str);
    while (true)
    {
        if (str.size() != 1 || toupper(str[0]) != 'Y' && toupper(str[0]) != 'N') 
        {
            cout << "输入错误，请重新选择: ";
        } else
        {
            break;
        }        
    }
    return toupper(str[0]);
}