
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

class BaseFS
{
    string title;
    int id;
public:
    BaseFS(string s,int i):title(s),id(i){}
    virtual ~BaseFS(){};
    string getTitle(){return title;}
    virtual void print()=0;
    virtual int getSize()=0;
    int getID(){return id;}
};


class Folder : public BaseFS
{
    vector<BaseFS*> v;
public:
    Folder(string s):BaseFS(s,1){}
	~Folder()
	{
		for (auto p : v)
			delete p;
	}

    void add(BaseFS* p){v.push_back(p); }

    virtual int getSize()
    {
        int total=0;
        int sz = v.size();
        for(int i=0;i<sz;i++)
        {
            total += v[i]->getSize();
        }
        return total;
    }
    virtual void print()
    {



        int sz = v.size();
        cout<<"["<<this->getTitle()<<"]"<<endl;

        for(int i=0;i<sz;i++)
        {
            if(v[i]->getID() == 1)
            {
                //cout<<"["<<v[i]->getTitle()<<"]"<<endl;
                cout<<"      ";
                v[i]->print();
            }
            else
            {
                cout<<"             ";
                cout<<"("<<v[i]->getTitle()<<","<<v[i]->getSize()<<")"<<endl;
            }


        }





    }

};

class File :public BaseFS
{
    int size;
public:
    File(string s,int n):BaseFS(s,2),size(n){}
    virtual int getSize(){return size;}
    virtual void print()
    {
        cout<<"("<<this->getTitle()<<","<<size<<")"<<endl;
    }
};

int main()
{
    // 조건 1. Folder와 File의 객체를 생성할 수 있어야 합니다.
    Folder* rootFolder = new Folder("ROOT"); // 폴더는 이름만 있습니다.
    Folder* aaaaFolder = new Folder("AAAA");
    Folder* bbbbFolder = new Folder("BBBB");

    File* file1 = new File("a.txt", 10); // 화일은 이름과 크기가 있습니다
    File* file2 = new File("b.txt", 20);
    File* file3 = new File("c.txt", 30);
    File* file4 = new File("d.txt", 40);

    // 조건 2. 폴더안에 파일 및 다른 폴더를 넣을 수 있어야 합니다.
    rootFolder->add(aaaaFolder);
    rootFolder->add(bbbbFolder);
    rootFolder->add(file1);

    aaaaFolder->add(file2);
    aaaaFolder->add(file3);

    bbbbFolder->add(file4);

    // 조건 3. 파일과 폴더 크기를 출력할 수 있어야 합니다.
    // 폴더는 자신만의 크기는 없지만 크기를 구할 수 는 있습니다.
    cout << file1->getSize() << endl; // 10
    cout << aaaaFolder->getSize() << endl; // 50
    cout << rootFolder->getSize() << endl; // 100

    // 조건 4. 화면 출력
    file1->print(); // 파일이므로 이름과 크기만 출력해 주세요.
                    // ex) (a.txt, 10)

    rootFolder->print(); // ROOT폴더 전체의 모양을 보기좋게 출력해 주세요
                         // [ROOT]
                         //     [AAAA]
                         //         (b.txt, 20)
                         //         (b.txt, 30)
                         //     [BBBB]
                         //         (d.txt, 40)
                         //      (a.txt, 10)

    // 조건 5. 폴더 제거시 폴더 안에 있는 모든 파일과 폴더가 제거 되게 해주세요
    delete rootFolder;
}
