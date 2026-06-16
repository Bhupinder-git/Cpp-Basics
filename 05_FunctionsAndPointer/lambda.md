# Lambda Functions in C++

## What is a Lambda Function?

A lambda function (or lambda expression) is an **anonymous function** that can be defined inline. It's a convenient way to define small functions without formally declaring them.

**Syntax:**

```cpp
[capture](parameters) -> ReturnType {
    // function body
};
```

---

## Basic Structure

### 1. **Capture Clause `[...]`**

Specifies which variables from the enclosing scope are accessible inside the lambda.

- `[]` - No access to enclosing scope
- `[x]` - Capture variable `x` by value
- `[&x]` - Capture variable `x` by reference
- `[=]` - Capture all variables by value
- `[&]` - Capture all variables by reference
- `[=, &x]` - Capture all by value except `x` by reference

### 2. **Parameters `(...)`**

The input parameters for the lambda function (optional).

### 3. **Return Type `->`**

Explicitly specifies the return type (optional, can be auto-deduced).

### 4. **Body `{ ... }`**

The function implementation.

---

## Examples

### Example 1: Simple Lambda (No Parameters)

```cpp
auto sayHello = []() {
    cout << "Hello, World!" << endl;
};
sayHello();  // Output: Hello, World!
```

### Example 2: Lambda with Parameters

```cpp
auto add = [](int a, int b) {
    return a + b;
};
cout << add(5, 3) << endl;  // Output: 8
```

### Example 3: Lambda with Explicit Return Type

```cpp
auto multiply = [](int x, int y) -> int {
    return x * y;
};
cout << multiply(4, 5) << endl;  // Output: 20
```

### Example 4: Lambda with Return Type `void`

```cpp
auto chaiFn = [](int cups) -> void {
    cout << "Serving " << cups << " cups of chai..." << endl;
};
chaiFn(4);  // Output: Serving 4 cups of chai...
```

### Example 5: Lambda with Capture by Value

```cpp
int multiplier = 5;
auto multiply = [multiplier](int x) {
    return x * multiplier;
};
cout << multiply(3) << endl;  // Output: 15
```

### Example 6: Lambda with Capture by Reference

```cpp
int counter = 0;
auto increment = [&counter]() {
    counter++;
};
increment();
increment();
cout << counter << endl;  // Output: 2
```

### Example 7: Immediately Invoked Lambda

```cpp
auto result = [](int a, int b) -> int {
    return a + b;
}(10, 20);
cout << result << endl;  // Output: 30
```

---

## Common Use Cases

### With `sort()` - Custom Comparator

```cpp
vector<int> nums = {5, 2, 9, 1, 3};
sort(nums.begin(), nums.end(), [](int a, int b) {
    return a > b;  // Descending order
});
```

### With `find_if()` - Conditional Search

```cpp
vector<int> nums = {1, 2, 3, 4, 5, 6};
auto it = find_if(nums.begin(), nums.end(), [](int x) {
    return x % 2 == 0;  // Find first even number
});
```

### With `transform()` - Transform Elements

```cpp
vector<int> nums = {1, 2, 3, 4};
vector<int> squared(nums.size());
transform(nums.begin(), nums.end(), squared.begin(), [](int x) {
    return x * x;
});
```

---

## Return Type Deduction

When you don't explicitly specify the return type with `->`, C++ will automatically deduce it:

```cpp
auto square = [](int x) {
    return x * x;  // Return type deduced as int
};
```

---

## Key Points

✓ **Lightweight and concise** - Great for short functions  
✓ **Can be stored in `auto`** - No need to define separate function  
✓ **Flexible capture** - Control access to enclosing scope variables  
✓ **Works with STL algorithms** - Perfect for `sort()`, `find()`, `transform()`, etc.  
✗ **Limited scope** - Typically used for short, simple operations

---

## Compilation Errors & Fixes

### ❌ Error: `deduced type 'void' for lambda is incomplete`

**Problem:** Trying to assign a void lambda to `auto` with immediate invocation.

```cpp
auto chaiFn = [](int cups){ cout << cups; }(4);  // ERROR!
```

**Solution:** Either add return type or store lambda separately.

```cpp
// Option 1: Add return type
auto chaiFn = [](int cups) -> void { cout << cups; }(4);

// Option 2: Store without invoking
auto chaiFn = [](int cups){ cout << cups; };
chaiFn(4);
```

---

## Lambda in C++11, C++14, C++17+

| Feature           | C++11 | C++14 | C++17+ |
| ----------------- | ----- | ----- | ------ |
| Basic lambdas     | ✓     | ✓     | ✓      |
| Auto parameters   | ✗     | ✓     | ✓      |
| Constexpr lambdas | ✗     | ✗     | ✓      |
| Capture by move   | ✗     | ✓     | ✓      |
