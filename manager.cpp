#include"manager.h"
Manager::Manager(int id, string name, int did)
{
	this->m_Name = name;
	this->m_Id = id;
	this->m_Depid = did;
}
void Manager::showInFo()
{
	cout << "ְ�����Ϊ�� " << this->m_Id
		<< "\tְ������: " << this->m_Name
		<< "\t��λ�� " << this->getDepName()
		<< "\t��λְ�� ����ϰ彻��������" << endl;
}
string Manager::getDepName()
{
	return string("����");
}