import os
import re

def extract_problem_type(content):
    """Extract problem type from file comments and content"""
    # Common keywords to identify problem types
    keywords = {
        'dfs': 'Graph Traversal',
        'bfs': 'Graph Traversal',
        'dijkstra': 'Shortest Path',
        'dynamic': 'Dynamic Programming',
        'kadane': 'Maximum Subarray',
        'interval': 'Interval Problems',
        'greedy': 'Greedy Algorithms',
        'binary_search': 'Binary Search',
        'string': 'String Processing'
    }
    
    for key, value in keywords.items():
        if key in content.lower():
            return value
    return "Miscellaneous"

def generate_contents():
    root_dir = "code"
    contents = {}
    
    # Walk through directory
    for dirpath, dirnames, filenames in os.walk(root_dir):
        for filename in filenames:
            if filename.endswith('.cpp'):
                filepath = os.path.join(dirpath, filename)
                
                # Read file content
                try:
                    with open(filepath, 'r') as f:
                        content = f.read()
                        
                        # Get category from directory structure
                        category = os.path.basename(dirpath)
                        if category not in contents:
                            contents[category] = []
                            
                        # Get problem type
                        problem_type = extract_problem_type(content)
                        
                        # Add to contents
                        rel_path = os.path.relpath(filepath, root_dir)
                        contents[category].append((rel_path, problem_type))
                except:
                    continue

    # Write contents.txt
    with open('contents.txt', 'w') as f:
        f.write("# Section headings must be in square brackets\n")
        f.write("# [filename within code directory]\t[subsection title]\n\n")
        
        for category, files in sorted(contents.items()):
            f.write(f"[{category.title()}]\n")
            for filepath, problem_type in sorted(files):
                f.write(f"{filepath}\t{problem_type}\n")
            f.write("\n")

if __name__ == "__main__":
    generate_contents()