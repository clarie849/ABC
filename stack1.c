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

SELECT 学号，姓名，专业
FROM 学生
WHERE 学号 IN
(SELECT X .Y 学号
FROM 学习 AS X，学习AS Y
WHERE X.学号=Y.学号 AND X.学号='C135'AND Y.学号='C219')

DELETE FROM 学生
WHERE 学号 IN
(SELECT 学号FROM 学习 WHERE 分数=0)

CREATE VIEW AAA(学号，姓名，课程号，分数)
AS SELECT 学号，姓名，课程号，分数
FROM 学生，学习
WHERE 学生.学号=学习.学号 AND 专业='英语'

CREATE ASSERTION ASSE8 CHECK
(100<=ALL (SELECT PRICE FROM SHOP.A ,SALE B,GOODS C WHERE A.S#=B.S# AND B.G#=C.G# AND AREA='EAST' ));

//元组表达式
{t|(ョU)(ョV)(R(U)∧S(V) ∧U(2)=S(1)∧U(3)=S(2)∧U(1)>S(3)∧t(1)=U(1)∧t(2)=U(3)}
//关系逻辑规则如下
W-(b,c) <-R(a,b,c)∧S(b,c,d)∧a>d
//SQL语句
SELECT R.B ,R.C
FROM R,S 
WHERE R.B=S.B AND R.C=S.C AND A>D

	The table clearly reflects the statics of staff‘s job statisfation  in a certain company.
According to the data given above,we can conclude that the precentage of people satisfied with
their jobs is highest among those over 50 years old,at about 40%.In contrast,the percentage of 
the staff not satisfied with their jobs is about 64% among those in their forties,the highest
among all the three age groups.
	The major determinant of satisfaction lies in people’s attitude‘s.On the one hand,staff members
in their forties unusally have to undertake a lot of responsibilities from both their families
and their careers.Sometimes their even under pressure to pursure money,power,high social status,and
so on,which are on symbols of success.So they have the least satisfication in their jobs.On the other
hand,people over 50 generally have shifted their life goals from achieving the ultimate success to a
realtively easy and comfortable life,and therefore are inclined to be much more satisfied with their jobs.
	In the view of above reasoning,i am convinced that it is difficult for everyone to be content with
with their jobs.And that it is advisable that people should adjust their expectations for work,and that 
companies should pay more attention to the welfare of their staff.   


//新节点S插入链表
s->next=p;
s->perior = p->perior;
p->perior->next = s;
p->perior = s;


//删除操作
p->perior->next = P->next;
p->next->perior = p->perior;
delete p;

int BTLC(Bi Tree,int *c)
{
	if(T)
	{

		*c++;
		BTLC(T->lchild, &c);
		BTLC(T->rchild, &c);
	}
}

ListNode Find_k(ListNode *L,int k)
{
	if(L==Null)
		return 0;
	ListNode *p = L;
	int i = 0;
	while (p->next!=Null)
	{
		p = p->next;
		i++;
	}
	if(i<k)
		return 0;
	p = L;
	for (int j = 0; j < i - k;j++)
	{
		p = p->next;
	}
	printf("%d", p->data);
	return 1;
	else
	{
		return0;
	}
	
}

void Delete(ElemType A[],int n)
{
	i = 1;
	j = n;
	while (i < j)
	{
		while (i < j && A[i] != item)
			i++;
		if (i < j && A[i] = item)
			j--;
		if (i < j)
			A[i++] = A[j--];
	}
}

int single_child(BTree *b)
{
	int num1, num2, n = 0;
	if(b==NULL)
		return 0;
	else if(((b->lchild==NULL)&&(b->rchild!=NULL))||((b->lchild!=NULL)&&(b->rchild==NULL)))
		n = 1;
	num1 = single_child(b->lchild);
	num2 = single_child(b->rchlid);
	retuen(n + num1 + num2);
}

Typedef int Elem Type;
typedef struct
{
	ElemType *elem;
	int length;

} SSTable;
int search_Seq(SSTable ST,KeyType key)
{
	ST.elem[0].key = key;
	for (i = ST.length; ST.elem[i].key != key;--i)
	{
		return i;
	}
}
search_Seq;

#define maxsize
void InOutS(int s[maxsize])
{
	int top = 0;
	for (i = 1; i < n;i++)
	{
		scanf("%d", &x);
		if(x!=-1)
		if(top==maxsize-1)
		{
			printf("栈满X\n");
			exit 0;
		}
		else {
			s[++top] = x;
		}
		else
		{
			if((top==0))
				printf("zhankong\n") else printf("出栈元数%d\n", s[top--]);
		}
		
	}
}

	This chart clearly illustrates the pourposes of touring for students in a certain university.
As is reflected by the diagram,37 percent of college students travel in order to appreciate
the scenery.Next Comes the aim of relieving pressure,accounting for 33 percent.By contrast,the 
percentages of students travelling aiming at other goals,making friends and cultivating independent
account for 15 percent ,9 percent and 6 percentrespectively.
	Several primary factors could contribute to this phenomenon. In the first place,travel can
offer us a wide range of experiences. In travelling,we may join tourists marveling at the incrediable
power of Niagara Falls,mingle the happy throngs strolling in the paris boulevards and experience 
the bitterness and joy of people on different lands and in different times. In the second place
,college students,who have to juggle academic work,romatic relationships and a busy social
calendar,are particularly susceptiable to pressure.by touring,they can successfully manage
and reduce stress.
	Taking all these factors into consideration,we may predict that with the quicking pace
and and ever-increasing pressure of campus life,the number of university students touring 
keep growing in the forthcoming decade.

SELETCT S#
FROM S
WHERE S# NOT IN
(
	SELECT S#
	FROM SC 
	WHERE C# IN (C2,C4)
);
π S# (S) -πS#(σC#='C2'∨C#='C4'(S*SC))))))
//关系代数表达式 
πG#，SNAME(σSNAME='莘庄'(STORE*SG*GOODS))
//元组表达式
{t|(ョu)(ョv)(ョw)(GOODS(u)∧(SG(v)∧(STORE(w)∧(u(1)=v(2)∧v(1)=w(1)∧w(2)='莘庄')∧t(1)=u(1)∧t(2)=v（2）)))}
//关系逻辑规则
w(x,y)<-GOODS(x,y,a)∧SG(b,x,c)∧STORE(b,'莘庄'，d)
SELECT语句为
SELECT A.G# GNAME
FROM GOODS AS A,SG AS B ,STORE AS C 
WHERE A.G#= B.G# AND B.S#=C.S# AND SNAME='莘庄'

SELECT s# ,sum(QUANTITY *PRICE )AS SUM_VALUE
FROM SG ,GOODS
WHERE GOODS.S#=SE.S#
GROUP BY S#;

CREATE ASSERTION ASSE6 CHECK(20 >= ALL(SELECT COUNT(SG.G #))
									   FROM SG,
							 GOODS
								 WHERE SG.G # = GOODS.G #AND PRICE > 10000 GROUP BY S #);

CREATE TYPE MyString char varying;
CREATE TABLE university ()

	The pie chart above clearly reveals the factors of customers concern on chooseing resturants
in a certain city in 2017 . Among  all the five categories ,the percentages of feature,service
and environment are the highest,accounting for 36.6%,26.8 and 23.8% respectively.On the contrary
the statics of price and other factors take up merely 8.4% and 4.7% respectively,the lowest among
the five groups.
	severy primary causes that contribute to  the above_mentioned phenomenon could be summaized
as follows. In the first place ,with the prosperity of economy in China and the increase of
people  income in recent decades, a large number people are paying more attention to the features
of a resturant instead of prices. In the second place,in a bid to develop interpersonal relationship
and enjoy comfortable life,consumers in mounting numbers perfer service and environment to other
factors.
	With due consideration of all these contributors we may predict with the speedy development
of our society, customers in expending numbers will attach utmost significance to the __has_feature
service as well as environment of a resturant rather than prices or other factors.


void biTreeChange(biTree tr)
{
	if(tr==NULL)
		return;
	pNode pn = tr->left;
	tr->left = tr->right
				   tr->right = pn;
	biTreeChange(tr->left);
	biTreeChange(tr->right);

}

SELECT 姓名 FROM 员工
DRDER BY  职称 DESC ；

SELECT 员工编号 ，SUM(工时) FROM 施工
GROUP BY 员工编号 HAVING SUM(工时)>480

CREATE VIEW 工作量(员工编号，姓名，项目名称，工时)
AS SELECT 员工。员工编号 ，姓名，项目名称，工时
FROM 员工，项目，施工
WHERE 员工.员工编号=施工.员工编号 AND 施工.施工编号=项目.项目编号

UPDATE 施工
SET 工时=工时+50
WHERE 项目编号 IN 
(SELECT 项目编号 FROM 项目
WHERE 项目名称='高教新区项目'
)


	The column chart above reflects what college granduates plan to do after graduation.
As can been seen from diagram, 35.20% of undergraduates plan to take the civil servants
examination, and 31.9% of them plan to take the test for graduate students, each accounting
for approximately a third of the total.
	When make this decision,students should consider a varity of factors,including their 
career plans,financial status and personal perferences. The first factor perferences that
undergraduate students should do the necessary research to find out whether,and to what extent
job prospects for their intended line of work would improve with a postgraduate education. The 
second factor that students deciding between postgraduate education and employment should take 
into account is their financial situation .Schorships ,bursaries and loans may be available 
to some students ,and these should be taken into consideration when assering whether on has ability
to bear the costs of graduate studies. The final factor that undergraduate students should consider
when deliberating between work and further education is their own personal perferences. These
individenal perferences should be given due consideration as students approach the end of their
undergraduat education.
	Generally speaking ,by taking career goals ,financial status perferences into consideration
students can improve their chances of making an optimal choice.


CREATE TABLE STUDENT
(
	Sno INT PRIMARY KEY,
	SN CHAR(30),
	SA INT
);

CREATE TABLE Course
(
	Cno INT PRIMARY KEY,
	cN CHAR(30),
	CT CHAR(30)
); 
CREATE TABLE SC 
(
	Sno INT,
	Cno INT,
	G INT,
	PRIMARY(Sno,Cno),
	FOREIGN KEY REFERENCES Students(Sno),
	FOREIGN KEY REFERENCES Course(Cno),
); 

GRANT INSERT,UPDATE ,On Student To 'zhaohua'
INSERT INFO Student
(
	TABLE
	(01001,'zhaohua',19)
	(01002,'libng',23)
	(01003,'zhangqiang',17)
);
UPDATE Student
	SET SA = SA + 1;

EXEC SQL BEGIN DECLARE SECTION;
int sno;
char Sname[30];
int sage;
char SQLSTATE[6];
EXEC SQL END DECLARE SECTION;
Sno = 01001;
sname = 'zhuaohua';
sage = 19;
EXEC SQL INSERT
INTO Student
VALUES(:sno,:sname,:age); 


	The diagram above cleraly illustrates that a dramatic increase has occurred in the 
recruitment of Master of Engineering (ME) in China during past seven years.According to the 
statics given above,we may conclude that the recruitment of MEs was on a steady rise from 1998
to 2004 .In 1998,The number was at low of only about 2500. Surprisingly . 
it reached more than 35000
in 2004,with no more than seven years.
	Some driving factors that contribute to the above-mentioned change may 
	be summarized as fellows
First and foremost,China has become particularly active manufacturing,which has led to 
an increased
demand of qualified engineers. In addition,the development of the job market on the whole cannot
keep pace with the expension of college graduates,which has obliged a large number of students 
to stay on campus for another three years to get better prepared for their careers.Last but not 
least ,working pressure is another reason.Taking all these fectors into account ,we may predict
that with the speedy development of our society.the recruitment of MEs will keep growing in the 
forthcoming decade.
	On the other side of the coin, however,this tendency may bring about a good many problems
such as the waste of talent,It is necessary for us to take effective measure to ensure this
situation doesnot get out of hand, and encourage students to choose majors for which both
 theoretical
knowledge and particular skills will be demmanded in the job market.   


	The column chart above reveals clearly the statics of reading quantity per person in seven
countries in 2013. Based upon the data ,the reading volumes in the USA ,Israel and Russia are 
highest among the several nations,accounting for 5644 and 42 books per person respectively.
On the country, those in korea and china are lowest,taking up merely 11 and 4 books.
	This tendency is rather disturbing ,for reading extensively is no less necessary to ones
mental life than fresh air to ones physical life.  From this extensively we can derive companionship
expensive and instruction . First and foremost, a good book is our faithful friend. It can increase
our contentment when we are cheerful and happy.and lesson our pain, when we are sad or lonely.
Fourthemore ,reading extensively can offer us a wide range of expensives. Few of us can travel
far more home or live long one hundred, but all of us can live many different lives through the 
pages of books. Last but not least, reading extensively can increase our intellectual ability.
broden our minds and make us wise.
	Though with the advent of,TV cell phone and Internet,books are no longer read us extensively
as they once were,nothing can replace the role that reading extensively plays in our lives.



	The line chart above illustrates clearly the amount of gymnasiums and people doing 
	exercises in a certain city
between 2014 and 2016 . As is revealed in the graph ,the statistics of people doing exercises
 has been on a steady
rise, from one million to nearly to two million,while the number of gyms has increased 
considerably 600 to about
860,a raise of 260.
    Several factors could contribute to this tendency. In the first place,with the quickening
	 pace and ever-increasing
pressure of urben life,people in growing numbers of suffering either physical or mental 
problems.Thus,gymnasiums in mounting
numbers has been built by concerned departments. In the second place,the desire for health 
is universial .Accordingly
people various choose jogging,playing basketball,swiming,skiating,climbing or riding as their 
regular exercise because of
exercise never fails to make them stonger and more exergenic.
	As far as I am concerned,I have a peculiar interest in yoga as a form of exercise.An hours,
	exercise every day usually
makes me feel healthier and more vigorious,Besides,I never touch cigarettes and wine, nor i
 stay late .Instead,I keep
a balanced diet and go to bed before 11 oclock at night ,because i believe burning the midnight
 oil is harmful to health. 
More importantly,an optimistic attitude toward life makes me confident and president. To sum up,
all these practises
guarantee a healthy body and a happy life.



	As can be seen from the mixed chart above, the population over 60 years old in China has increased markedly from 2000
and will continue to grow in the coming decades.From the statisticcs given in the diagram,we can estimate that they were
120 million aged people in 2000, accounting for about 10% of the total population, while the number will shoot up to 450
millon in 2050,approximately 35% of the total.
	From my point of view,the government ,social and child of the old should all care the old together .only one or two
parents involvement will not be enough.How  well  we handle this social issue reflects the degree of civilization of our
country.To begin with,all citizens with income pay taxes to the government , so the obliged to ensure a sheady 
and happy life
for its people.In addition,society,including companies,associations and organizations ,
should play a positive role in helping
the aged people.both financially and spiritually .Last but not least,the childern of the elderly should be responsible 
for their parents,because their parents have not only brought them into the world,but also raised 
them to be useful citizens.
	In conclusion ,I suggest that the entire society should create an environment conductive to the happy life of the 
elderly. No one can escape the obligation.


	Currently,there is a widespread concern regarding the perviousely neglected connection between growing human 
	populations and decreasing wild species.As the two graphs clearly portray,the American population in 1980 was 250 
times than that of 1800,a tread accompanied by the extinction of nearly 70 Kinds of wildlife in the past 300 years. 
A clear correlection suggested:that mankind has externed a tremendously negative influence on natural resources.
	There a great many causes responsible for the aforementioned correlection. To begin with  ,to statisfy the space 
demands
of a booming population,the only availably solution for Americans was to inherbit forests and grasslands that used to be 
the habitats of wild animals and plants .In addition,the process of industrialization and urbanization has generated 
severe popullation that essentially destorys environments and ecosystems.
	From my point of view ,the dearth of wild species today forecasts an unpromising future for humans tomorrow.In order
to  elimiate species extinction, relevant laws and regulations must be established and enforce to maintain large
spoil areas.Drastic measures should also be applied to ensure that the impact of pollution is removed.

Dear Sir or Madam:
	Moved by the noble cause of Project Hope and encouraged by what has been achieved so far,I would like contribute to 
my bit to the project by offering financial aid to a child in a remote area of your province .
	I would be very grateful if you could help me seek  out a girl who has just started schooling but whose family
cannot afford her education. My plan is pay for her tuition on a annual basis until she finishes her secondary education.
I would like to remit my donation directly to a bank account opened by her family in her local area. 


													Notice
																		January 9,2010
	Volunteers are needed for the international conference On Globalization to be held on this 
	campus in early July. 
Basic requirments are familiary with the theme of the conference and proficiency of English.
Other requirments include 
good interpersonal communication abilities ,familiarity with our city s tourists attructions 
and its history, porper 
manners and a strong sense of responsibility . Perference will be given to those experienced 
in international 
conferences or other similar activities.
	Call 86754321 or email postgr@ccc.edu.cn for a application and for information on the 
	interview. phone and email 
enquiresare encouraged;no visits please.
                                                                    PostGraduate Association



Dear Bod:
	I have just arrived at my home from the airport. As I sit down at my desk, 
	I just want write a letter to you to 
	thank
you for your reception in the cultural exchange program. You and your family left a deep 
impremission upon me. Indeed,
the problem is one of the most wonderful memories in my life.
	I remember you you mentioned wanting to travel in china. Well if you come to China,
	you will be a warmly welcomed,
and it well be my pleasure to be your guide here, if you would like,send me a list  
beforehand of the places you would
like to visit. 
	Please give my best regards to your family. 
																Sincerely yours ,
																Zhang Wei

Dear Sir or Madam, 
	Moved by the noble cause of Project Hope and encouraged by what has been achieved so far,
I would like to contribute my bit to the project by offering financial aid to a child in a 
remote area of your province.
I would be very grateful if you could help me seek out a girl who has just started schooling 
but whose family cannot afford her education. My plan is to pay for her tuition on an annual 
basis until she finishes her secondary education.I would like to remit my donation directly 
to a bank account opened by her family in her local area.(105 words)
														Yours truly, Li Ming
Notice January 9,2010
	Volunteers are needed for the International Conference on Globalization to be held 
on this campus in early July. Basic requirements are familiarity with the theme of the 
conference and proficiency of English. Other requirements include good interpersonal 
communication abilities, familiarity with our city's tourist attractions and its history, 
proper manners, and a strong sense of responsibility. Preference will be given to those 
experienced in international conferences or other similar activities.
Call 86754321 or email postgr@ ccc. edu. cn for an application and for information 
on the interview. Phone and email enquiries are encouraged; no visits please.
													Postgraduate Association

Dear Michael, 
	As one of your closest friend,I'm writing the letter in order to recommend one of my 
	favorite movies to you-Around the World in Eighty Days.
The primary factors for my recommendation are as follows. For one thing, this is a science 
fiction movie which tells us an exciting story about an English gentleman, Mr. Phileas Fogg,
 who makes a bet with his clubmates and managers that he can travel around the world 
 in eighty days.
For another, it gives us a vivid description of the many difficulties and incidents which 
happen on his journey.
Hope you watch and enjoy the movie. Looking forward to your reply.(105 words)
																			Yours, Li Ming

Dear Sir or Madam，
I bought an electronic dictionary from your online store on January 1st，but after using it
for a short period of time，I found it has some problems.
To begin with，the battery needs recharging after a mere 2 hours of use.
This means that I need to carry my charger with me when I go out for a day.
In addition，the buttons on the electronic dictionary are so small that it is nearly 
impossible to type anything with them.
Personally，I find this to be completely unacceptable.
Therefore，I would like to either change for another model that works better or 
a full refund.Your help is greatly appreciated.（111 words）
													Yours sincerely，Zhang Wei

Dear Prof. Williams, 
		I am extremely honored to accept your invitation to give a presentation to a 
		host of foreign
 students on Chinese culture.
Here are the key points of my presentation. First of all, compared with Westerners, 
the Chinese people have traditionally paid more attention to the harmonious relationship
 between human beings and nature."Nature and Man are one"is a familiar statement in traditional
 Chinese ideology. In addition, in Chinese thought, much emphasis is laid upon moral cultivation,
  the refinement of temper, and the spiritual enlightenment on the part of individual rather
   than upon logical reasoning.
My appreciation to you for your generous help is beyond words.I am looking forward to 
hearing from you soon.
															Yours sincerely, LiMing

Dear Professor Smith, 
I am looking forward to my traveling to the United States and visiting you in Harvard University.

Unfortunately,I have recently been diagnosed with a serious ear infection which will require
 surgery on the same day as my departure.I am sorry to say that I will therefore not be able
  to make the travel plan. If possible,I would like to postpone the travel plan to another day 
  later in this year.I promise that such a situation does not usually happen, and apologize 
  for any inconvenience this may cause you.
Please excuse me for not being able to inform you of my situation sooner. Your prompt attention 
to my suggestion would be highly appreciated.
													Yours sincerely, Li Ming
