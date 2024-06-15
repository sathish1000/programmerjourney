Example 1 :-

```c++
void use_data(const std::map<std::string, std::string> &map) {
    for (const std::pair<std::string, std::string> &item : map) {
        std::cout << item.first << " " << std::endl;
    }
}
```