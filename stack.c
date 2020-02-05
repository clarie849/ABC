#define maxsize
void stackout(int s[maxsize])
{
   int top=0;
   for (i=1;i<n;i++)
   {
     scanf("%d",&x)；
     if(x!=-1)
     if(top==maxsize-1)pfintf("栈满\n";exit(0);)
     else
     	{
     	  s[++top]=x;
     	}
     else 
     	{
     	   if(top==0)printf("栈空\n";exit(0);)
     	   else
     	   	printf("出栈的元素：\n",s[top--]);
     	}
     	 
     	
   }

}
//
//72.31
//1:关系代数表达式为
π G#,SNAME(σ SNAME='莘庄'(STORE*SG*GOODS))
//2：元组表达式为
{t|(ョU)(ョV)(ョW) (GOODS(U)∧SG(V)∧(GOODS(W))∧U(1)=V(2)∧V(1)=W(1)∧W(2)='莘庄'∧t(1)=U(1)∧t(2)=U(2))}
//关系逻辑如下
W(X,Y)<-GOODS(X,Y,a)∧SG(b,X,c)∧STORE(b,'莘庄',d)
SELECT语句为
SELECT A.G# ,GNAME
FROM GOODS AS A ,SG AS B,STORE AS C
WHERE A.G#=B.GE and B.S#=S.S# and C.NAME='莘庄'；
//81.07
UPDATE 施工
SET 工时=工时+50
WHERE 项目编号 IN
(SELECT 项目编号 FROM 项目
WHERE 项目名称 =‘高教新区项目’)
//
s->next=hs;hs=s;
surf the internet
From the information given in the above column chart,we can seen a striking contrast
between developing and developed countries in mobile-phone subscriptions from 2000 to 2008.
During this perid,there has been a dramatic increase from 0.4 to 4 bilion mobile phone subscripitions
in developing countries ,while that of developed countries remained steady at just under 1 bilion.

int bin_search(Sstable ST,KeyType k)
{
  low=1;hi=st.length;found=0;
  while(low<=hi)
  {
  	mid=(low+hi)/2;
  	if(st.elem[mid].key==k)
  		{
  		   found=1;
  		   return mid;
  		}
  	if(st.elem[mid].key>k)
  		hig=mid-1;
  		else hig=mid+1;
  }
  if(found==0)return 0;

}
int count(SNODE *head,ElemType x)
{
	SNODE *p;
	int n=0;
	p=head;
	while(p!=NULL)
	{
	if(	p->data==x)n++;
		p=p->next;
	}
	return n;
}
void release(BTree *b)
{
	if(b!=NULL)
		{
			release(b->lchild);
			release(b->rchild);
			free(b);
		}
}

	Form the information given in the above column chart,we can see a striking contrust
between developing and developed countries in mobile-phone subscriptions from 2000 to 2008.
During this period,there has been a dramatic increase 0.4 to 4 billion mobile phone subscriptions
in developing countries ,while that of developed countries remaind steady at just under 1 billion.
	At least two fundamental factors could have contributed to this phenomenon.On the one hand,with the 
rapid increase in economic development happening in developing countries,the telecommunication industry in those
countries expanded grately to meet the demand of globalization.As a result,the users base of mobile phones which
can narrow the distance between people and link the whole world together,grew at an incredbile speed.On the other 
hand,the extremely advanced civilization of developed countries means less potential in may aspects including
in the area of private telecommunication tools and their demand for further enlargement of such tools tends 
to saturate.
	In conclusion ,while mobile-phone subscriptions ,if used carelessly or without restraint,could prove to be a
double-edged sword,the fact remains that such phones are already extremely prevalent in both developing and developed
countries,and even today continue to raise in popularity.If people could imbue themselves with intelligence,prudence and
discription,I am sure most of them would be able to sidestep the potential drawbacks of mobile-phones,while
taking advantage of all the merits.   


π学号，姓名，课程名分数(σ专业='英语',(学生*课程*学习))
π学号，姓名，专业，分数(σ分数>90 ∧课程号='数据库原理'(学生*课程*学习))
π学号，姓名，专业(学生)-π学号，姓名，专业(σ课程号='C135'(学生*学习))
π学号，学生，姓名(学生)-π学号，姓名，专业(σ分数<60(学生*学习))
SELECT 学号，姓名专业
FROM 学生
WHERE 学号 NOT IN
(SELECT 学号 FROM 学习 WHERE 课程号='C135')

typedef struct Node
	{
		int data;
		struct node *next;

	} linklist;
	void intersection(linklist *ha, linklist *hb, linklist *&c)
	{
		linklist *p, *q, *t;
		for (p = ha, hc = 0; p != 0; p = p->next)
		{
			for (q = hb; q != 0; q = q->next)
				if (q->data == p->data)
					break;
			if (q != 0)
			{
				t = (linklist *)malloc(sizeof(linklist));
				t->data = q->data;
				t->next = hc;
				hc = t;
			}
		}
	}

#include <stdio.h>
	int prim(int n)
	{
		int i;
		for (i = 2; i / 2; i++)
			if (n / i == 0)
				return 0;
			else
				return 1;
	}
	int main(void)
	{
		int i;
		for (i = 100; i <= 200; i++)
		{
			if (prim(i) == 1)

				printf("%d\n", i);
		}
	}

#include <stdio.h>
#include <string.h>
	void fun(char str[])
	{
		int m, i, j;
		for (i = 0, j = strlen(str); i < j; i++, j--)
		{
			m = str[i];
			str[i] = str[j - 1];
			str[j - 1] = m;
		}
		printf("%s", str);
	}
	main()
	{
		char str[] = "123456789";
		fun(str);
	}
#include <stdio.h>
#define N 10
	int fun(void)
	{

		int i;
		float agv, stu[N], sum = 0;
		for (i = 0; i < N; i++)
		{
			scanf("%f", stu[i])
		}
		sum += stu[i];
		AGV = sum / N;
		for (sum = 0, i = 0; i < N; i++)
		{
			if (atu[i] > AGV)
				sum = sum + 1;
		}
		return sum;
	}
	main()
	{
		printf("%d", fun());
	}

	Linklist Delete_Min(LinkList &L)
	{
		int *pre = L, *p = pre->next;
		int *minpre = pre, *min = p;
		wuile(p != NULL)
		{
			if (p->data < min->data)
			{
				minp = p;
				minpre = pre;
			}
			pre = p;
			p = p->next;
			free(minp);
		}
		return L;
	}

	void R_delete(Linklist &L, int x)
	{
		Lnode *s;
		if (L->data == x)
		{
			s = L;
			L = L->next;
			free(s);
			R_delete(L, x);
		}
		else
		{
			R_delete(L->next, x);
		}
	}

	void del_x2(Linklist &L, int x)
	{
		Lnode *pre = L, *p = L->next;
		Lnode *q;
		while (p != NULL)
		{
			if (p->data == x)
			{
				q = p;
				pre->next = p->next;
				p = p->next
						free(q);
			}
			else
			{
				pre = p;
				p = p->next;
			}
		}
	}

	//就地逆置头插法
	Linklist Reverse1(Linklist &L)
	{
		Lnode *p, *q;
		p = L->next;
		L->next = NULL; //容易忘记养成好习惯
		while (p != NULL)
		{
			q = p->next; //用新的指针记住p的后继结点的位置，防止断裂
			p->next = L->next;
			L->next = p; //头插法的典型代码要记住
			p = q;
		}
		return L;
	}

	//p每往后遍历就修改指针，将其next指向上一个指针，这个设一个新指针pre记录，就像删除操作的时候一样
	LinkList Reverse2(LinkList L)
	{
		LNode *pre, *p = L->next, *r = p->next;
		p->next = NULL;   //处理第一个节点，就像链表中的尾结点r->next=NULL.这是反转后的链表也要这样处理
		while (r != NULL) //如果r为空，则说明p为最后一个结点
		{
			pre = p;
			p = r;
			r = r->next;   //指针反转可以理解三个指针都向后移动。
			p->next = pre; //指针反转
		}
		L->next = p; //处理最后一个结点，把头结点指向最后一个结点，实现最终反转
		return L;	//
	}

	typedef struct LNode
	{
		struct Lnode *next;
		Elemtype data;
	} LNode, *LinkList;
	//头插法，来源于链表，data用键盘来输入
	LinkList CreateLinkListH1(LinkList &L)
	{
		LNode *s;
		int x;
		scanf("%d", &x)
			L = (LinkList)malloc(sizeof(LNode));
		L->next = NULL;
		while (x != 9999)
		{
			s->data = x;
			s->next = L->next;
			L->next = s;
		}
		return L;
	}
	//头插法，data的值来源于链表
	LinkList CreateLinkListH2(LinkList &L, int a[], int n)
	{
		LNode *s;
		L = (LinkList)malloc(sizeof(LNode));
		L->next = NULL;
		for (i = 0; i < n; i++)
		{
			s = (LNode *)malloc(sizeof(LNode))
					s->data = a[i];
			s->next = L->next;
			L->next = s;
		}
		return L;
	}
	//尾插发,data 来源于链表
	LinkList CreateLinkListR1(LinkList &L)
	{
		LNode *s, *r;
		int x;
		scanf("%d", &x)
			L = (LinkList)malloc(sizeof(LNode));
		L->next = NULL;
		r = L;
		while (x != 9999)
		{
			s->data = x;
			//s->next=L->next;
			r->next = s;
			r = s;
		}
		r->next = NULL;
		return L;
	}
	//尾插发,data 来源于数组
	LinkList CreateLinkListR2(LinkList &L，int a[], int n)
	{
		LNode *s, *r;
		int x;
		scanf("%d", &x)
			L = (LinkList)malloc(sizeof(LNode));
		L->next = NULL;
		r = L;
		//while(x!=9999)
		for (int i = 0; i < n; i++)
		{
			s->data = a[i];
			//s->next=L->next;
			r->next = s;
			r = s;
		}
		r->next = NULL;
		return L;
	}
	//按序号查找第i个结点
	LNode *Getelem(Linklist &L, int i)
	{
		int j = 1;
		LNode *p;
		p = L->next;
		if (i == 0) //0
			return L;
		if (i < 1)
			return NULL;
		while (j < i && p)
		{
			p = p->next;
			j++;
		}
		return p; //
	}

	//按表值查找结点
	LNode *LocateElement（LinkList &L, int i）
	{

		LNode *p;
		p = L->next;

		while (p != NULL && p)
		{
			p = p->next;
		}
		return p; //
	}

	//后插操作，在给定位之后插入
	void LinkListinsertR1(LinkList &L, int i, ElemType e)
	{
		LNode *p;
		p = GetElem(L, i);
		LNode *S;
		S = (LNode *)malloc(sizeof(LNode)); //本算法的时间开销在于查找第i-1个元素，时间复杂度为o(n)
		s->data = e;
		s->next = p->next;
		p->next = s;
	}
	//后插操作，在给定位之后插入
	void LinkListinsertR1(LinkList &L, int i, ElemType e)
	{
		LNode *p;
		//	p=GetElem(L,i);
		LNode *S;
		S = (LNode *)malloc(sizeof(LNode)); //本算法的时间开销在于查找第i-1个元素，时间复杂度为o(1)
		s->data = e;
		s->next = p->next;
		p->next = s;
	}
