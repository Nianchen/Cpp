class Person
{
public:
	Person(int = 0,string = "张三");
	void show();
private:
	int age;
	string name;
};
Person::Person(int a, string s)
{
	cout<<a<<" "<<s<<endl;
	age = a;
	name = s;
}
void Person::show()
{
	cout << "age="<<age << endl;
	cout << "name=" <<name << endl;
}
int main()
{
     Person p; //0 张三
	Person p2(12);//12 张三
	Person p3(123, "yar");//123 yar
	return 0;
}
