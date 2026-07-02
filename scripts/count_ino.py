"""Count the number of Arduino sketch (.ino) files in the repository."""
from pathlib import Path


def find_ino_files(root: str = ".") -> list[Path]:
    return sorted(Path(root).rglob("*.ino"))


def main() -> None:
    files = find_ino_files()
    print(f"Found {len(files)} .ino file(s):")
    for f in files:
        print(f"  - {f}")


if __name__ == "__main__":
    main()