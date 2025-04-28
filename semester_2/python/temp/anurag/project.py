import os
import hashlib
from collections import defaultdict

def get_file_hash(file_path, chunk_size=4096):
    hasher = hashlib.md5()
    try:
        with open(file_path, 'rb') as f:
            while chunk := f.read(chunk_size):
                hasher.update(chunk)
        return hasher.hexdigest()
    except Exception as e:
        print(f"Could not read file {file_path}: {e}")
        return None

def find_duplicates(directory):
    hashes = defaultdict(list)

    for root, _, files in os.walk(directory):
        for file in files:
            full_path = os.path.join(root, file)
            file_hash = get_file_hash(full_path)
            if file_hash:
                hashes[file_hash].append(full_path)

    duplicates = {hash: paths for hash, paths in hashes.items() if len(paths) > 1}
    return duplicates

def print_duplicates(duplicates):
    if not duplicates:
        print("No duplicate files found.")
        return

    print("\nDuplicate files found:")
    for hash_val, files in duplicates.items():
        print(f"\nHash: {hash_val}")
        for file in files:
            print(f"  - {file}")

if __name__ == "_main_":
    folder_path = input("Enter the path to scan for duplicates: ").strip()
    if os.path.isdir(folder_path):
        duplicates = find_duplicates(folder_path)
        print_duplicates(duplicates)
    else:
        print("Invalid directory. Please try again.")