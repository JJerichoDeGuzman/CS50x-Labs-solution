#### Triangle Pattern 1 - Right Triangle Pattern (increasing)

```Cpp
#include <iostream>

int main() {
    int n = 5;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "#";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

```output
#
##
###
####
#####

```

#### Triangle Pattern 2 - Right Triangle Pattern (decreasing)

```Cpp
#include <iostream>

int main() {
    int n = 5;
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "#";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

```output
#####
####
###
##
#
```

#### Triangle Pattern 3 - Inverted Right Triangle Pattern (with leading dashes)

```Cpp
#include <iostream>

int main() {
    int n = 5;
    for (int i = 1; i <= n; ++i) {
        for (int k = n - i; k > 0; --k) {
            std::cout << "-";
        }

        for (int j = 1; j <= i; ++j) {
            std::cout << "#";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

```Output
----#
---##
--###
-####
#####
```

#### Triangle Pattern 4 - Inverted Right Triangle Pattern (with leading dashes and decreasing)

```Cpp
#include <iostream>

int main() {
    int n = 5;
    for (int i = n; i >= 1; --i) {
        for (int k = n - i; k > 0; --k) {
            std::cout << "-";
        }

        for (int j = 1; j <= i; ++j) {
            std::cout << "#";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

```Output
#####
-####
--###
---##
----#
```

