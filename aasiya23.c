<<<<<<< HEAD
<<<<<<< HEAD
void delet_front()
{
NODE temp;
if(first==NULL)
printf("list is empty\n");
else
{
temp=first;
first=temp->next;
printf("\nthe deleted student usn is:
%s",temp->usn);
free(temp);
}
}

=======
void delet_end()
{
NODE temp,prev;
temp=first;
if(temp->next==NULL)
first=NULL;
else
{
while(temp->next!=NULL)
{
prev=temp;
temp=temp->next;
}
prev->next=NULL;
}
printf("\nthe deleted student usn is:
%s",temp->usn);
>>>>>>> 09dcd03ced9c7c92f487f5770bd40b9a7622de6e
=======
void insert_front()
{
NODE nw;
char usn[20],branch[20],name[20],num[20];
int x;
printf("\nenter the student 
usn,name,branch,sem and phno:");
scanf("%s%s%s%d%s",usn,name,branch,&
x,num);
nw=(NODE)malloc(sizeof(struct student));
strcpy(nw->usn,usn);
strcpy(nw->name,name);
strcpy(nw->branch,branch);
nw->sem=x;
strcpy(nw->phno,num);
nw->next=first;
first=nw;
}
void insert_end()
{
NODE nw,p;
char usn[20],branch[20],name[20],num[20];
int x;
printf("\nenter the student
usn,name,branch,sem,phno:");
scanf("%s%s%s%d%s",usn,name,branch,&
x,num);
nw=(NODE)malloc(sizeof(struct student));
strcpy(nw->usn,usn);
strcpy(nw->name,name);
strcpy(nw->branch,branch);
nw->sem=x;
strcpy(nw->phno,num);
nw->next=NULL;
if(first==NULL)
first=nw;
else
{
p=first;
while(p->next!=NULL)
p=p->next;
p->next=nw;
}
>>>>>>> 1050e7e7154f78ded79809c7b67ece385dea0df3
}
>>>>>>> 1050e7e7154f78ded79809c7b67ece385dea0df3
