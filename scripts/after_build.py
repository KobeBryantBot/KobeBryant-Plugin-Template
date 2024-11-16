import argparse
import json


parser = argparse.ArgumentParser()
parser.add_argument("name", type=str)
name = parser.parse_args().name
path = f"../bin/{name}/manifest.json"
with open(path, "r", encoding="utf-8") as file:
    data = json.load(file)
data["name"] = name
data["entry"] = f"{name}.dll"
with open(path, "w", encoding="utf-8") as file:
    json.dump(data, file, ensure_ascii=False, indent=4)
