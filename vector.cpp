#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::string;
using std::cin;
using std::cout; 
using std::endl;
int main()
{
    int i,j;
    string word;
    vector<string> var;

    
    for(i =0;i < 5;i++)
    {
        cin >> word;
        var.push_back(word);
    }
    for (i = 0;i < var.size();++i)
    {
        string s = var[i];
        //cout << s << endl;
        for(decltype(s.size()) j = 0; j != s.size(); ++j)
        {
            s[j] = toupper(s[j]);      
        }
        cout << s << endl;
    }
    
    system("pause");
    return 0;
    
}
