# Hack Function Call Issue

This repository demonstrates a potential issue with function calls in Hack. The functions `foo`, `bar`, and `baz` are called sequentially.  The primary concern is the handling of exceptions—if one function throws an exception, the subsequent functions won't execute.  The example works as expected with integer inputs, but demonstrates a potential for unexpected behavior.

## How to Reproduce

1. Clone this repository.
2. Compile and run the `bug.hh` file using a Hack compiler.
3. Observe the output.
4. (Optional) Modify the input or functions to explore exception handling behavior.

## Solution

The `bugSolution.hh` file provides a possible solution, showing improved error handling. The best approach depends on the specific context and desired error handling strategy. Consider adding comprehensive exception handling within the functions to manage potential issues and prevent unexpected program termination.
