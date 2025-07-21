Recursion: A function calling itself directly from within its own body.

Indirect/Mutual Recursion: A set of functions calling each other in a cycle, eventually leading back to an earlier function in the cycle.

Standard Function Call: Any other function (or the main program) calling another function. This is the most general case.


Base call logic in detail:
Imagine the call stack like a stack of plates. When `f1()` is called, a new plate (representing that function's "turn" to do work) is placed on top.

Here's how it plays out with your code:

1.  **`f1()` (call 1):**

      * `cnt` is 0.
      * `print(cnt)` happens (prints 0).
      * `cnt` becomes 1.
      * **Calls `f1()` (call 2).** This *pauses* call 1 and puts call 2 on top of the stack.

2.  **`f1()` (call 2):**

      * `cnt` is 1.
      * `print(cnt)` happens (prints 1).
      * `cnt` becomes 2.
      * **Calls `f1()` (call 3).** This *pauses* call 2 and puts call 3 on top.

3.  **`f1()` (call 3):**

      * `cnt` is 2.
      * `print(cnt)` happens (prints 2).
      * `cnt` becomes 3.
      * **Calls `f1()` (call 4).** This *pauses* call 3 and puts call 4 on top.

4.  **`f1()` (call 4):**

      * `cnt` is 3.
      * `if cnt == 3:` is `True`.
      * **`return` is executed.** This means call 4 has finished *all* its work. It's done, and its plate is removed from the top of the stack.

Now, the important part:

When call 4 returns, the computer goes back to where call 3 was *paused*. Call 3 was paused right after it called `f1()` (call 4). Since call 4 has now finished, call 3 can continue from that exact spot.

But **there are no more lines of code in `f1()` after `f1()` calls itself\!**

Think of it:

```
function f1(){
   if cnt == 3:
          return
   print(cnt)  // <--- Code executed before the recursive call
   cnt++
  f1()         // <--- The recursive call happens here
  // NO CODE HERE TO EXECUTE AFTER THE RECURSIVE CALL RETURNS!
}
```

Because there's no code to execute *after* `f1()` calls itself, when `f1()` (call 4) returns, `f1()` (call 3) simply finishes its own work (which was effectively nothing more to do) and then *it* returns. This continues down the stack: `f1()` (call 2) finishes and returns, and then `f1()` (call 1) finishes and returns.

**In short: The functions behind the last one aren't printing `cnt` again because they had already executed their `print` statement *before* calling the next `f1()`. Once the recursive call finishes and returns to them, there are no more lines of code in their definition to execute *after* that recursive call.** They're not "waiting to print again"; they're waiting for the inner call to finish so *they* can finish their remaining (in this case, non-existent) work and then return themselves.