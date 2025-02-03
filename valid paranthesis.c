bool isValid(char* s)  {
    char stack[10000]; // Array to act as a stack, assuming max length 10000
    int top = -1; // Initial stack po
    
    // Iterate over each character in the input string
    for (int i = 0; s[i] != '\0'; i++) {
        char current = s[i];
        
        // If the current character is an opening bracket, push it onto the stack
        if (current == '(' || current == '{' || current == '[') {https://github.com/Wdhanashri/new-assignment-/tree/main
            stack[++top] = current; // Increment top and push the bracket
        } else {
            // If the current character is a closing bracket
            if (top == -1) {
                // Stack is empty, no matching opening bracket
                return false;
            }
            
            // Pop the stack and check if it matches the closing bracket
            char lastOpened = stack[top--];
            if ((current == ')' && lastOpened != '(') ||
                (current == '}' && lastOpened != '{') ||
                (current == ']' && lastOpened != '[')) {
                return false;
            }
        }
    }
    
    // After processing all characters, check if the stack is empty
    return top == -1;
}

    
