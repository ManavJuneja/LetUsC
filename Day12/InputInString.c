#include<stdio.h>
int main(){
	char name [25];
	char name2 [25];
	//Version 1 of INPUT Taking
	printf("Enter your name : ");
	scanf("%[^\n]",name);
	printf("You entered : %s",name);
	printf("\n\n");
	
	//clear the input buffer before using the getchar
	/*
	When you use scanf, it reads input but leaves the newline character (\n) in the input buffer when you press Enter. This leftover newline can mess up the next input, especially if you're using fgets or similar functions, as they read this leftover newline instead of waiting for new input.

To fix this, you use getchar(). It removes the leftover newline so the next input works properly.

Example Without getchar:
c
Copy
Edit
scanf("%[^\n]", name); // Reads input but leaves '\n'
fgets(name2, sizeof(name2), stdin); // Reads leftover '\n' instead of user input
Result: fgets doesn't work because it picks up the leftover newline.

Example With getchar:
c
Copy
Edit
scanf("%[^\n]", name); // Reads input
getchar(); // Removes leftover '\n'
fgets(name2, sizeof(name2), stdin); // Now works properly
	
	*/
	getchar();
	//Version 2 of INPUT Taking
	printf("Enter your name2 : ");
	gets(name2);
	puts("Hello!");
	puts(name2);
	return 0;
	
}
