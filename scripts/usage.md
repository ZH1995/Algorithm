## generate_template.py

```sh
python generate_template.py 101 --category array --plan leetcode75
```
Generate new question directory structure and files.
Such as:
```sh
study-plan/
└── leetcode75/
    └── array/
        └── problem_101/
            ├── README.md
            ├── description/
            │   └── problem_101.md
            └── solutions/
                └── solution_101.cpp
```


## update_readme.py
```sh
python update_readme.py 101 --category array --plan leetcode75
```
This will add a new link entry to the README.md file in the home directory to facilitate quick navigation to the newly generated questions.