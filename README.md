# 📘 Phitron - C Programming (Module 2)

This repository contains my practice codes from **Module 2** of the Phitron C Programming Course. In this module, I learned about arithmetic operations, input/output formatting, conditional statements, and special character handling.

---

## ✅ What I Learned

### ➕ 1. Basic Arithmetic Operations
📄 **File:** `basic_arithmetic.c`
```c
#include<stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    int sum = a + b;
    printf("Summation: %d\n", sum);

    int sub = b - a;
    printf("Subtraction: %d\n", sub);

    int mul = a * b;
    printf("Multiplication: %d\n", mul);

    int div = a / b;
    printf("Division: %d", div);

    return 0;
}
🔢 2. Floating Point Division
📄 File: float_division.c

c
Copy
Edit
#include<stdio.h>

int main()
{
    float a = 10;
    int b = 3;
    float div = a / b;

    printf("%.2f", div);

    return 0;
}
🔁 3. Swapping Input Order While Printing
📄 File: swap_input_output.c

c
Copy
Edit
#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter Two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Second Number: %d\n", b);
    printf("First Number: %d\n", a);

    return 0;
}
📝 4. Special Characters in printf
📄 File: special_characters.c

c
Copy
Edit
#include<stdio.h>

int main()
{
    printf("This is a line with a newline character\n");
    printf("This is a line with a horizontal tab\tright here.\n");
    printf("This string contains a \"double quote\"\n");
    printf("This string contains a \'single quote\'\n");
    printf("This string contains a \\backslash\\\n");
    printf("This string contains a percent sign %%.\n");

    return 0;
}
💰 5. Basic If-Else Condition (Money Based)
📄 File: money_based_decision.c

c
Copy
Edit
#include<stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if(tk >= 100)
    {
        printf("Pizza kabo");
    }
    else if(tk >= 50)
    {
        printf("Fuska kabo");
    }
    else if(tk >= 20)
    {
        printf("Lisu kabo");
    }
    else
    {
        printf("Kisui kabo na");
    }

    return 0;
}
🍕 6. Simple If-Else Example
📄 File: pizza_decision.c

c
Copy
Edit
#include<stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if(tk >= 100)
    {
        printf("Pizza kabo");
    }
    else
    {
        printf("Pizza kabo na");
    }

    return 0;
}
📥 7. Taking Multiple Inputs
📄 File: multiple_inputs.c

c
Copy
Edit
#include<stdio.h>

int main()
{
    int age;
    float pi;
    char initial;

    scanf("%d %f %c", &age, &pi, &initial);

    printf("Age: %d\n", age);
    printf("Pi: %f\n", pi);
    printf("Initial: %c\n", initial);

    return 0;
}
➗ 8. Modulus Operation
📄 File: modulus_operator.c

c
Copy
Edit
#include<stdio.h>

int main()
{
    int a = 15;
    int b = 4;

    int mod = a % b;
    printf("%d", mod);

    return 0;
}
🏝️ 9. Nested If-Else (Travel Plan)
📄 File: nested_if_else.c

c
Copy
Edit
#include<stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("Cox's Bazar jabo\n");
        if (tk >= 10000)
        {
            printf("Saint Martin jabo\n");
        }
        else
        {
            printf("Go back to home\n");
        }
    }
    else
    {
        printf("Kotaw jabo na\n");
    }

    return 0;
}
📁 File List

File Name	Description
basic_arithmetic.c	Basic arithmetic operations
float_division.c	Floating point division example
swap_input_output.c	Print inputs in swapped order
special_characters.c	Using special characters in output
money_based_decision.c	Multiple condition-based decisions
pizza_decision.c	Simple if-else condition check
multiple_inputs.c	Taking different types of inputs
modulus_operator.c	Modulus (%) operation example
nested_if_else.c	Nested conditional logic
🧑‍💻 Author
Osman Goni

Continuing my C programming journey with Phitron! More modules will be added soon inshaAllah.
