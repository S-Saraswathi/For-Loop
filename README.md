# Loops
## AIM
To understand the syntax and working of loops in C++. The main loops used:
- For Loop
- While
- Do-While Loop
## THEORY
Loops are used to make the program less repetitive and compact by iterating a part of a program several times. Thus, they are also called repetitive control structures. There are two main types of loops- for loop and while/do-while loop.
- For Loop<br />
  A for loop is used when we know the number of iterations of the block of code (i.e.) if the number of iterations is fixed. The flow of control of a 'for loop' is initialization, condition, and increment/decrement, separated from each other with a semicolon. The first step is to initialize the variable(s) used in the loop which is done only once at the start of the loop. Next, the condition is checked- if satisfied loop is executed otherwise jumps to the next block of code without execution. Finally, the variable initialized gets increased or decreased after every execution of the loop till the condition is satisfied.<br />
  Syntax of 'for loop' is:<br />
  **_for(initialization;condition;increment/decrement) {<br />
  //code executed inside loop<br />
  };_**
- While Loop<br />
  A while loop is used when we do not know the number of iterations required (i.e.) if the number of iterations is unfixed. The 'while loop' is specified with a condition and as long as this condition holds true or is satisfied, the while loop gets executed. The condition specified could be any expression in the conditional statements. If the condition becomes false, the block of code immediately following the loop gets executed.<br />
  Syntax of 'while loop is:<br />
  **_while(condition) {<br />
  //code executed inside loop<br />
  };_**
- Do-While Loop<br />
  A do-while loop is very similar to that of a while loop. The only difference is that whether or not the condition holds true the loop gets executed at least once (i.e.) the condition is checked after executing the 'do' part of the loop. If the condition holds true, then the loop is continued to execute until the condition becomes false.<br />
  Syntax of 'do-while loop' is:<br />
  **_do {<br />
  //code executed inside loop<br />
  }while(condition);_**
## ALGORITHM

  
