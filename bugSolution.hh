function foo(x: int): int {
  return x + 1;
}

function bar(x: int): int {
  try {
    return foo(x) + 1;
  } catch (Exception $e) {
    echo "Error in bar(): ".$e->getMessage();
    return 0; // Or handle the exception appropriately
  }
}

function baz(x: int): int {
  try {
    return bar(x) + 1;
  } catch (Exception $e) {
    echo "Error in baz(): ".$e->getMessage();
    return 0; // Or handle the exception appropriately
  }
}

function main(): void {
  echo baz(5);
}
//This improved version includes try-catch blocks to handle potential exceptions within each function.  Error messages are printed, and a default value (0) is returned.  A more robust solution might involve custom exception types or more sophisticated error handling logic.