#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Node
{
public:
	Node(int x=0, int y=0, int val=0)
		:_x(x)
		, _y(y)
		, _val(val)
	{
		for (int i = 0; i < 4; ++i)
			_state[i] = 1;
	}
	int _x;
	int _y;
	int _val;
	int _state[4];//用于记录这个节点的四周是否可以走
};

class Maze
{
public:
	//析构函数
	~Maze()
	{
		for (int i = 0; i < _row; ++i)
		{
			delete[] p[i];
		}
		delete[]p;
		p = nullptr;
	}
	//创建二维数组
	void makeVector()
	{
		cout << "请输入迷宫的行和列:" << endl;
		cin >> _row;
		cin >> _col;
		//注意这里的堆区二维数组的开辟方式
		p = new Node*[_row];
		for (int i = 0; i < _row; ++i)
		{

			p[i] = new Node[_col];
		}
		cout << "请输入迷宫的路径信息(1表示不可以走，0表示可以):" << endl;
		for (int i = 0; i < _row; ++i)
		{
			for (int j = 0; j < _col; ++j)
			{
				int val;
				cin >> val;
				p[i][j] = Node(i, j, val);
			}
		}
	}
	//初始化二维数组的state
	void initializeState()
	{
		for (int i = 0; i < _row; ++i)
		{
			for (int j = 0; j < _col; ++j)
			{
				//只有该节点的值为0，才有必要设置其state
				if (p[i][j]._val == 0)
				{
					if (i+1<_row&&p[i + 1][j]._val==0)
					{
						p[i][j]._state[1] = 0;

					}
					if (j + 1 < _col && p[i][j + 1]._val == 0)
					{
						p[i][j]._state[0] = 0;
					}
					if (j - 1 > 0 && p[i][j - 1]._val == 0)
					{
						p[i][j - 1]._state[2] = 0;
					}
					if (i - 1 > 0 && p[i - 1][j]._val == 0)
					{
						p[i - 1][j]._state[3] = 0;
					}
				}
			}
		}
	}
	//深度优先搜索遍历迷宫路径方法
	Node** searchMaze()
	{
		stack<Node>stk;
		if (p[0][0]._val == 1)
			return nullptr;
		stk.push(p[0][0]);
		while (!stk.empty())
		{
			Node& top = stk.top();
			if (top._x == _row-1 && top._y == _col-1)
			{
				while (!stk.empty())
				{
					top = stk.top();
					p[top._x][top._y]._val = '*';

					stk.pop();
					
				}
				return p;
				
				
			}
			if (top._state[0] == 1 && top._state[1] == 1 && top._state[2] == 1 && top._state[3] == 1)
			{
				stk.pop();
				continue;
			}
			if (top._state[0] == 0)
			{
				top._state[0] = 1;
				Node node= p[top._x][top._y + 1];
				node._state[2] = 1;
				stk.push(node);
				continue;
			}
			if (top._state[1] == 0)
			{
				top._state[1] = 1;
				Node node = p[top._x+1][top._y];
				node._state[3] = 1;
				stk.push(node);
				continue;
			}
			if (top._state[2] == 0)
			{
				top._state[2] = 1;
				Node node = p[top._x][top._y-1];
				node._state[0] = 1;
				stk.push(node);
				continue;
			}
			if (top._state[3] == 0)
			{
				top._state[3] = 1;
				Node node = p[top._x-1][top._y];
				node._state[1] = 1;
				stk.push(node);
				continue;
			}
			
		}
		return nullptr;
	}

		/*0 0 0 1 1
		1 0 0 0 1
		1 1 0 1 1
		1 1 0 0 1
		1 1 1 0 0*/

	int _row;
	int _col;
	Node** p;
};

int main()
{
	Maze m;
	m.makeVector();
	m.initializeState();
	Node** p =m.searchMaze();
	if (p == nullptr)
	{
		cout << "不存在一条迷宫路径" << endl;
		return 0;
	}
	for (int i = 0; i < m._row; ++i)
	{
		for (int j = 0; j < m._col; ++j)
		{
			if ((char)p[i][j]._val == '*')
			{
				cout << '*' << " ";
			}
			else
			cout << p[i][j]._val << " ";
		}
		cout << endl;
	}
	cout << endl;

}