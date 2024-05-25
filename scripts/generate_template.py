import os
import argparse
 
# 模板文件路径
TEMPLATE_DESCRIPTION = 'template_description.md'
TEMPLATE_SOLUTION = 'template_solution.cpp'
 
def create_directory_structure(problem_number, category, plan=None):
    
    print(problem_number)
    print(category)
    print(plan)
    base_dir = f'../problems/problem_{problem_number}' if plan is None else f'../study-plan/{plan}/{category}/problem_{problem_number}'

    # 创建必要的目录
    os.makedirs(os.path.join(base_dir, 'description'), exist_ok=True)
    os.makedirs(os.path.join(base_dir, 'solutions'), exist_ok=True)

    # 读取模板内容
    with open(TEMPLATE_DESCRIPTION, 'r') as f:
        description_content = f.read()
    with open(TEMPLATE_SOLUTION, 'r') as f:
        solution_content = f.read()

    # 替换模板中的占位符
    description_content = description_content.replace('{{problem_number}}', str(problem_number))
    solution_content = solution_content.replace('{{problem_number}}', str(problem_number))

    # 创建 README.md 文件
    readme_content = f'# Problem {problem_number}\n\n[Problem Description](./description/problem_{problem_number}.md) | [Solution](./solutions/solution_{problem_number}.cpp)\n'
    with open(os.path.join(base_dir, 'README.md'), 'w') as f:
        f.write(readme_content)

    # 创建 description 文件
    with open(os.path.join(base_dir, 'description', f'problem_{problem_number}.md'), 'w') as f:
        f.write(description_content)

    # 创建 solution 文件
    with open(os.path.join(base_dir, 'solutions', f'solution_{problem_number}.cpp'), 'w') as f:
        f.write(solution_content)

    print(f'Directory structure for problem {problem_number} created successfully.')

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Generate template for new problem.')
    parser.add_argument('problem_number', type=int, help='Problem number')
    parser.add_argument('--category', type=str, required=True, help='Problem category (e.g., array, linked_list)')
    parser.add_argument('--plan', type=str, help='Study plan name (optional, e.g., leetcode75, hot-100)')

    args = parser.parse_args()

    create_directory_structure(args.problem_number, args.category, args.plan)