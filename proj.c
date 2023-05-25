#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	char t;
	char user[100];
	char user1[100];
	int k;
	int people = 1;
	do
	{

		system("cls");
		int a, b;
		printf("\t\t\t\t***************TYPING TESTER***************\n");
		printf("\t\t\t\t\t     M A I N    M E N U\n");
		printf("\n\n\t\t\t\t\t\t1. Start\n");
		printf("\t\t\t\t\t\t2. High Scores\n");
		printf("\t\t\t\t\t\t3. Exit\n");
		printf("\t\t\t\t\t\tEnter your choice by number: ");
		scanf("%d", &a);

		system("cls");
		printf("\t\t\t\t***************TYPING TESTER***************\n");

		if (a == 1)
		{
			printf("\t\t\t\t\t      Enter your name:\n");
			scanf("%s",user);
			for (k = 0; k < 15; k++)
			{
				user1[k] = user[k];
			}
			for (k = 0; k < 15; k++)
			{
				printf("%c", user1[k]);
			}
			people++;
			system("cls");
			printf("\t\t\t\t***************TYPING TESTER***************\n");
			printf("\n\t\t\t\t\t1. New Typer(Easy Difficulty)\n");
			printf("\t\t\t\t\t2. Veteran Typer(Medium Difficulty)\n");
			printf("\t\t\t\t\t3. Expert Typer(Hard Difficulty)\n");
			printf("\t\t\t\t\tChoose your level by number: ");
			scanf("%d", &b);
			system("cls");
			printf("\t\t\t\t***************TYPING TESTER***************\n");

			if (b == 1) //for beginner
			{
				int d;
				printf("\t\t\t\t\t Press 1 to start the test\n");
				scanf("\t\t\t\t\t\t%d", &d);

				system("cls");
				printf("\t\t\t\t***************TYPING TESTER***************\n");

				if (d == 1) //for start the test
				{

					time_t start = time(NULL);
					char *path = calloc(20, sizeof(char));
					int num = rand() % 3;
					char name[] = {'E', num + '0', '.', 't', 'x', 't'};
					strcat(path, name);
					FILE *fptr = fopen(name, "r");
					if (fptr == NULL)
					{
						exit(1);
					}
					int i = 0, errors = 0, wordCount = 0, wordLength = 0;
					fscanf(fptr, "%d %d", &wordCount, &wordLength);
					char **words = (char **)calloc(wordCount, sizeof(char *));
					char **inputWords = (char **)calloc(wordCount, sizeof(char *));
					for (i = 0; i < wordCount; ++i)
					{
						words[i] = (char *)calloc(wordLength, sizeof(char));
						inputWords[i] = (char *)calloc(wordLength, sizeof(char));
						fscanf(fptr, "%s", words[i]);
					}
					for (i = 0; i < wordCount; ++i)
					{
						printf("%s ", words[i]);
					}
					printf("\n");
					printf("\n\n\t\t\t\t\twrite the above passage carefully: \n");
					fflush(stdin);
					for (i = 0; i < wordCount; ++i)
					{
						scanf("%s", inputWords[i]);
					}
					for (i = 0; i < wordCount; ++i)
					{
						if (strcmp(words[i], inputWords[i]) != 0)
						{
							printf("\t\t\t\t\t     You typed %s instead of %s.\n", inputWords[i], words[i]);
							++errors;
						}
					}
					printf("\n\n\t\t\t\t\t    %d errors in %d words.\n", errors, wordCount);
					float percentage;
					percentage=((wordCount-errors)/wordCount)*100;
					time_t now = time(NULL);
					printf("\n\t\t\t\t\t   Typing Accuracy %3.2f %%",percentage);
					int min,sec;
					min=(now-start)/60;
					sec=(now-start)%60;
					printf("\n\n\t\t\t        Your time taken is %d minutes and  %d seconds.\n",min,sec);
					FILE *fpointer = fopen("EStat.txt","a");
					fprintf(fpointer,"\n%s\t%3.2f\t\t%d:%d",user1,percentage,min,sec);
				}
			}
			else if (b == 2) //for mid level
			{
				int e;
				printf("\t\t\t\t\t Press 1 to start the test\n");
				scanf("%d", &e);
				system("cls");
				printf("\t\t\t\t***************TYPING TESTER***************\n");
				if (e == 1) //for start the test
				{

					time_t start = time(NULL);
					char *path = calloc(20, sizeof(char));
					int num = rand() % 3;
					char name[] = {'M', num + '0', '.', 't', 'x', 't'};
					strcat(path, name);
					FILE *fptr = fopen(name, "r");
					if (fptr == NULL)
					{
						exit(1);
					}
					int i = 0, errors = 0, wordCount = 0, wordLength = 0;
					fscanf(fptr, "%d %d", &wordCount, &wordLength);
					char **words = (char **)calloc(wordCount, sizeof(char *));
					char **inputWords = (char **)calloc(wordCount, sizeof(char *));
					for (i = 0; i < wordCount; ++i)
					{
						words[i] = (char *)calloc(wordLength, sizeof(char));
						inputWords[i] = (char *)calloc(wordLength, sizeof(char));
						fscanf(fptr, "%s", words[i]);
					}
					for (i = 0; i < wordCount; ++i)
					{
						printf("%s ", words[i]);
					}
					printf("\n");
					printf("\n\n\t\t\t\t\twrite the above passage carefully: \n");
					fflush(stdin);
					for (i = 0; i < wordCount; ++i)
					{
						scanf("%s", inputWords[i]);
					}
					for (i = 0; i < wordCount; ++i)
					{
						if (strcmp(words[i], inputWords[i]) != 0)
						{
							printf("\t\t\t\t\t     You typed %s instead of %s.\n", inputWords[i], words[i]);
							++errors;
						}
					}
					printf("\n\n\t\t\t\t\t    %d errors in %d words.\n", errors, wordCount);
					float percentage;
					percentage=((wordCount-errors)/wordCount)*100;
					time_t now = time(NULL);
					printf("\n\t\t\t\t\t   Typing Accuracy %3.2f %%",percentage);
					int min,sec;
					min=(now-start)/60;
					sec=(now-start)%60;
					printf("\n\n\t\t\t        Your time taken is %d minutes and  %d seconds.\n",min,sec);
					FILE *fpointer = fopen("MStat.txt","a");
					fprintf(fpointer,"\n%s\t%3.2f\t\t%d:%d",user1,percentage,min,sec);
				}
			}
			else if (b == 3) //for expert
			{
				int f;
				printf("\t\t\t\t\t Press 1 to start the test\n");
				scanf("%d", &f);
				system("cls");
				printf("\t\t\t\t***************TYPING TESTER***************\n");
				if (f == 1) //for start the test
				{

					time_t start = time(NULL);
					char *path = calloc(20, sizeof(char));
					int num = rand() % 3;
					char name[] = {'H', num + '0', '.', 't', 'x', 't'};
					strcat(path, name);
					FILE *fptr = fopen(name, "r");
					if (fptr == NULL)
					{
						exit(1);
					}
					int i = 0, errors = 0, wordCount = 0, wordLength = 0;
					fscanf(fptr, "%d %d", &wordCount, &wordLength);
					char **words = (char **)calloc(wordCount, sizeof(char *));
					char **inputWords = (char **)calloc(wordCount, sizeof(char *));
					for (i = 0; i < wordCount; ++i)
					{
						words[i] = (char *)calloc(wordLength, sizeof(char));
						inputWords[i] = (char *)calloc(wordLength, sizeof(char));
						fscanf(fptr, "%s", words[i]);
					}
					for (i = 0; i < wordCount; ++i)
					{
						printf("%s ", words[i]);
					}
					printf("\n");
					printf("\n\n\t\t\t\t\twrite the above passage carefully: \n");
					fflush(stdin);
					for (i = 0; i < wordCount; ++i)
					{
						scanf("%s", inputWords[i]);
					}
					for (i = 0; i < wordCount; ++i)
					{
						if (strcmp(words[i], inputWords[i]) != 0)
						{
							printf("\t\t\t\t\t     You typed %s instead of %s.\n", inputWords[i], words[i]);
							++errors;
						}
					}
					printf("\n\n\t\t\t\t\t    %d errors in %d words.\n", errors, wordCount);
					int percentage;
					percentage=((wordCount-errors)/wordCount)*100;
					time_t now = time(NULL);
					printf("\n\t\t\t\t\t   Typing Accuracy %3.2f %%",percentage);
					int min,sec;
					min=(now-start)/60;
					sec=(now-start)%60;
					printf("\n\n\t\t\t        Your time taken is %d minutes and  %d seconds.\n",min,sec);
					FILE *fpointer = fopen("HStat.txt","a");
					fprintf(fpointer,"\n%s\t%3.2f\t\t%d:%d",user1,percentage,min,sec);
				}
			}
		}
		if (a == 2) //for statistics
		{
			int diff;
			printf("Which difficulty's record do you wish to visit? \n");
			printf("\n1. New Typer(Easy Difficulty)\n");
			printf("2. Veteran Typer(Medium Difficulty)\n");
			printf("3. Expert Typer(Hard Difficulty)\n");
			printf("Choose your level by number: ");
			scanf("%d",&diff);
			system("cls");
			if(diff == 1)
			{
				char ch;
				FILE *fptr;
				fptr = fopen("EStat.txt","r");
				printf("\t\t\t\t***************TYPING TESTER***************\n");
				if(fptr == NULL)
				{
					exit(1);
				}
				else
				{
					do
					{
						ch=getc(fptr);
						putchar(ch);
					}
					while (ch!=EOF);
					fclose(fptr);
				}
			}
			if(diff == 2)
			{char ch;
				FILE *fptr;
				fptr = fopen("MStat.txt","r");
				printf("\t\t\t\t***************TYPING TESTER***************\n");
				if(fptr == NULL)
				{
					exit(1);
				}
				else
				{
					do
					{
						ch=getc(fptr);
						putchar(ch);
					}
					while (ch!=EOF);
					fclose(fptr);
				}
			}
			if(diff == 3)
			{
				char ch;
				FILE *fptr;
				fptr = fopen("HStat.txt","r");
				printf("\t\t\t\t***************TYPING TESTER***************\n");
				if(fptr == NULL)
				{
					exit(1);
				}
				else
				{
					do
					{
						ch=getc(fptr);
						putchar(ch);
					}
					while (ch!=EOF);
					fclose(fptr);
				}
			}
			
		}

		printf("\n\nDo you want to run this program again?(y or n)\n");
		t = getch();
	} while (t == 'y' || t == 'Y');
}
