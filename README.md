# ARRAY
## 🧠 Understanding Arrays in C++

### 📌 What is an Array?

An **array** is a **data structure** that stores a collection of elements — usually of the **same data type** — in **contiguous memory locations**.

* Think of it like a row of lockers, where each locker holds a value and has a specific position (index).
* Arrays allow efficient **index-based access** to elements.

---

### 🗂️ Indexing in Arrays

* Indexes start from **0** in C/C++.
* So, the 5th location corresponds to the **4th index**.
* **Example:**
  If `v[0]` is stored at address `100`, and `int` takes 4 bytes, then
  `v[2]` will be at address `100 + (2 * 4) = 108`.

---

### 🛠️ Declaring an Array

```cpp
int array[15]; // 'int' is the data type, 'array' is the variable name, and 15 is the size
```

---

### 🧾 Initializing an Array with a Particular Value

To initialize all elements of an array with a specific value:

```cpp
int arr[10];
for (int i = 0; i < 10; i++) {
    arr[i] = 5; // sets all values to 5
}
```

---

### ❓ Why Pass Array Size to a Function?

When passing an array to a function, the size **must be sent** separately because:

* The function **does not know** how many elements are in the array.
* Without size, it might:

  * Go **out of bounds** and access garbage values.
  * Cause a **crash** (segmentation fault).
  * Loop **infinitely** or produce incorrect results.

> ℹ️ The `sizeof` operator won’t give the correct number of elements inside the function, as it loses original size info.

---

### ⚠️ Array Passing is by Address (Not by Value)

When you pass an array to a function, you're actually passing a **pointer to its first element**, not a copy.

* So, any update inside the function **directly affects** the original array.
* Example:

  ```cpp
  void update(int arr[]) {
      arr[0] = 100; // This will change the original array’s first element
  }
  ```

---

### 🔁 Why Use a Temp Variable While Swapping?

* A temporary variable is used to **store one value safely** while switching positions.
* Without it, one of the values would be **overwritten**.
* Example:

  ```cpp
  int temp = a;
  a = b;
  b = temp;
  ```

---

### 🔢 Constants: INT\_MIN and INT\_MAX

* `INT_MIN`: stores the **minimum integer value** (from `<climits>`).
* `INT_MAX`: stores the **maximum integer value**.

These are useful for:

* Comparisons
* Initializing values for min/max logic in algorithms
