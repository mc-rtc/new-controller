mc\_rtc new controller template
==

This project is a template for a new controller project wihtin mc\_rtc

It comes with:
- a CMake project that can build a controller in mc\_rtc (can be established within mc\_rtc source-tree for easier updates)
- clang-format files
- automated GitHub Actions builds on three major platforms

Quick start
--

1. Renaming the controller from `NewController` to `MyController`. In a shell (Git Bash on Windows, replace sed with gsed on macOS):

```bash
sed -i -e's/NewController/MyController/g' `find . -type f`
git mv src/NewController.cpp src/MyController.cpp
git mv src/NewController.h src/MyController.h
```

2. Build and install the project

3. Run using your mc\_rtc interface of choice, and setting `Enabled` to `MyController`

[mc_rtc]: https://jrl-umi3218.github.io/mc_rtc/
