#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
struct student
{
    char n[20];
    int id;
    char dep[20];
    int batch;
    float cg;
    struct su
    {
        char sub[20];
        float m;
    } s2[15];
} s[100];
int ch, i, j, n1, n2, n3, n4, n5, n6, n7, n8, x, y, z, r, i1, r, p;
float c, c1, sum = 0, tc = 0;
char a[20];
int input();

void front()
{

    printf("                      _______________________________________________________\n");
    printf("                     |             STUDENT RECORD KEEPING SYSTEM             |\n");
    printf("                     |_______________________________________________________|\n");
    printf("\n");
    printf("\n");
}

void display()
{
    printf("                      _______________________________________________________\n");
    printf("                     |                      Student Data                     |\n");
    printf("                     |_______________________________________________________|\n");
    printf("                     |\n");
    printf("                     |      1. Student Name:%s\t\t \n", s[i].n);
    printf("                     |      2. Student ID:%d\t\t \n", s[i].id);
    printf("                     |      3. Department:%s\t\t \n", s[i].dep);
    printf("                     |      4. Batch:%d\t\t\n", s[i].batch);
    printf("                     |      5. CGPA:%0.2f\t\n", s[i].cg);
    printf("                     |_______________________________________________________\n");
    printf("\n");
    printf("\n");
}

void modify()
{
    printf("                      _______________________________________________________\n");
    printf("                     |                      Student Data                     |\n");
    printf("                     |_______________________________________________________|\n");
    printf("                     |      Name of the student: ");
    getchar();
    gets(s[i].n);
    printf("                     |      Student ID: ");
    scanf(" %d", &s[i].id);
    printf("                     |      Department Name: ");
    getchar();
    gets(s[i].dep);
    printf("                     |      Batch: ");
    scanf("%d", &s[i].batch);
    printf("                     |_______________________________________________________\n");
    printf("\n                            If you want to go back to main menu, type 'y' ");
    scanf("%s", &a);
    printf("\n");

    if (strcmp(a, "y") == 0)
        input();
}

void delet(int pos)
{
    struct student m[100];
    int ab, o = 0;
    for (ab = 0; ab < 100; ab++)
    {
        if (pos == ab)
        {
            o++;
        }
        else
        {
            m[ab] = s[o];
            o++;
        }
    }
    for (ab = 0; ab < 100; ab++)
        s[ab] = m[ab];
    printf("\n                     If you want to go back to main menu, type 'y' ");
    scanf("%s", &a);
    printf("\n");
    if (strcmp(a, "y") == 0)
        input();
}

void add()
{
    printf("                            Enter present number of student ");
    scanf("%d", &n6);
    printf("                     |      How many students record you want to add ");
    scanf("%d", &y);
    p = n6 + y;
    for (i = n6; i < p; i++)
    {
        printf("                     |      Name of the student: ");
        getchar();
        gets(s[i].n);
        printf("                     |      Student ID: ");
        scanf(" %d", &s[i].id);
        printf("                     |      Department Name: ");
        getchar();
        gets(s[i].dep);
        printf("                     |      Batch: ");
        scanf("%d", &s[i].batch);
    }
    printf("\n                            If you want to go back to main menu, type 'y' ");
    scanf("%s", &a);
    printf("\n");
    if (strcmp(a, "y") == 0)
        input();
}
void cgpa()
{
    printf("                     |      Number of course: ");
    scanf("%d", &n2);
    for (j = 1; j <= n2; j++)
    {
        printf("                     |      Enter course name: ");
        getchar();
        scanf("%s", &s[i].s2[j].sub);
        printf("                     |      Enter marks for %s : ", s[i].s2[j].sub);
        scanf("%f", &s[i].s2[j].m);
        printf("                     |      Enter credit for %s : ", s[i].s2[j].sub);
        scanf("%f", &c);
        if (s[i].s2[j].m >= 80 && s[i].s2[j].m <= 100)
            c1 = c * 4;
        if (s[i].s2[j].m >= 75 && s[i].s2[j].m < 80)
            c1 = c * 3.75;
        if (s[i].s2[j].m >= 70 && s[i].s2[j].m < 75)
            c1 = c * 3.5;
        if (s[i].s2[j].m >= 65 && s[i].s2[j].m < 70)
            c1 = c * 3.25;
        if (s[i].s2[j].m >= 60 && s[i].s2[j].m < 65)
            c1 = c * 3;
        if (s[i].s2[j].m >= 55 && s[i].s2[j].m < 60)
            c1 = c * 2.75;
        if (s[i].s2[j].m >= 50 && s[i].s2[j].m < 55)
            c1 = c * 2.5;
        if (s[i].s2[j].m >= 45 && s[i].s2[j].m < 50)
            c1 = c * 2.25;
        if (s[i].s2[j].m >= 40 && s[i].s2[j].m < 45)
            c1 = c * 2;
        if (s[i].s2[j].m >= 0 && s[i].s2[j].m < 40)
            c1 = c * 0;
        sum = sum + c1;
        tc = tc + c;
    }
    s[i].cg = sum / tc;
    printf("\n                            If you want to go back to main menu, type 'y' ");
    scanf("%s", &a);
    printf("\n");
    if (strcmp(a, "y") == 0)
        input();
}

void cgshow()
{
    printf("                     Enter Student ID : ");
    scanf("%d", &r);

    printf("                      _______________________________________________________\n");
    printf("                     |             STUDENT RECORD KEEPING SYSTEM             |\n");
    printf("                     |_______________________________________________________|\n");
    printf("\n");
    printf("\n");
    if (s[i].id == r)
    {
        printf("                      _______________________________________________________\n");
        printf("                     |                     Displaying Data                   |\n");
        printf("                     |_______________________________________________________|\n");
        printf("                     |\n");
        printf("                     |      1. Student Name:%s\t\t \n", s[i].n);
        printf("                     |      2. Student ID:%d\t\t \n", s[i].id);
        printf("                     |      3. Department:%s\t\t \n", s[i].dep);
        printf("                     |      4. Batch:%d\t\t\n", s[i].batch);
        printf("                     |      5. CGPA:%0.2f\t\n", s[i].cg);
        printf("                     |_______________________________________________________\n");
        if (s[i].cg > 3.50 && s[i].cg < 3.75)
        {
            printf("                     | Total payable amount: 40000 |\n                     | Waiver Percentage: 20     |\n");
        }
        if (s[i].cg > 3.75 && s[i].cg <= 4.00)
        {
            printf("                     | Total payable amount: 35000 |\n                     | Waiver Percentage: 30       |\n");
        }
        else
        {
            printf("                     | Total payable amount: 50000 |\n                     | Waiver Percentage: No Waiver|\n");
        }
        for (j = 1; j <= n2; j++)
        {

            printf("                     |_____________________________|\n");
            printf("                     |           Result            |\n");
            printf("                     | Subject\t \tGrade     |\n");
            printf("                     | %s\t\t", s[i].s2[j].sub);

            if (s[i].s2[j].m >= 80 && s[i].s2[j].m <= 100)
                printf("A+\n");
            if (s[i].s2[j].m >= 75 && s[i].s2[j].m < 80)
                printf("A\n");
            if (s[i].s2[j].m >= 70 && s[i].s2[j].m < 75)
                printf("A-\n");
            if (s[i].s2[j].m >= 65 && s[i].s2[j].m < 70)
                printf("B+\n");
            if (s[i].s2[j].m >= 60 && s[i].s2[j].m < 65)
                printf("B\n");
            if (s[i].s2[j].m >= 55 && s[i].s2[j].m < 60)
                printf("B-\n");
            if (s[i].s2[j].m >= 50 && s[i].s2[j].m < 55)
                printf("C+\n");
            if (s[i].s2[j].m >= 45 && s[i].s2[j].m < 50)
                printf("C\n");
            if (s[i].s2[j].m >= 40 && s[i].s2[j].m < 45)
                printf("D\n");
            if (s[i].s2[j].m >= 0 && s[i].s2[j].m < 40)
                printf("F\n");
        }

        printf("                     |_____________________________|\n");
    }
    printf("\n                   If you want to go back to main menu, type 'y' ");
    scanf("%s", &a);
    printf("\n");
    if (strcmp(a, "y") == 0)
        input();
}
input()
{
    system("COLOR 02");
    system("cls");
    printf("                      _______________________________________________________\n");
    printf("                     |     WELCOME TO STUDENT DATABASE MANAGEMENT SYSTEM     |\n");
    printf("                     |_______________________________________________________|\n");
    printf("                                            HOME PAGE                      \n");

    printf("\n           Choose from here: ");
    printf("\n        1. Create student record.");
    printf("\n        2. Modify student record.");
    //printf("\n        3. Add student record ");
    printf("\n        3. Delete student  record.");
    printf("\n        4. Search student  record.");
    printf("\n        5. Display records of the student.");
    printf("\n        6. Input marks in stored student record.");
    printf("\n        7. Show a student record with cgpa.");
    printf("\n        8. Exit.\n");
    printf("\n        Please enter your option (1-8): ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        system("cls");
        printf("                      _______________________________________________________\n");
        printf("                     |                 Adding Student Record                 |\n");
        printf("                     |_______________________________________________________|\n");
        printf("                     |\n");
        printf("                     |      Enter number of records you want to add: ");
        scanf("%d", &n1);
        for (i = 0; i < n1; i++)
        {
            printf("                     |      Name of the student: ");
            getchar();
            gets(s[i].n);
            printf("                     |      Student ID: ");
            scanf(" %d", &s[i].id);
            printf("                     |      Department Name: ");
            getchar();
            gets(s[i].dep);
            printf("                     |      Batch: ");
            scanf("%d", &s[i].batch);
            printf("                     |_______________________________________________________\n");
        }
        printf("\n                     If you want to go back to main menu, type 'y' ");
        scanf("%s", &a);
        printf("\n");
        if (strcmp(a, "y") == 0)
            input();
        break;
    case 2:
        system("cls");
        printf("                      _______________________________________________________\n");
        printf("                     |                      Modifying Data                   |\n");
        printf("                     |_______________________________________________________|\n");
        printf("                     |      Enter total number of students :");
        scanf("%d", &n4);
        printf("                     |      Enter Student ID : ");
        scanf("%d", &x);
        for (i = 0; i < n4; i++)
        {
            if (s[i].id == x)
            {
                modify();
                break;
            }
        }
        //case 3:
        //add();
        //break;
    case 3:
        //system("cls");
        printf("                      _______________________________________________________\n");
        printf("                     |                  Deleting Student Record              |\n");
        printf("                     |_______________________________________________________|\n");
        printf("                     |      Enter total number of records to delete :");
        scanf("%d", &n5);
        printf("                     |      Enter Student ID: ");
        scanf("%d", &x);
        for (i = 0; i < n5; i++)
        {
            if (x == s[i].id)
            {
                delet(i);
                break;
            }
        }
        break;
    case 4:
        system("cls");
        printf("\n                            Enter total number of students :");
        scanf("%d", &n3);
        printf("                            Enter Student ID: ");
        scanf("%d", &x);
        front();
        for (i = 0; i < n3; i++)
        {
            if (s[i].id == x)
                display();
        }
        printf("\n                            If you want to go back to main menu, type 'y' ");
        scanf("%s", &a);
        printf("\n");
        if (strcmp(a, "y") == 0)
            input();
        break;
    case 5:
        system("cls");
        printf("                            Enter total number of students :");
        scanf("%d", &n7);
        front();
        for (i = 0; i < n7; i++)
            display();
        printf("\n                            If you want to go back to main menu, type 'y' ");
        scanf("%s", &a);
        printf("\n");
        if (strcmp(a, "y") == 0)
            input();
        break;
    case 6:
        system("cls");
        printf("                      _______________________________________________________\n");
        printf("                     |                      Adding Marks                     |\n");
        printf("                     |_______________________________________________________|\n");
        printf("                     |      Enter total number of students :");
        scanf("%d", &n8);
        printf("                     |\n");
        printf("                     |      Enter  Student ID : ");
        scanf("%d", &z);
        for (i = 0; i < n8; i++)
        {
            if (s[i].id == z)
            {
                cgpa();
                break;
            }
        }
    case 7:
        system("cls");
        cgshow();
        break;
    case 8:
        system("cls");
        printf("                      _______________________________________________________\n");
        printf("                     |                                                       |\n");
        printf("                     |          Thank you for using our software             |\n");
        printf("                     |*******************************************************|\n");
        printf("                     |            This project was done by                   |\n");
        printf("                     |                                                       |\n");
        printf("                     |            Sakib Sarker (202-15-3824)                 |\n");
        printf("                     |            Arnob Dey (203-15-3906)                    |\n");
        printf("                     |            Md.Zonaid (203-15-3926)                    |\n");
        printf("                     |            Omor Faruk (201-15-3208)                   |\n");
        printf("                     |            Rakib Hossain Ifti (202-15-3788)           |\n");
        printf("                     |_______________________________________________________|\n");
        exit(0);
        break;
    default:
        break;
    }
}
int main()
{
    input();
}
