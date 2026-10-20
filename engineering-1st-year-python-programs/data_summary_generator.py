"""
Develop Data Summary Generator: Read a CSV file (like COVID data or weather stats), convert to dictionary form and allow the user to run summary queries: max, min, average by column.
"""
import csv

def read_csv_to_dict(filename):
    with open(filename, 'r', encoding='utf-8') as f:
        return list(csv.DictReader(f))

def get_numeric_columns(data):
    numeric_cols = []
    for key in data[0].keys():
        try:
            float(data[0][key])
            numeric_cols.append(key)
        except ValueError:
            continue
    return numeric_cols

def column_summary(data, column, operation):
    values = [float(row[column]) for row in data if row[column] != '']
    if not values:
        return None
    if operation == 'max':
        return max(values)
    elif operation == 'min':
        return min(values)
    elif operation == 'average':
        return sum(values) / len(values)
    else:
        print("Invalid operation.")
        return None

def main():
    print("=== Data Summary Generator ===")
    filename = input("Enter CSV filename (with path): ").strip()

    data = read_csv_to_dict(filename)
    print(f"\nLoaded {len(data)} records successfully")
    numeric_cols = get_numeric_columns(data)

    if not numeric_cols:
        print("\nNo numeric columns found.")
        return
    print("Available numeric columns:", ', '.join(numeric_cols))

    col = input("Enter column name to summarize: ").strip()
    if col not in numeric_cols:
        print("Invalid column name. Try again.")
        return
    else:
        op = input("Choose operation (max/min/average): ").strip().lower()
        result = column_summary(data, col, op)
        if result is not None:
            print(f"{op.title()} value for '{col}' : {result:.2f}")

main()

"""
Output:
1.
Enter CSV filename (with path): covid.csv

Loaded 10 records successfully
Available numeric columns: Cases, Deaths, Recovered

Enter column name to summarize: Cases
Choose operation (max/min/average): average
Average value for 'Cases' : 77.50

2.
Enter CSV filename (with path): covid.csv

Loaded 10 records successfully
Available numeric columns: Cases, Deaths, Recovered

Enter column name to summarize: Dates
Invalid column name. Try again.

3.
Enter CSV filename (with path): covid2.csv

Loaded 2 records successfully

No numeric columns found.
"""
    