
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> split(string line, char c)
{
	vector<string> result;
	string tmpstr = "";
	for (int i = 0; i < line.length(); i++)
	{
		if (line[i] != c)
			tmpstr += line[i];
		else
		{
			result.push_back(tmpstr);
			tmpstr = "";
		}
	}

	if (line[line.length() - 1] != ' ')
		result.push_back(tmpstr);

	return result;
}


class IPAddress
{
protected:
	string ipAddrr;
public:
	IPAddress(string ip)
	{
		this->ipAddrr = ip;
	}
	virtual void print();
};
void IPAddress::print()
{
	cout << this->ipAddrr<<endl;
}
class IPAddressChecked : public IPAddress
{
private:
	bool isCorrect;
public:
	IPAddressChecked(string ip) : IPAddress(ip) 
	{ }
	void print() override
	{
		IPAddress::print();
		vector<string> out = split(ipAddrr, '.');
		if (out.size() != 4)
		{
			this->isCorrect = false;
		}
		else
		{
			for (int i = 0; i < out.size(); i++)
			{
				if (atoi(out[i].c_str()) < 0 || atoi(out[i].c_str()) > 255)
				{
					this->isCorrect = false;
					break;
				}
				this->isCorrect = true;
			}
		}
		if (this->isCorrect)
			cout << " - Correct\n";
		else
			cout << " - Not correct\n";
	}
};


int main()
{

	string firstIP, secondIP, thirdIP;
	cin >> firstIP;
	IPAddress* first = new IPAddress(firstIP);
	first->print();
	cin >> secondIP;
	IPAddressChecked* second = new IPAddressChecked(secondIP);
	second->print();
	cin >>thirdIP;
	IPAddressChecked* third = new IPAddressChecked(thirdIP);
	third->print();

	return 0;
}

