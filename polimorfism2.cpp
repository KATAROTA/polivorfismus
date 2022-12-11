#include <iostream>
#include <string>
#include <vector>
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
		string d_name;
		vector <Worker> workers;
	public:	
		Departament(string name)
			:d_name(name){
				cout << "departament is created" << endl;
			}
		~Departament() {
			cout << "departament was destruct" << endl;
		}
		void addWorker(Worker* worker) {
				workers.push_back(*worker);
				
		}
		void showWorkers() {
			cout << " ----------------------------------------" << endl;
			for (Worker& worker: workers) {
				cout << worker.getName() << " ";
				
			}
			cout << " " << endl;
			cout << " ----------------------------------------" << endl;
		}
};

int main() {
	Worker* worker1 = new Worker("anton", 30);
	Worker* worker2 = new Worker("vytia", 30);
	Worker* worker3= new Worker("boris", 30);
	Worker* worker4 = new Worker("buenosamigos", 30);
	//worker = Worker1 = worker("Igor");
	{
		Departament departament1("gosuslugi");
		Departament departament2("shoseblom");
		departament1.addWorker(worker1);
		departament1.addWorker(worker2);
		departament2.addWorker(worker3);
		departament2.addWorker(worker4);
		departament1.showWorkers();
		departament2.showWorkers();
	}
	
	
	
	
	return 0;
}
