
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter a string:");
    gets(str);


    while(1)
    {
    printf("\n---STRING ANALYZER---\n");
    printf("1. Length of string\n");
    printf("2. Reverse the string\n");
    printf("3. Check palindrome\n");
    printf("4. Count Vowels and Consonants\n");
    printf("5. Frequency of letter\n");
    printf("6.Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();//for clear enter


    if(choice==1)
{
    printf("Length=%lu\n",strlen(str));
}
    else if(choice==2)
    {
        int i;
        printf("Reverse string: ");
        for(i=strlen(str)-1;i>=0;i--)
        {
            printf("%c",str[i]);
        }
        printf("\n");
    }
    else if(choice==3)
    {
        int i,flag=0;
        for(i=0;i<strlen(str)/2;i++)
        {
            if(str[i]!=str[strlen(str)-i-1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("String is palindrome\n");
        else
            printf("String is not palindrome\n");
    }
    else if(choice==4)
    {
        int i,vowel=0,consonant=0;
        for(i=0;i<strlen(str);i++)
        {
            char ch=str[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowel++;


            
        }
        printf("Vowels=%d\n",vowel);
        printf("Consonants=%d\n",consonant);
    }
    else if(choice==5)
    {
        char ch;
        int count=0,i;
        printf("Enter a letter to find frequency: ");
        scanf("%c",&ch);

for(int i=0; str[i]!='\0';i++)

        {
            if(str[i]==ch)
            {
                count++;
            }
        }
        printf("Frequency of %c=%d\n",ch,count);
    }
    if( choice==6)
    {
        printf("Exiting program\n");
        break;
    }
    else
    {

        printf("Invalid choice\n");
    }

}
return 0;
}
