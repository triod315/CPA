#include <iostream>
#include <string>
#include <vector>

using namespace std;

class IPAddress
{
private:
    string ipAddrr;
public:
    void set_ip(string ip);
    string get_ip();
    IPAddress(string ip)
    {
        set_ip(ip);
    }
};
void tokenize(string const &str, const char delim, vector<string> &out)
{
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != string::npos)
    {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
}
bool isInteger(const std::string & s)
{
    if (s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false;
    char * p;
    strtol(s.c_str(), &p, 10);
    return (*p == 0);
}
void IPAddress::set_ip(string ip)
{
    const char delim = '.';
    vector<string> out;
    tokenize(ip, delim, out);
    if (out.size() <= 3 || out.size() >= 5)
    {
        ipAddrr = "0.0.0.0";
        return;
    }
    for (auto &ip : out)
    {
        if (!isInteger(ip) || (stoi(ip) > 255 && stoi(ip) <= 999) || ip.length() >= 4)
        {
            ipAddrr = "0.0.0.0";
            break;
        }
    }
    ipAddrr = ip;
}
string IPAddress::get_ip()
{
    return  ipAddrr;
}
class Network
{
    vector<IPAddress> ip_addresses;
    string networkId;
public:
    vector<IPAddress> get_ipAddresses();
    string get_networkId();
    Network(string networkId, vector<IPAddress> addresses)
    {
        networkId = networkId;
        ip_addresses = addresses;
    }
    void addIPAddress(IPAddress address);
    void print();
};
string Network::get_networkId()
{
    return networkId;
}
vector<IPAddress> Network::get_ipAddresses()
{
    return ip_addresses;
}
void Network::addIPAddress(IPAddress address)
{
    ip_addresses.push_back(address);
}
void Network::print()
{
    cout << "network " << networkId << endl;
    for (int i = 0; i < ip_addresses.size(); i++)
    {
        cout << ip_addresses[i].get_ip() << endl;
    }
}


int main()
{

    vector<IPAddress> ipAddrr1;
    ipAddrr1.emplace_back(IPAddress("1.1.1.1"));
    ipAddrr1.emplace_back(IPAddress("2.2.2.2"));
    ipAddrr1.emplace_back(IPAddress("3.3.3.3"));
    Network net1("1", ipAddrr1);
    net1.print();
    vector<IPAddress> ipAddrr2;
    ipAddrr2.emplace_back(IPAddress("3.3.3.3"));
    ipAddrr2.emplace_back(IPAddress("4.4.4.4"));
    ipAddrr2.emplace_back(IPAddress("5.5.5.5"));
    Network net2("2", ipAddrr2);
    net2.print();


    return 0;
}
