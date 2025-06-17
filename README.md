# Chef-and-Spells

### 🔍 **Short Explanation of the Approach:**

This C++ program checks whether a given pair of integers `(A, B)` **matches** either of two other pairs `(A1, B1)` or `(A2, B2)`, **regardless of order**.

---

### 🧠 **Logic:**

* The program runs for `T` test cases.
* For each test case:

  1. Reads the pair `(A, B)` — the reference pair.
  2. Reads two other pairs: `(A1, B1)` and `(A2, B2)`.
  3. Checks if `(A, B)` matches:

     * Pair 1 → outputs `1`
     * Pair 2 → outputs `2`
     * Neither → outputs `0`

**Matching is order-insensitive**: `(A == A1 && B == B1)` **or** `(A == B1 && B == A1)` means the pairs are equal regardless of position.

---

### ✅ Sample Use Case:

If `(A, B) = (3, 5)` and `(A1, B1) = (5, 3)` → it still counts as a match because order doesn’t matter.

