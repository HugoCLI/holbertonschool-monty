# monty

This repository contains the implementation of the `push`, `pall`, and `pint` opcodes for the Monty language.

**Note:** If any of the opcodes encounter an error, the program will print an error message and exit with the status `EXIT_FAILURE`.

## Compiling and running the program

To compile the program, use the following command:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```


To run the program, use the following command, where `<filename>` is the name of the file containing Monty bytecode:

```
./monty <filename>
```

## push

The `push` opcode pushes an element to the stack.

#### Usage

```m
push <int>
```

where `<int>` is an integer.

#### Errors

- If there is no argument given to `push`, the program will print an error message.
- If `<int>` is not an integer, the program will print an error message.

## pall

The `pall` opcode prints all the values on the stack, starting from the top of the stack.

#### Usage

```m
pall
```


If the stack is empty, nothing will be printed.

## pint

The `pint` opcode prints the value at the top of the stack, followed by a new line.

#### Usage

```m
pint
```

#### Errors

- If the stack is empty, the program will print an error message.


## Example

Here is an example of a Monty file that uses the `push`, `pall`, and `pint` opcodes:

```m
push 1
push 2
push 3
pall
pint
```

When this file is run with the `./monty` program, it will produce the following output:

```
3
2
1
3
```

The `push` opcodes add the numbers `1`, `2`, and `3` to the stack. The `pall` opcode then prints all the values on the stack, starting from the top of the stack (`3`, `2`, `1`). Finally, the `pint` opcode prints the value at the top of the stack (`3`), followed by a new line.


## Contributors

- [Redginald Godeau](mailto:redginald.godeau@holbertonstudents.com) [Github](https://github.com/RedginaldGodeau)
- [Hugo Chilemme](mailto:hugo.chilemme@holbertonstudents.com) [Github](https://github.com/HugoCLI)
