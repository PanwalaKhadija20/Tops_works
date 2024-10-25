//    STRUCTURE
#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
    };
int main()
{
    printf("\n STRUCTURE ");
    struct student st[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("\nEnter Roll No: ");
        scanf("%d",&st[i].rollno);
        printf("Enter Name: ");
        scanf("%s",&st[i].name);
        printf("Enter Marks: ");
        scanf("%f",&st[i].marks);
    }
    printf("\n Students Details ");
    for(i=0;i<2;i++)
    {
        printf("\n Roll No: %d",st[i].rollno);
        printf("\n Name: %s",st[i].name);
        printf("\n Marks: %.2f",st[i].marks);
    }
    
}





//   UNION

// #include<stdio.h>
// union student
// {
//     int rollno;
//     char name[20];
//     float marks;
//     };
// int main()
// {
//     printf("\n UNION ");
//     union student st[2];
//     int i;
//     for(i=0;i<2;i++)
//     {
//         printf("Enter Roll No: ");
//         scanf("%d",&st[i].rollno);
//         printf("Enter Name: ");
//         scanf("%s",&st[i].name);
//         printf("Enter Marks: ");
//         scanf("%f",&st[i].marks);
//     }
//     printf("\n Students Details ");
//     for(i=0;i<2;i++)
//     {
//         printf("\n Roll No: %d",st[i].rollno);
//         printf("\n Name: %s",st[i].name);
//         printf("\n Marks: %.2f",st[i].marks);
//     }
    
// }