import argparse

def update_main_readme(problem_number, category, plan=None):
    main_readme = '../README.md'
    problem_path = f'problems/problem_{problem_number}' if plan is None else f'study-plan/{plan}/{category}/problem_{problem_number}'
    problem_entry = f'- [Problem {problem_number}](./{problem_path}/README.md)\n'
    
    with open(main_readme, 'a') as f:
        f.write(problem_entry)
    
    print(f'Main README updated with problem {problem_number}.')

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Update main README with new problem.')
    parser.add_argument('problem_number', type=int, help='Problem number')
    parser.add_argument('--category', type=str, required=True, help='Problem category (e.g., array, linked_list)')
    parser.add_argument('--plan', type=str, help='Study plan name (optional, e.g., leetcode75, hot-100)')

    args = parser.parse_args()

    update_main_readme(args.problem_number, args.category, args.plan)