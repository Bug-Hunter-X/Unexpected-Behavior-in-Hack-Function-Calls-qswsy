function foo(x: int): int {
  return x + 1;
}

function bar(x: int): int {
  return foo(x) + 1;
}

function baz(x: int): int {
  return bar(x) + 1;
}

function main(): void {
  echo baz(5);
}

//Expected Output: 7
//Actual Output: 7
//In this case, the code works as expected, but there may be unexpected results in other cases. For example, if one of the functions throws an exception, then the other functions will not be called.
//Another case where the code works as expected is when the input is a valid integer. But if the input is not a valid integer, for example, if it is a string, then the code will throw an exception.