#include <iostream>
#include <string>
using namespace std;

class Worker {
	private:
		string m_name;
		int m_age;
	public:
		int category;
		Worker (string name, int age=20)
			:m_name(name), m_age(age) {
			cout << "worker was created" << endl;
		}
		~Worker() {
			cout << "worker destruct" << endl;
		}
		string getName() {
			return m_name;
		}
		int getAge() {
			return m_age;
		}
};

class Departament{
	private:
		Worker* m_worker;
	public:	
		Departament(Worker * worker = nullptr)
			:m_worker(worker) {
				cout << "departament is created" << endl;
			}
		~Departament() {
			cout << "departament was destruct" << endl;
		}
	
};

int main() {
	Worker * worker = new Worker("anton");
	//worker = Worker1 = worker("Igor");
	{
		Departament departament(worker);
	}
	cout << worker->getName() << " still exist" << endl;
	
	return 0;
}
