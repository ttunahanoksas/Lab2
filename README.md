# Laboratory_2
Repo for second Lab

Tasks:

->Import this repo OK

->Use math.h, solve the distance task

->Solve the parabolic eq. task

->Create a simple loop, check debug options

->Modify the loop, get the difference between while and for loops

->Solve the last task



## Math functions
math.h includes a lot of **functions** that can be useful, such like sin(), cos(), pow(), sqrt(). We do not know much about functions, but we have used one-or-two before:

->printf() is a function, it receives a text (called string), and other parameters if needed (e.g. the number we want to print)
->scanf() also a function
->math functions are usually waiting for numbers, and they return with a result; e.g. sqrt(4) will result in 2, because square root of 4 is 2 so:

int a;

a=sqrt(4); //a value is assigned by the **result** of the called function sqrt() with parameter 4

It may seem overexplained, but that kind of understanding will help you later!

Another useful function for now is pow(), it required two parameters, pow(x,y) will return with the value x raised to the power of y (x^y)!
Of course with integer powers it can be done by multiplication, but it can be used for real valued powers as well!



Loops allow us to execute a block of code multiple times without writing it repeatedly.

---

## LOOPS

The `while` loop repeats a block **as long as a condition is true**.

**Syntax:**
```c
while (condition) {
    // code to execute
}

    The condition is checked before each iteration.

    If the condition is false at the start, the loop body may not run at all!

Example:

int i = 0;
while (i < 5) {
    printf("i = %d\n", i);
    i++;
}

2. The for loop

The for loop is often used when we know exactly how many times we want to repeat something.
It has three parts: initialization, condition, and update.

Syntax:

for (initialization; condition; update) {// any of them can be empty, but semicolon; is needed!
    // code to execute
}

    Initialization happens once at the beginning.

    The condition is checked before each iteration.

    The update happens after every iteration.

So what happens: Init->condition->body->update->condition->body->update->condition->body->update->condition untill condition is once fail!

Example:

for (int i = 0; i < 5; i++) {
    printf("i = %d\n", i);
}



3. Infinite loops

Both while and for can create infinite loops if the condition never becomes false.

while (1) {
    // runs forever
}

for (;;) {
    // runs forever
}
while is mostly used for this purpose!

